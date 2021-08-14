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

class DriControllerTests: ArsdkEngineTestBase {

    var drone: DroneCore!
    var dri: Dri?
    var driRef: Ref<Dri>?
    var changeCnt = 0

    override func setUp() {
        super.setUp()
        setUpDrone()
    }

    func setUpDrone() {
        mockArsdkCore.addDevice("123", type: Drone.Model.anafi4k.internalId, backendType: .net, name: "Drone1",
                                handle: 1)
        drone = droneStore.getDevice(uid: "123")!

        driRef = drone.getPeripheral(Peripherals.dri) { [unowned self] dri in
            self.dri = dri
            self.changeCnt += 1
        }
        changeCnt = 0
    }

    override func resetArsdkEngine() {
        super.resetArsdkEngine()
        setUpDrone()
    }

    func testPublishUnpublish() {
        assertThat(dri, nilValue())

        connect(drone: drone, handle: 1)
        assertThat(dri, nilValue())
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(0))

        connect(drone: drone, handle: 1) {
            self.mockCapabilities()
        }
        assertThat(dri, present())
        assertThat(changeCnt, `is`(1))

        disconnect(drone: drone, handle: 1)
        assertThat(dri, present())
        assertThat(changeCnt, `is`(1))

        _ = drone.forget()
        assertThat(dri, `is`(nilValue()))
        assertThat(changeCnt, `is`(2))
    }

    func testModeSwitch() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities()
        }

        assertThat(dri, present())
        assertThat(dri!.mode, nilValue())
        assertThat(changeCnt, `is`(1))

        disconnect(drone: drone, handle: 1)
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1,
                                                 encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
        }
        assertThat(dri!.mode, present())
        assertThat(dri!.mode!, `is`(false))
        assertThat(changeCnt, `is`(2))

        // receive a switch mode
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .enabled))
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.mode!, `is`(true))

        // receive a switch mode (previous mode is enabled) -> no change
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .enabled))
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.mode!, `is`(true))

        // Receive Dri id type and Dri id
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDroneIdEncoder(
                                            type: .fr30Octets, value: "123456789012345678901234567890"))
        assertThat(changeCnt, `is`(4))
        assertThat(dri!.droneId?.id, `is`("123456789012345678901234567890"))
        assertThat(dri!.droneId?.type, `is`(.FR_30_Octets))

        // Receive new Dri id type and new Dri id
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDroneIdEncoder(
                                            type: .ansiCta2063, value: "1234567890123456789012345678901234567890"))
        assertThat(changeCnt, `is`(5))
        assertThat(dri!.droneId?.id, `is`("1234567890123456789012345678901234567890"))
        assertThat(dri!.droneId?.type, `is`(.ANSI_CTA_2063))

        // receive a switch mode disabled
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
        assertThat(changeCnt, `is`(6))
        assertThat(dri!.mode!, `is`(false))

        // receive a switch mode (previous mode is disabled) -> no change
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
        assertThat(changeCnt, `is`(6))
        assertThat(dri!.mode!, `is`(false))

        disconnect(drone: drone, handle: 1)
        assertThat(dri, present())
        assertThat(changeCnt, `is`(6))
        assertThat(dri!.mode!, `is`(false))
        assertThat(dri!.droneId?.id, `is`("1234567890123456789012345678901234567890"))
    }

    func testOnOffCapabilities() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1,
                                                 encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
        }
        // check default values
        assertThat(dri, present())
        assertThat(dri!.mode!, `is`(false))
        assertThat(changeCnt, `is`(1))

        disconnect(drone: drone, handle: 1)
        assertThat(dri, present())
        assertThat(changeCnt, `is`(1))
        dri!.mode!.value = true
        assertThat(dri!.mode!.updating, `is`(false))
        assertThat(changeCnt, `is`(2))

        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1,
                                                 encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
            self.expectCommand(handle: 1, expectedCmd: ExpectedCmd.driDriMode(mode: .enabled))
        }
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .enabled))
        assertThat(dri, present())
        assertThat(dri!.mode!, `is`(true))
        assertThat(changeCnt, `is`(2))

        expectCommand(handle: 1, expectedCmd: ExpectedCmd.driDriMode(mode: .disabled))
        dri!.mode!.value = false
        assertThat(dri!.mode!.updating, `is`(true))
        assertThat(changeCnt, `is`(3))
        mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDriStateEncoder(mode: .disabled))
        assertThat(dri!.mode!.updating, `is`(false))
        assertThat(changeCnt, `is`(4))
        dri!.mode!.value = false
        assertThat(changeCnt, `is`(4))

        expectCommand(handle: 1, expectedCmd: ExpectedCmd.driDriMode(mode: .enabled))
        dri!.mode!.value = true
        disconnect(drone: drone, handle: 1)

        resetArsdkEngine()
        changeCnt = 0
        assertThat(dri, present())
        assertThat(dri!.mode, present())
        assertThat(dri!.mode!.value, `is`(true))

        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1,
                                                 encoder: CmdEncoder.driDriStateEncoder(mode: .enabled))
        }
        disconnect(drone: drone, handle: 1)
        assertThat(dri, present())
        _ = drone.forget()
        assertThat(dri, nilValue())
    }

    func testIdPersistence() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDroneIdEncoder(
                                                    type: .ansiCta2063, value: "testAnsi"))
        }

        // initial values
        assertThat(changeCnt, `is`(1))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testAnsi")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.ANSI_CTA_2063)))

        // disconnect drone, identifier should remain available
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(1))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testAnsi")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.ANSI_CTA_2063)))

        // reset engine, identifier should be loaded from persisted data
        resetArsdkEngine()
        assertThat(changeCnt, `is`(0))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testAnsi")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.ANSI_CTA_2063)))

        // connect drone, changing identifier
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.onOff)
            self.mockArsdkCore.onCommandReceived(1, encoder: CmdEncoder.driDroneIdEncoder(
                                                    type: .fr30Octets, value: "testFr"))
        }
        assertThat(changeCnt, `is`(1))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testFr")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.FR_30_Octets)))

        // disconnect drone, identifier should remain available
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(1))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testFr")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.FR_30_Octets)))

        // reset engine, identifier should be loaded from persisted data
        resetArsdkEngine()
        assertThat(changeCnt, `is`(0))
        assertThat(dri?.droneId?.id, presentAnd(`is`("testFr")))
        assertThat(dri?.droneId?.type, presentAnd(`is`(.FR_30_Octets)))
    }

    func testSupportedTypes() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities()
        }

        // initial values
        assertThat(changeCnt, `is`(1))
        assertThat(dri, present())
        assertThat(dri!.type.supportedTypes, empty())

        // receive capabilities change
        mockCapabilities(.frenchRegulation)
        assertThat(changeCnt, `is`(2))
        assertThat(dri!.type.supportedTypes, `is`([.french]))

        // receive same capabilities, should change nothing
        mockCapabilities(.frenchRegulation)
        mockCapabilities(.frenchRegulation)
        assertThat(changeCnt, `is`(2))
        assertThat(dri!.type.supportedTypes, `is`([.french]))

        // receive capabilities change
        mockCapabilities(.frenchRegulation, .en4709_002Regulation)
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.supportedTypes, `is`([.french, .en4709_002]))

        // disconnect drone, supported types should not change
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.supportedTypes, `is`([.french, .en4709_002]))

        // reset engine, supported types should be loaded from persisted data
        resetArsdkEngine()
        assertThat(changeCnt, `is`(0))
        assertThat(dri!.type.supportedTypes, `is`([.french, .en4709_002]))
    }

    func testTypeState() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities()
        }

        // initial values
        assertThat(changeCnt, `is`(1))
        assertThat(dri, present())
        assertThat(dri!.type.state, nilValue())

        // receive state change
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "", type: .french, status: .success))
        assertThat(changeCnt, `is`(2))
        assertThat(dri!.type.state, `is`(.configured(type: .french)))

        // receive state change
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "operator",
                                                                              type: .en4709_002,
                                                                              status: .success))
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.state, `is`(.configured(type: .en4709_002(operatorId: "operator"))))

        // receive same capabilities, should change nothing
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "operator",
                                                                              type: .en4709_002,
                                                                              status: .success))
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.state, `is`(.configured(type: .en4709_002(operatorId: "operator"))))

        // receive state change
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "", type: .french, status: .failure))
        assertThat(changeCnt, `is`(4))
        assertThat(dri!.type.state, `is`(.failure))

        // disconnect drone, state should be reset to nil
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(5))
        assertThat(dri!.type.state, nilValue())
    }

    func testTypeConfig() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.frenchRegulation, .en4709_002Regulation)
        }

        // initial values
        assertThat(changeCnt, `is`(1))
        assertThat(dri, present())
        assertThat(dri!.type.type, nilValue())
        assertThat(dri!.type.state, nilValue())

        // change type configuration
        expectCommand(handle: 1, expectedCmd: ExpectedCmd.driSetDriType(type: .french, id: ""))
        dri!.type.type = .french
        assertThat(changeCnt, `is`(2))
        assertThat(dri!.type.type, `is`(.french))
        assertThat(dri!.type.state, `is`(.updating))

        // receive type change
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "", type: .french, status: .success))
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.type, `is`(.french))
        assertThat(dri!.type.state, `is`(.configured(type: .french)))

        // change type configuration
        expectCommand(handle: 1, expectedCmd: ExpectedCmd.driSetDriType(type: .en4709_002, id: "FIN87astrdge12k8-xyz"))
        dri!.type.type = .en4709_002(operatorId: "FIN87astrdge12k8-xyz")
        assertThat(changeCnt, `is`(4))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
        assertThat(dri!.type.state, `is`(.updating))

        // receive type change
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driDriTypeEncoder(id: "FIN87astrdge12k8",
                                                                              type: .en4709_002,
                                                                              status: .success))
        assertThat(changeCnt, `is`(5))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
        assertThat(dri!.type.state, `is`(.configured(type: .en4709_002(operatorId: "FIN87astrdge12k8"))))

        // set to same type configuration, should do nothing
        dri!.type.type = .en4709_002(operatorId: "FIN87astrdge12k8-xyz")
        assertThat(changeCnt, `is`(5))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
        assertThat(dri!.type.state, `is`(.configured(type: .en4709_002(operatorId: "FIN87astrdge12k8"))))

        // reset type configuration, should not send a command
        dri!.type.type = nil
        assertThat(changeCnt, `is`(6))
        assertThat(dri!.type.type, nilValue())
        assertThat(dri!.type.state, `is`(.configured(type: .en4709_002(operatorId: "FIN87astrdge12k8"))))
    }

    func testTypeConfigOffline() {
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.frenchRegulation, .en4709_002Regulation)
        }

        // initial values
        assertThat(changeCnt, `is`(1))
        assertThat(dri, present())
        assertThat(dri!.type.type, nilValue())

        // disconnect drone
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(1))
        assertThat(dri, present())
        assertThat(dri!.type.type, nilValue())

        // change type configuration
        dri!.type.type = .french
        assertThat(changeCnt, `is`(2))
        assertThat(dri!.type.type, `is`(.french))
        assertThat(dri!.type.state, nilValue())

        // change type configuration
        dri!.type.type = .en4709_002(operatorId: "FIN87astrdge12k8-xyz")
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
        assertThat(dri!.type.state, nilValue())

        // set to same type configuration, should change nothing
        dri!.type.type = .en4709_002(operatorId: "FIN87astrdge12k8-xyz")
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
        assertThat(dri!.type.state, nilValue())

        // connect drone, type configuration should be sent
        connect(drone: drone, handle: 1) {
            self.mockCapabilities(.frenchRegulation, .en4709_002Regulation)
            self.expectCommand(handle: 1, expectedCmd: ExpectedCmd.driSetDriType(type: .en4709_002,
                                                                                 id: "FIN87astrdge12k8-xyz"))
        }
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))

        // disconnect drone, type configuration should not change
        disconnect(drone: drone, handle: 1)
        assertThat(changeCnt, `is`(3))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))

        // reset engine, type configuration should be loaded from persisted data
        resetArsdkEngine()
        assertThat(changeCnt, `is`(0))
        assertThat(dri!.type.type, `is`(.en4709_002(operatorId: "FIN87astrdge12k8-xyz")))
    }

    func mockCapabilities(_ values: ArsdkFeatureDriSupportedCapabilities...) {
        mockArsdkCore.onCommandReceived(1,
                                        encoder: CmdEncoder.driCapabilitiesEncoder(
                                            supportedCapabilitiesBitField:
                                                Bitfield<ArsdkFeatureDriSupportedCapabilities>.of(values)))
    }
}
