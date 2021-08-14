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

package com.parrot.drone.groundsdk.stream;

import android.graphics.Rect;

import androidx.annotation.NonNull;

/**
 * Allows to overlay custom graphics on top of a stream rendered by a {@link GsdkStreamView}.
 * <p>
 * After each frame is rendered, {@link #overlay(Rect, Rect, Histogram)} will be called; client code must
 * implement this method to render the appropriate overlay on top of the rendered frame.
 * <p>
 * Overlayer interface also allows to receive color histogram computations, when
 * {@link GsdkStreamView#enableHistogram(boolean) enabled} onto which the overlayer is installed.
 *
 * @deprecated Use {@link Overlayer2} instead.
 */
@Deprecated
public interface Overlayer {

    /** Color histogram information. */
    interface Histogram {

        /**
         * Gives access to red color channel histogram data.
         *
         * @return red color channel histogram, empty if unavailable or histogram computation is disabled
         */
        @NonNull
        float[] redChannel();

        /**
         * Gives access to green color channel histogram data.
         *
         * @return green color channel histogram, empty if unavailable or histogram computation is disabled
         */
        @NonNull
        float[] greenChannel();

        /**
         * Gives access to blue color channel histogram data.
         *
         * @return blue color channel histogram, empty if unavailable or histogram computation is disabled
         */
        @NonNull
        float[] blueChannel();

        /**
         * Gives access to luminance channel histogram data.
         *
         * @return luminance channel histogram, empty if unavailable or histogram computation is disabled
         */
        @NonNull
        float[] luminanceChannel();
    }

    /**
     * Renders custom overlay on top of current frame.
     * <p>
     * Called on {@link GsdkStreamView} GL rendering thread.
     *
     * @param renderZone  area where the frame was rendered (including any padding introduced by scaling),
     *                    invalid after this method returns
     * @param contentZone area where frame content was rendered (excluding any padding introduced by scaling),
     *                    invalid after this method returns
     * @param histogram   color histogram info, invalid after this method returns
     */
    void overlay(@NonNull Rect renderZone, @NonNull Rect contentZone, @NonNull Histogram histogram);
}
