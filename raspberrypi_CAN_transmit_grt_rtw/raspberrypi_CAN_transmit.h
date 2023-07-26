/*
 * raspberrypi_CAN_transmit.h
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

#ifndef RTW_HEADER_raspberrypi_CAN_transmit_h_
#define RTW_HEADER_raspberrypi_CAN_transmit_h_
#ifndef raspberrypi_CAN_transmit_COMMON_INCLUDES_
#define raspberrypi_CAN_transmit_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "MW_SocketCAN.h"
#include "LED.h"
#endif                           /* raspberrypi_CAN_transmit_COMMON_INCLUDES_ */

#include "raspberrypi_CAN_transmit_types.h"
#include <float.h>
#include <stddef.h>
#include "rt_nonfinite.h"
#include "can_message.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  char_T c[69];
  char_T errString1[63];
  char_T errString1_m[63];
  char_T errString1_c[63];
  char_T errString1_k[63];
  char_T errString1_cx[63];
  char_T errString2[52];
  char_T errString2_b[52];
  char_T errString2_p[52];
  char_T errString2_c[52];
  char_T errString2_f[52];
  char_T b_value[28];
  char_T b[28];
  char_T a[28];
  CAN_MESSAGE_BUS CANPack;             /* '<Root>/CAN Pack' */
  CAN_MESSAGE_BUS CANPack1;            /* '<Root>/CAN Pack1' */
  char_T errString3[20];
  char_T errString3_g[20];
  char_T errString3_g1[20];
  real_T SampleTime;
  uint8_T CANUnpack[8];                /* '<Root>/CAN Unpack' */
  uint8_T Add1[8];                     /* '<Root>/Add1' */
  uint8_T TmpSignalConversionAtCANPack1In[8];
  uint8_T rxData[8];
  uint8_T txData[8];
  char_T b_m[5];
  uint8_T CANReceive2_o1;              /* '<Root>/CAN Receive2' */
  uint8_T CANReceive2_o2;              /* '<Root>/CAN Receive2' */
  uint8_T CANReceive1_o1;              /* '<Root>/CAN Receive1' */
  uint8_T CANReceive1_o2;              /* '<Root>/CAN Receive1' */
} B_raspberrypi_CAN_transmit_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_raspi_internal__f_T obj; /* '<Root>/CAN Receive2' */
  codertarget_raspi_internal__f_T obj_o;/* '<Root>/CAN Receive1' */
  codertarget_raspi_internal_f0_T obj_n;/* '<Root>/CAN Transmit3' */
  codertarget_raspi_internal_CA_T obj_h;/* '<Root>/CAN Transmit2' */
  codertarget_raspi_internal_CA_T obj_d;/* '<Root>/CAN Transmit1' */
  codertarget_raspi_internal_LE_T obj_l;/* '<Root>/LED1' */
  int_T CANUnpack_ModeSignalID;        /* '<Root>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<Root>/CAN Unpack' */
  boolean_T objisempty;                /* '<Root>/LED1' */
  boolean_T objisempty_h;              /* '<Root>/CAN Transmit3' */
  boolean_T objisempty_c;              /* '<Root>/CAN Transmit2' */
  boolean_T objisempty_cl;             /* '<Root>/CAN Transmit1' */
  boolean_T objisempty_p;              /* '<Root>/CAN Receive2' */
  boolean_T objisempty_o;              /* '<Root>/CAN Receive1' */
} DW_raspberrypi_CAN_transmit_T;

/* Parameters (default storage) */
struct P_raspberrypi_CAN_transmit_T_ {
  real_T CANReceive1_SampleTime;       /* Expression: 0.1
                                        * Referenced by: '<Root>/CAN Receive1'
                                        */
  real_T CANReceive2_SampleTime;       /* Expression: 0.1
                                        * Referenced by: '<Root>/CAN Receive2'
                                        */
  uint8_T ConstantShort9_Value;      /* Computed Parameter: ConstantShort9_Value
                                      * Referenced by: '<Root>/Constant Short9'
                                      */
  uint8_T ConstantShort5_Value;      /* Computed Parameter: ConstantShort5_Value
                                      * Referenced by: '<Root>/Constant Short5'
                                      */
  uint8_T ConstantShort6_Value;      /* Computed Parameter: ConstantShort6_Value
                                      * Referenced by: '<Root>/Constant Short6'
                                      */
};

/* Real-time Model Data Structure */
struct tag_RTM_raspberrypi_CAN_trans_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block parameters (default storage) */
extern P_raspberrypi_CAN_transmit_T raspberrypi_CAN_transmit_P;

/* Block signals (default storage) */
extern B_raspberrypi_CAN_transmit_T raspberrypi_CAN_transmit_B;

/* Block states (default storage) */
extern DW_raspberrypi_CAN_transmit_T raspberrypi_CAN_transmit_DW;

/* Model entry point functions */
extern void raspberrypi_CAN_transmit_initialize(void);
extern void raspberrypi_CAN_transmit_step(void);
extern void raspberrypi_CAN_transmit_terminate(void);

/* Real-time Model object */
extern RT_MODEL_raspberrypi_CAN_tran_T *const raspberrypi_CAN_transmit_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Conversion1' : Eliminate redundant data type conversion
 * Block '<Root>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'raspberrypi_CAN_transmit'
 */
#endif                              /* RTW_HEADER_raspberrypi_CAN_transmit_h_ */
