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

import UIKit
import GroundSdk

class ThermalControlViewController: UITableViewController, DeviceViewController {

    private let rowMode = 0
    private let rowSensitivityRange = 1
    private let rowEmissivity = 2
    private let rowBackgroundTemperature = 3
    private let rowColorPalette = 4
    private let rowRendering = 5
    private let rowCalibration = 6

    private let groundSdk = GroundSdk()
    private var droneUid: String?
    private var thermalControl: Ref<ThermalControl>?
    private var stateRef: Ref<DeviceState>?

    @IBOutlet weak var mode: UILabel!
    @IBOutlet weak var sensitivityRange: UILabel!
    @IBOutlet weak var calibrationMode: UILabel!
    @IBOutlet weak var calibrateBtn: UIBarButtonItem!

    func setDeviceUid(_ uid: String) {
        droneUid = uid
    }

    @IBAction func calibrate(_ sender: Any) {
        _ = thermalControl?.value?.calibration?.calibrate()
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        if let drone = groundSdk.getDrone(uid: droneUid!) {
            thermalControl = drone.getPeripheral(Peripherals.thermalControl) { [weak self] thermalControl in
                if let thermalControl = thermalControl, let `self` = self {
                    // mode
                    self.mode.text = thermalControl.setting.mode.description
                    self.tableView.enable(section: 0, row: self.rowMode, on: !thermalControl.setting.updating)
                    // sensitivity
                    self.sensitivityRange.text = thermalControl.sensitivitySetting.sensitivityRange.description
                    self.tableView.enable(section: 0, row: self.rowSensitivityRange,
                                          on: !thermalControl.sensitivitySetting.updating)
                    // calibration
                    self.calibrationMode.text = thermalControl.calibration?.mode.description ?? "-"
                    self.tableView.enable(section: 0, row: self.rowCalibration,
                                          on: !(thermalControl.calibration?.updating ?? true))
                    self.calibrateBtn.isEnabled = thermalControl.calibration != nil

                    self.stateRef = drone.getState { [unowned self] _ in
                        self.tableView.reloadData()
                    }
                } else {
                    self?.performSegue(withIdentifier: "exit", sender: self)
                }
            }
        }
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if let thermalControl = thermalControl?.value, let target = segue.destination as? ChooseEnumViewController {
            if let indexPath = tableView.indexPathForSelectedRow {
                if indexPath.row == rowMode {
                    target.initialize(data: ChooseEnumViewController.Data(
                        dataSource: [ThermalControlMode](thermalControl.setting.supportedModes),
                        selectedValue: thermalControl.setting.mode.description,
                        itemDidSelect: { [unowned self] value in
                            self.thermalControl?.value?.setting.mode = value as! ThermalControlMode
                        }
                    ))
                } else if indexPath.row == rowSensitivityRange {
                    target.initialize(data: ChooseEnumViewController.Data(
                        dataSource:
                            [ThermalSensitivityRange](thermalControl.sensitivitySetting.supportedSensitivityRanges),
                        selectedValue: thermalControl.sensitivitySetting.sensitivityRange.description,
                        itemDidSelect: { [unowned self] value in
                            self.thermalControl?.value?.sensitivitySetting.sensitivityRange =
                                value as! ThermalSensitivityRange
                        }
                    ))
                } else if indexPath.row == rowCalibration, let calibration = thermalControl.calibration {
                    target.initialize(data: ChooseEnumViewController.Data(
                        dataSource: [ThermalCalibrationMode](calibration.supportedModes),
                        selectedValue: calibration.mode.description,
                        itemDidSelect: { [unowned self] value in
                            self.thermalControl?.value?.calibration?.mode = value as! ThermalCalibrationMode
                        }
                    ))
                }
            }
        } else if segue.identifier == "selectEmissivityValue" {
            (segue.destination as! ThermalEmissivityViewController).setDeviceUid(droneUid!)
        } else if segue.identifier == "selectColorPalette" {
            (segue.destination as! ThermalChoosePaletteViewController).setDeviceUid(droneUid!)
        } else if segue.identifier == "selectBackgroundTemperature" {
            (segue.destination as! ThermalBackgroundTemperatureVC).setDeviceUid(droneUid!)
        } else if segue.identifier == "selectRendering" {
            (segue.destination as! ThermalRenderingViewController).setDeviceUid(droneUid!)
        }
    }

    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if indexPath.section == 0,
            indexPath.row == rowMode || indexPath.row == rowSensitivityRange || indexPath.row == rowCalibration {
            performSegue(withIdentifier: "selectEnumValue", sender: self)
        } else if indexPath.section == 0 && indexPath.row == rowEmissivity {
            performSegue(withIdentifier: "selectEmissivityValue", sender: self)
        } else if indexPath.section == 0 && indexPath.row == rowBackgroundTemperature {
            performSegue(withIdentifier: "selectBackgroundTemperature", sender: self)
        } else if indexPath.section == 0 && indexPath.row == rowColorPalette {
            performSegue(withIdentifier: "selectColorPalette", sender: self)
        } else if indexPath.section == 0 && indexPath.row == rowRendering {
            performSegue(withIdentifier: "selectRendering", sender: self)
        }
    }

    override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        var rowHeight: CGFloat = 44.0
        if thermalControl?.value?.calibration == nil, indexPath.row == rowCalibration {
            rowHeight = 0.0
        }

        if let state = stateRef?.value?.connectionState {
            let offLineRows: Set<Int> = [rowMode, rowSensitivityRange]
            if state == .disconnected {
                if !offLineRows.contains(indexPath.row) {
                    rowHeight = 0.0
                }
            }
        }
        return rowHeight
    }
}

private extension UITableView {
    func enable(section: Int, row: Int, on: Bool) {
        cellForRow(at: IndexPath(item: row, section: section))?.enable(on: on)
    }
}

private extension UITableViewCell {
    func enable(on: Bool) {
        for view in contentView.subviews {
            view.isUserInteractionEnabled = on
            view.alpha = on ? 1 : 0.5
        }
    }
}
