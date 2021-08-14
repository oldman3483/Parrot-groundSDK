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

package com.parrot.drone.groundsdkdemo.info;

import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.parrot.drone.groundsdk.GroundSdk;
import com.parrot.drone.groundsdk.facility.GutmaLogManager;
import com.parrot.drone.groundsdkdemo.R;

import java.io.File;
import java.util.Set;

import androidx.annotation.NonNull;

class GutmaLogManagerContent extends FacilityContent<GutmaLogManager> {

    GutmaLogManagerContent(@NonNull GroundSdk provider) {
        super(R.layout.gutmalog_manager_info, provider, GutmaLogManager.class);
    }

    @Override
    ViewHolder onCreateViewHolder(@NonNull View rootView) {
        return new ViewHolder(rootView);
    }

    private static final class ViewHolder
            extends FacilityContent.ViewHolder<GutmaLogManagerContent, GutmaLogManager> {

        @NonNull
        private final Button mClearButton;

        @NonNull
        private final TextView mFileCountText;

        ViewHolder(@NonNull View rootView) {
            super(rootView);
            mClearButton = findViewById(R.id.btn_clear);
            mFileCountText = findViewById(R.id.count);
            mClearButton.setOnClickListener(mClickListener);
        }

        @Override
        void onBind(@NonNull GutmaLogManagerContent content, @NonNull GutmaLogManager manager) {
            Set<File> files = manager.files();
            mClearButton.setEnabled(!files.isEmpty());
            mFileCountText.setText(mContext.getString(R.string.int_value_format, files.size()));
        }

        private final OnClickListener mClickListener = new OnClickListener() {

            @Override
            void onClick(View view, @NonNull GutmaLogManagerContent content, @NonNull GutmaLogManager manager) {
                Set<File> files = manager.files();
                for (File file : files) {
                    manager.delete(file);
                }
            }
        };
    }
}
