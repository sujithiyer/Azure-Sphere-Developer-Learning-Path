/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This file defines the mapping from the MT3620 reference development board (RDB) to the
// 'sample hardware' abstraction used by the samples at https://github.com/Azure/azure-sphere-samples.
// Some peripherals are on-board on the RDB, while other peripherals must be attached externally if needed.
// https://docs.microsoft.com/en-us/azure-sphere/app-development/manage-hardware-dependencies
// to enable apps to work across multiple hardware variants.

// This file is autogenerated from ../../azure_sphere_learning_path.json.  Do not edit it directly.

#pragma once
#include "seeed_mt3620_mdb.h"

// Button A
#define BUTTON_A SEEED_MT3620_MDB_J1_PIN3_GPIO6

// Button B
#define BUTTON_B SEEED_MT3620_MDB_J1_PIN7_GPIO10

// Alert LED
#define ALERT_LED SEEED_MT3620_MDB_J2_PIN15_GPIO35

// LED 1
#define LED1 SEEED_MT3620_MDB_J2_PIN15_GPIO35

// LED 2 User LED
#define LED2 SEEED_MT3620_MDB_USER_LED

// Network Connected
#define NETWORK_CONNECTED_LED SEEED_MT3620_MDB_J2_PIN13_GPIO31

// Grove Relay
#define RELAY SEEED_MT3620_MDB_J2_PIN15_GPIO35

// I2C Master Bus
#define I2cMaster2 SEEED_MT3620_MDB_J1J2_ISU1_I2C

// MT3620 RDB: LED RED
#define LED_RED SEEED_MT3620_MDB_J1_PIN1_GPIO4

// MT3620 RDB: LED GREEN
#define LED_GREEN SEEED_MT3620_MDB_J1_PIN2_GPIO5

// MT3620 RDB: LED BLUE
#define LED_BLUE SEEED_MT3620_MDB_J1_PIN3_GPIO6

