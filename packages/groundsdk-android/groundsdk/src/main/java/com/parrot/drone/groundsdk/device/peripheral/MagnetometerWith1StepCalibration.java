/*
 *     Copyright (C) 2019 Parrot Drones SAS
 *
 *     Redistribution and use in source and binary forms, with or without
 *     modification, are permitted provided that the following conditions
 *     are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of the Parrot Company nor the names
 *       of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *     "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *     LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *     FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *     PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
 *     INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *     BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 *     OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *     AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 *     OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 *     OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 *     SUCH DAMAGE.
 *
 */

package com.parrot.drone.groundsdk.device.peripheral;

import androidx.annotation.IntRange;
import androidx.annotation.Nullable;

import com.parrot.drone.groundsdk.Ref;

/**
 * Peripheral interface for magnetometer with 1-step calibration process.
 * <p>
 * The calibration is done on the 3 axes simultaneously: roll, pitch and yaw.
 * <p>
 * This peripheral can be obtained from a {@link Provider peripheral providing device} (such as a drone or a
 * remote control) using:
 * <br><pre>    {@code device.getPeripheral(MagnetometerWith1StepCalibration.class)}</pre>
 *
 * @see Provider#getPeripheral(Class)
 * @see Provider#getPeripheral(Class, Ref.Observer)
 */
public interface MagnetometerWith1StepCalibration extends Magnetometer {

    /**
     * State of the calibration process.
     * <p>
     * The calibration is done on the 3 axes simultaneously: roll, pitch and yaw.
     * The calibration progress is provided for each axis as a percentage, in range [0, 100].
     * The magnetometer is calibrated when the calibration progress of the 3 axes has reached 100%.
     */
    interface CalibrationProcessState {

        /**
         * Gets the progress of calibration on roll axis.
         * <p>
         * For a drone, roll axis is the longitudinal axis (axis traversing the drone from tail to head)
         *
         * @return calibration progress as a percentage, in range [0, 100].
         */
        @IntRange(from = 0, to = 100)
        int rollProgress();

        /**
         * Gets the progress of calibration on pitch axis.
         * <p>
         * For a drone, pitch axis is the lateral axis (axis traversing the drone from right to left)
         *
         * @return calibration progress as a percentage, in range [0, 100].
         */
        @IntRange(from = 0, to = 100)
        int pitchProgress();


        /**
         * Gets progress of calibration on yaw axis.
         * <p>
         * For a drone, yaw axis is the vertical axis going through the center of the drone.
         *
         * @return calibration progress as a percentage, in range [0, 100].
         */
        @IntRange(from = 0, to = 100)
        int yawProgress();
    }

    /**
     * Gets the state of the calibration process.
     * <p>
     * Note: to start a calibration process, use {@link #startCalibrationProcess()}.
     *
     * @return the state of the calibration process if the process is started, otherwise {@code null}
     *
     * @see #startCalibrationProcess()
     */
    @Nullable
    CalibrationProcessState getCalibrationProcessState();

    /**
     * Starts the calibration process.
     * <p>
     * After this call, {@link #getCalibrationProcessState()} should return a not null object as the process has
     * started. <br>
     * The process ends either when all axes are re-calibrated or when you call {@link #cancelCalibrationProcess()}.
     * <p>
     * Note: no changes if the process is already started.
     */
    void startCalibrationProcess();

    /**
     * Cancels the calibration process.
     * <p>
     * Cancel a process that has been started with {@link #startCalibrationProcess()}. <br>
     * After this call, {@link #getCalibrationProcessState()} should return a null object as the process has ended.
     * <p>
     * Note: no changes if the process is not started.
     */
    void cancelCalibrationProcess();
}
