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

package com.parrot.drone.groundsdk;

import com.parrot.drone.groundsdk.device.peripheral.camera.CameraWhiteBalanceLock;

import org.hamcrest.FeatureMatcher;
import org.hamcrest.Matcher;

import static com.parrot.drone.groundsdk.MatcherBuilders.valueMatcher;
import static org.hamcrest.Matchers.allOf;
import static org.hamcrest.Matchers.equalTo;

public final class CameraWhiteBalanceLockMatcher {

    public static Matcher<CameraWhiteBalanceLock> whiteBalanceIsLockable(boolean lockable) {
        return valueMatcher(lockable, "lockable", CameraWhiteBalanceLock::isLockable);
    }

    public static Matcher<CameraWhiteBalanceLock> whiteBalanceLockIsUpdatingTo(boolean locked) {
        return allOf(
                whiteBalanceIsLocked(locked),
                whiteBalanceLockIsUpdating());
    }

    public static Matcher<CameraWhiteBalanceLock> whiteBalanceLockIsUpToDateAt(boolean locked) {
        return allOf(
                whiteBalanceIsLocked(locked),
                whiteBalanceLockIsUpToDate());
    }

    private static Matcher<CameraWhiteBalanceLock> whiteBalanceIsLocked(boolean locked) {
        return valueMatcher(locked, "locked", CameraWhiteBalanceLock::isLocked);
    }

    private static Matcher<CameraWhiteBalanceLock> whiteBalanceLockIsUpdating() {
        return new FeatureMatcher<CameraWhiteBalanceLock, Boolean>(equalTo(true), "updating is", "updating") {

            @Override
            protected Boolean featureValueOf(CameraWhiteBalanceLock actual) {
                return actual.isUpdating();
            }
        };
    }

    private static Matcher<CameraWhiteBalanceLock> whiteBalanceLockIsUpToDate() {
        return new FeatureMatcher<CameraWhiteBalanceLock, Boolean>(equalTo(false), "updating is", "updating") {

            @Override
            protected Boolean featureValueOf(CameraWhiteBalanceLock actual) {
                return actual.isUpdating();
            }
        };
    }

    private CameraWhiteBalanceLockMatcher() {
    }
}