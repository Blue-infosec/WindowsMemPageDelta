//**********************************************************************`
//* This is an include file generated by Message Compiler.             *`
//*                                                                    *`
//* Copyright (c) Microsoft Corporation. All Rights Reserved.          *`
//**********************************************************************`
#pragma once

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Provider "NCC Group-Mem Page Delta" event count 3
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Provider GUID = 9cde86c9-dfb9-463f-b2c5-71eec232a69c
EXTERN_C __declspec(selectany) const GUID NCCGROUP_MEMPAGEDELTA_PUBLISHER = {0x9cde86c9, 0xdfb9, 0x463f, {0xb2, 0xc5, 0x71, 0xee, 0xc2, 0x32, 0xa6, 0x9c}};

#ifndef NCCGROUP_MEMPAGEDELTA_PUBLISHER_Traits
#define NCCGROUP_MEMPAGEDELTA_PUBLISHER_Traits NULL
#endif // NCCGROUP_MEMPAGEDELTA_PUBLISHER_Traits

//
// Channel
//
#define MEMPAGEDELTAOP 0x10
#define MEMPAGEDELTATOT 0x11
#define MEMPAGEDELTADEBUG 0x12

//
// Event Descriptors
//
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR DNP_OP_EVENT = {0x1, 0x0, 0x10, 0x4, 0x0, 0x0, 0x8000000000000000};
#define DNP_OP_EVENT_value 0x1
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR DNP_DEBUG_EVENT = {0x2, 0x0, 0x12, 0x4, 0x0, 0x0, 0x2000000000000000};
#define DNP_DEBUG_EVENT_value 0x2
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR DNP_TOT_EVENT = {0x3, 0x0, 0x11, 0x4, 0x0, 0x0, 0x4000000000000000};
#define DNP_TOT_EVENT_value 0x3

#define MSG_SimpleMessage                    0xB0000001L
