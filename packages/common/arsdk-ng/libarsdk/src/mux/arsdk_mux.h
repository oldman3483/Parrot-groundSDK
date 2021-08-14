/**
 * Copyright (c) 2019 Parrot Drones SAS
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of the Parrot Drones SAS Company nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE PARROT DRONES SAS COMPANY BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _ARSDK_MUX_H_
#define _ARSDK_MUX_H_

#include <libmux.h>
#include <libmux-arsdk.h>
#include <libmux-update.h>
#include <libmux-blackbox.h>

#include "arsdk_transport_mux.h"

/**
 * json key used by the controller to indicate
 * the minimum protocol version supported
 */
#define ARSDK_CONN_JSON_KEY_PROTO_V_MIN            "proto_v_min"
/**
 * json key used by the controller to indicate
 * the maximum protocol version supported
 */
#define ARSDK_CONN_JSON_KEY_PROTO_V_MAX            "proto_v_max"
/** json key used by the device to indicate the chosen protocol version. */
#define ARSDK_CONN_JSON_KEY_PROTO_V                "proto_v"


#include <json-c/json.h>

static inline struct json_object *get_json_object(struct json_object *obj,
		const char *key)
{
	struct json_object *res = NULL;

#if defined(JSON_C_MAJOR_VERSION) && defined(JSON_C_MINOR_VERSION) && \
	((JSON_C_MAJOR_VERSION == 0 && JSON_C_MINOR_VERSION >= 10) || \
	 (JSON_C_MAJOR_VERSION > 0))
	if (!json_object_object_get_ex(obj, key, &res))
		res = NULL;
#else
	/* json_object_object_get is deprecated started version 0.10 */
	res = json_object_object_get(obj, key);
#endif
	return res;
}

#endif /* _ARSDK_MUX_H_ */
