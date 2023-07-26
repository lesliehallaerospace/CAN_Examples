/*
 * raspberrypi_CAN_transmit_types.h
 *
 * Code generation for model "raspberrypi_CAN_transmit".
 *
 * Model version              : 7.6
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Wed Jul 26 11:17:43 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#ifndef RTW_HEADER_raspberrypi_CAN_transmit_types_h_
#define RTW_HEADER_raspberrypi_CAN_transmit_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_

typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} CAN_MESSAGE_BUS;

#endif

#ifndef struct_tag_VWsHpLnzr3Sj7pOoaPHLtE
#define struct_tag_VWsHpLnzr3Sj7pOoaPHLtE

struct tag_VWsHpLnzr3Sj7pOoaPHLtE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  int32_T sockHandleDataFrames;
  int32_T sockHandleErrorFrames;
  boolean_T notFirstStep;
  boolean_T Initialized;
};

#endif                                 /* struct_tag_VWsHpLnzr3Sj7pOoaPHLtE */

#ifndef typedef_codertarget_raspi_internal_CA_T
#define typedef_codertarget_raspi_internal_CA_T

typedef struct tag_VWsHpLnzr3Sj7pOoaPHLtE codertarget_raspi_internal_CA_T;

#endif                             /* typedef_codertarget_raspi_internal_CA_T */

#ifndef struct_tag_tqvyq7c4NVcpAKseXMducE
#define struct_tag_tqvyq7c4NVcpAKseXMducE

struct tag_tqvyq7c4NVcpAKseXMducE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_tqvyq7c4NVcpAKseXMducE */

#ifndef typedef_codertarget_raspi_internal_LE_T
#define typedef_codertarget_raspi_internal_LE_T

typedef struct tag_tqvyq7c4NVcpAKseXMducE codertarget_raspi_internal_LE_T;

#endif                             /* typedef_codertarget_raspi_internal_LE_T */

#ifndef struct_tag_FrILEhnpvhQeAYRucCAgZD
#define struct_tag_FrILEhnpvhQeAYRucCAgZD

struct tag_FrILEhnpvhQeAYRucCAgZD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  char_T IdentifierType[28];
  int32_T sockHandleDataFrames;
  int32_T sockHandleErrorFrames;
  boolean_T Initialized;
  boolean_T SetIdentifierType;
};

#endif                                 /* struct_tag_FrILEhnpvhQeAYRucCAgZD */

#ifndef typedef_codertarget_raspi_internal__f_T
#define typedef_codertarget_raspi_internal__f_T

typedef struct tag_FrILEhnpvhQeAYRucCAgZD codertarget_raspi_internal__f_T;

#endif                             /* typedef_codertarget_raspi_internal__f_T */

#ifndef struct_tag_V0gYsqPUP4whhSGNFcckoF
#define struct_tag_V0gYsqPUP4whhSGNFcckoF

struct tag_V0gYsqPUP4whhSGNFcckoF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  char_T IdentifierType[28];
  int32_T sockHandleDataFrames;
  int32_T sockHandleErrorFrames;
  boolean_T notFirstStep;
  boolean_T Initialized;
  boolean_T SetIdentifierType;
};

#endif                                 /* struct_tag_V0gYsqPUP4whhSGNFcckoF */

#ifndef typedef_codertarget_raspi_internal_f0_T
#define typedef_codertarget_raspi_internal_f0_T

typedef struct tag_V0gYsqPUP4whhSGNFcckoF codertarget_raspi_internal_f0_T;

#endif                             /* typedef_codertarget_raspi_internal_f0_T */

#ifndef SS_UINT64
#define SS_UINT64                      23
#endif

#ifndef SS_INT64
#define SS_INT64                       24
#endif

/* Parameters (default storage) */
typedef struct P_raspberrypi_CAN_transmit_T_ P_raspberrypi_CAN_transmit_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_raspberrypi_CAN_trans_T RT_MODEL_raspberrypi_CAN_tran_T;

#endif                        /* RTW_HEADER_raspberrypi_CAN_transmit_types_h_ */
