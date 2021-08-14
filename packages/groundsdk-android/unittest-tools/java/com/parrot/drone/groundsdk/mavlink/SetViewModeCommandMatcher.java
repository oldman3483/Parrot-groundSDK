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

package com.parrot.drone.groundsdk.mavlink;

import org.hamcrest.FeatureMatcher;
import org.hamcrest.Matcher;

import androidx.annotation.NonNull;

import static org.hamcrest.Matchers.allOf;
import static org.hamcrest.Matchers.equalTo;

public final class SetViewModeCommandMatcher {

    public static Matcher<SetViewModeCommand> setViewModeCommandIs(@NonNull SetViewModeCommand.Mode mode,
                                                                   int roiIndex) {
        return allOf(modeIs(mode), roiIndexIs(roiIndex));
    }

    private static Matcher<SetViewModeCommand> modeIs(@NonNull SetViewModeCommand.Mode mode) {
        return new FeatureMatcher<SetViewModeCommand, SetViewModeCommand.Mode>(equalTo(mode),
                "mode is", "mode") {

            @Override
            protected SetViewModeCommand.Mode featureValueOf(SetViewModeCommand actual) {
                return actual.getMode();
            }
        };
    }

    private static Matcher<SetViewModeCommand> roiIndexIs(int roiIndex) {
        return new FeatureMatcher<SetViewModeCommand, Integer>(equalTo(roiIndex), "ROI index is", " ROI index") {

            @Override
            protected Integer featureValueOf(SetViewModeCommand actual) {
                return actual.getRoiIndex();
            }
        };
    }

    private SetViewModeCommandMatcher() {
    }
}
