
/** \addtogroup hal */
/** @{*/
/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_TRIGGER_TICKER_API_H
#define MBED_TRIGGER_TICKER_API_H

#include <stdint.h>
#include "ticker_api.h"

#ifdef __cplusplus
extern "C" {
#endif

void trigger_ticker_init(void);

uint32_t trigger_ticker_read(void);

void trigger_ticker_free(void);

#ifdef __cplusplus
}
#endif

#endif

/** @}*/
