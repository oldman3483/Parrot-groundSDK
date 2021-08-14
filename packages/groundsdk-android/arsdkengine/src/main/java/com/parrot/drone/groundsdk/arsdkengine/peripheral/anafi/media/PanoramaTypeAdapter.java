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

package com.parrot.drone.groundsdk.arsdkengine.peripheral.anafi.media;

import androidx.annotation.NonNull;

import com.parrot.drone.groundsdk.arsdkengine.http.HttpMediaItem;
import com.parrot.drone.groundsdk.device.peripheral.media.MediaItem;

/**
 * Utility class to adapt {@link HttpMediaItem.PanoramaType drone http} to {@link MediaItem.PanoramaType groundsdk}
 * panorama types.
 */
final class PanoramaTypeAdapter {

    /**
     * Converts an {@code HttpMediaItem.PanoramaType} to its {@code MediaItem.PanoramaType} equivalent.
     *
     * @param type http panorama type to convert
     *
     * @return the groundsdk media item panorama type equivalent
     */
    @NonNull
    static MediaItem.PanoramaType from(@NonNull HttpMediaItem.PanoramaType type) {
        switch (type) {
            case HORIZONTAL_180:
                return MediaItem.PanoramaType.HORIZONTAL_180;
            case VERTICAL_180:
                return MediaItem.PanoramaType.VERTICAL_180;
            case SPHERICAL:
                return MediaItem.PanoramaType.SPHERICAL;
        }
        return null;
    }

    /**
     * Private constructor for static utility class.
     */
    private PanoramaTypeAdapter() {
    }
}