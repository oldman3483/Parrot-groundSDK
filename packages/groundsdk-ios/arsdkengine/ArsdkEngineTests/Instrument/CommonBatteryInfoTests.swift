// Copyright (C) 2019 Parrot Drones SAS
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

class CommonBatteryInfoTests: ArsdkEngineTestBase {

    var drone: DroneCore!
    var batteryInfo: BatteryInfo?
    var batteryInfoRef: Ref<BatteryInfo>?
    var changeCnt = 0

    override func setUp() {
        super.setUp()
        mockArsdkCore.addDevice("123", type: Drone.Model.anafi4k.internalId, backendType: .net, name: "Drone1",
                                handle: 1)
        drone = droneStore.getDevice(uid: "123")!

        batteryInfoRef = drone.getInstrument(Instruments.batteryInfo) { [unowned self] batteryInfo in
                self.batteryInfo = batteryInfo
                self.changeCnt += 1
        }
        changeCnt = 0
    }

    func testPublishUnpublish() {
        // should be unavailable when the drone is not connected
        assertThat(batteryInfo, `is`(nilValue()))

        connect(drone: drone, handle: 1)
        assertThat(batteryInfo, `is`(present()))
        assertThat(changeCnt, `is`(1))

        disconnect(drone: drone, handle: 1)
        assertThat(batteryInfo, `is`(nilValue()))
        assertThat(changeCnt, `is`(2))
    }

    func testBatteryLevel() {
        connect(drone: drone, handle: 1)
        // check default values
        assertThat(batteryInfo!.batteryLevel, `is`(0))
        assertThat(changeCnt, `is`(1))

        // check battery level received
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.commonCommonstateBatterystatechangedEncoder(percent: 60))
        assertThat(batteryInfo!.batteryLevel, `is`(60))
        assertThat(changeCnt, `is`(2))
    }

    func testBatteryHealth() {
        connect(drone: drone, handle: 1)
        // check default values
        assertThat(batteryInfo!.batteryHealth, nilValue())
        assertThat(changeCnt, `is`(1))

        // check battery health received
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.batteryHealthEncoder(stateOfHealth: 60))
        assertThat(batteryInfo!.batteryHealth, `is`(60))
        assertThat(changeCnt, `is`(2))
    }

    func testCycleCount() {
        connect(drone: drone, handle: 1)
        // check default values
        assertThat(batteryInfo!.cycleCount, nilValue())
        assertThat(changeCnt, `is`(1))

        // check battery health received
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.batteryCycleCountEncoder(count: 5))
        assertThat(batteryInfo!.cycleCount, `is`(5))
        assertThat(changeCnt, `is`(2))

        // check battery health received with same value, changeCnt may not change
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.batteryCycleCountEncoder(count: 5))
        assertThat(batteryInfo!.cycleCount, `is`(5))
        assertThat(changeCnt, `is`(2))

        // check battery health received with new value, changeCnt should increase
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.batteryCycleCountEncoder(count: 6))
        assertThat(batteryInfo!.cycleCount, `is`(6))
        assertThat(changeCnt, `is`(3))

        // check battery serial
        mockArsdkCore.onCommandReceived(
            1, encoder: CmdEncoder.batterySerialEncoder(serial: "1234"))
        assertThat(batteryInfo!.serial, `is`("1234"))
        assertThat(changeCnt, `is`(4))
    }

}
