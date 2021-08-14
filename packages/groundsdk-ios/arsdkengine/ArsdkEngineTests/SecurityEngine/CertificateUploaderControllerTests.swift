// Copyright (C) 2020 Parrot Drones SAS
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions
//    are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//    * Neither the name of the Parrot Company nor the names
//      of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written
//      permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//    PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
//    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
//    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
//    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
//    SUCH DAMAGE.

import Foundation
import XCTest

@testable import ArsdkEngine
@testable import GroundSdk
import SdkCoreTesting

class CertificateUploaderControllerTests: ArsdkEngineTestBase {

    var drone: DroneCore!
    var certificateUploader: CertificateUploader?
    var certificateUploaderRef: Ref<CertificateUploader>?
    var changeCnt = 0

    override func setUp() {
        super.setUp()
        setUpDrone()
        changeCnt = 0
    }

    func setUpDrone() {
        mockArsdkCore.addDevice("123", type: Drone.Model.anafi4k.internalId, backendType: .net, name: "Drone1",
                                handle: 1)
        drone = droneStore.getDevice(uid: "123")!

        certificateUploaderRef =
            drone.getPeripheral(Peripherals.certificateUploader) { [unowned self] certificateUploader in
                self.certificateUploader = certificateUploader
                self.changeCnt += 1
        }
    }

    func testPublishUnpublish() {
        connect(drone: drone, handle: 1)
        assertThat(certificateUploader, `is`(present()))

        disconnect(drone: drone, handle: 1)
        assertThat(certificateUploader, `is`(nilValue()))
        assertThat(changeCnt, `is`(2))

        connect(drone: drone, handle: 1)
        assertThat(certificateUploader, `is`(present()))
        assertThat(changeCnt, `is`(3))
    }

    func testUpload() {
        connect(drone: drone, handle: 1)
        assertThat(certificateUploader, `is`(present()))
        assertThat(changeCnt, `is`(1))

        certificateUploader?.upload(certificate: "certificate1")

        let task = httpSession.popLastTask() as? MockUploadTask
        assertThat(task, presentAnd(isUploading(fileUrl: URL(fileURLWithPath: "certificate1"))))
        task?.mock(progress: 100)
        task?.mockCompletion(statusCode: 200)
        assertThat(task, presentAnd(has(api: "/api/v1/credential/certificate")))

        // Check that even if the latest success just happened, a new upload request is issued
        // mock upload failed
        assertThat(task, presentAnd(isUploading(fileUrl: URL(fileURLWithPath: "certificate1"))))
        task?.mock(progress: 100)
        task?.mockCompletion(statusCode: 404)
        // nothing changes since we don't do anything upon success

        disconnect(drone: drone, handle: 1)

    }
}
