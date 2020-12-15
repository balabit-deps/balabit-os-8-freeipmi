/*
 * Copyright (C) 2003-2015 FreeIPMI Core Team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_GIGABYTE_SPEC_H
#define IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_GIGABYTE_SPEC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*
 * Gigabyte MD90-FS0-ZB
 * Gigabyte MG20-OP0-ZB
 */

/************************************************
 * Sensor Type Code Offsets OEM Extra           *
 ************************************************/

/* IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT */
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_EVENT_DATA3_OEM_GIGABYTE_DEVICE_NUMBER_BITMASK   0xF8
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_EVENT_DATA3_OEM_GIGABYTE_DEVICE_NUMBER_SHIFT     3

#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_EVENT_DATA3_OEM_GIGABYTE_FUNCTION_NUMBER_BITMASK 0x07
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_EVENT_DATA3_OEM_GIGABYTE_FUNCTION_NUMBER_SHIFT   0

/* IPMI_SENSOR_TYPE_MEMORY */
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_BITMASK 0xF0
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_SHIFT   4

#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_A 0x0
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_B 0x1
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_C 0x2
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_D 0x3
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_E 0x4
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_F 0x5
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_G 0x6
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_CHANNEL_H 0x7

#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_BITMASK    0x0F
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_SHIFT      0

#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_0 0x0
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_1 0x1
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_2 0x2
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_GIGABYTE_DIMM_3 0x3

#ifdef __cplusplus
}
#endif

#endif /* IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_GIGABYTE_SPEC_H */
