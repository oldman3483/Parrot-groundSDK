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

package com.parrot.drone.groundsdk.internal.device.pilotingitf.animation;

import com.parrot.drone.groundsdk.device.pilotingitf.animation.Animation;
import com.parrot.drone.groundsdk.device.pilotingitf.animation.DollySlide;

import org.junit.Before;
import org.junit.Test;

import static org.hamcrest.MatcherAssert.assertThat;
import static org.hamcrest.Matchers.is;
import static org.hamcrest.Matchers.nullValue;

public class DollySlideTest {

    private DollySlide.Config mAnimConfig;

    private DollySlideCore mAnimCore;

    @Before
    public void setUp() {
        mAnimConfig = new DollySlide.Config();
        mAnimCore = new DollySlideCore(3.0, -5.0, 7.0, Animation.Mode.ONCE_THEN_MIRRORED);
    }

    @Test
    public void testConfig() {
        assertThat(mAnimConfig.getAnimationType(), is(Animation.Type.DOLLY_SLIDE));

        assertThat(mAnimConfig.usesCustomSpeed(), is(false));
        assertThat(mAnimConfig.usesCustomAngle(), is(false));
        assertThat(mAnimConfig.usesCustomHorizontalDistance(), is(false));
        assertThat(mAnimConfig.getMode(), nullValue());

        assertThat(mAnimConfig.withSpeed(3.0), is(mAnimConfig));
        assertThat(mAnimConfig.usesCustomSpeed(), is(true));
        assertThat(mAnimConfig.getSpeed(), is(3.0));

        assertThat(mAnimConfig.withAngle(-5.0), is(mAnimConfig));
        assertThat(mAnimConfig.usesCustomAngle(), is(true));
        assertThat(mAnimConfig.getAngle(), is(-5.0));

        assertThat(mAnimConfig.withHorizontalDistance(7.0), is(mAnimConfig));
        assertThat(mAnimConfig.usesCustomHorizontalDistance(), is(true));
        assertThat(mAnimConfig.getHorizontalDistance(), is(7.0));

        assertThat(mAnimConfig.withMode(Animation.Mode.ONCE_THEN_MIRRORED), is(mAnimConfig));
        assertThat(mAnimConfig.getMode(), is(Animation.Mode.ONCE_THEN_MIRRORED));
    }

    @Test
    public void testAnimation() {
        assertThat(mAnimCore.getType(), is(Animation.Type.DOLLY_SLIDE));
        assertThat(mAnimCore.getSpeed(), is(3.0));
        assertThat(mAnimCore.getAngle(), is(-5.0));
        assertThat(mAnimCore.getHorizontalDistance(), is(7.0));
        assertThat(mAnimCore.getMode(), is(Animation.Mode.ONCE_THEN_MIRRORED));
    }

    @Test
    public void testMatchesConfig() {
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(true));

        mAnimConfig.withSpeed(2.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(false));
        mAnimConfig.withSpeed(3.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(true));

        mAnimConfig.withAngle(-4.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(false));
        mAnimConfig.withAngle(-5.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(true));

        mAnimConfig.withHorizontalDistance(6.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(false));
        mAnimConfig.withHorizontalDistance(7.0);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(true));

        mAnimConfig.withMode(Animation.Mode.ONCE);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(false));
        mAnimConfig.withMode(Animation.Mode.ONCE_THEN_MIRRORED);
        assertThat(mAnimCore.matchesConfig(mAnimConfig), is(true));
    }
}
