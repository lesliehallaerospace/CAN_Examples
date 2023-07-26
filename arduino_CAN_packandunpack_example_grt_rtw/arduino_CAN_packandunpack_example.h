/*
 * arduino_CAN_packandunpack_example.h
 *
 * Code generation for model "arduino_CAN_packandunpack_example".
 *
 * Model version              : 12.9
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C source code generated on : Tue Jul 25 16:19:03 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Atmel->AVR
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_arduino_CAN_packandunpack_example_h_
#define RTW_HEADER_arduino_CAN_packandunpack_example_h_
#ifndef arduino_CAN_packandunpack_example_COMMON_INCLUDES_
#define arduino_CAN_packandunpack_example_COMMON_INCLUDES_
#include <math.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "mcp2515.h"
#include "MW_arduino_digitalio.h"
#endif                  /* arduino_CAN_packandunpack_example_COMMON_INCLUDES_ */

#include "arduino_CAN_packandunpack_example_types.h"
#include "can_message.h"
#include <string.h>
#include <float.h>
#include <stddef.h>
#include "rt_nonfinite.h"

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

#define arduino_CAN_packandunpack_example_M (arduino_CAN_packandunpack_ex_M)

/* Block signals (default storage) */
typedef struct {
  CAN_DATATYPE CAN_RX_ID20_o2;         /* '<Root>/CAN_RX_ID20' */
  CAN_DATATYPE CANPackID21;            /* '<Root>/CAN Pack ID21' */
  CAN_DATATYPE CANPackID105;           /* '<Root>/CAN Pack ID105' */
  CAN_DATATYPE CAN_RX_ID30_o2;         /* '<Root>/CAN_RX_ID30' */
  uint8_T CAN_RX_ID20_o1;              /* '<Root>/CAN_RX_ID20' */
  uint8_T CANUnpackID20[8];            /* '<Root>/CAN Unpack ID20' */
  uint8_T Add[8];                      /* '<Root>/Add' */
  uint8_T TmpSignalConversionAtCANPackID1[8];
  uint8_T CAN_RX_ID30_o1;              /* '<Root>/CAN_RX_ID30' */
  uint8_T Output;                      /* '<S2>/Output' */
  uint8_T Output_c;                    /* '<S1>/Output' */
  uint8_T FixPtSum1;                   /* '<S3>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S4>/FixPt Switch' */
} B_arduino_CAN_packandunpack_e_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_block_T obj; /* '<Root>/Digital Output1 LED2' */
  codertarget_arduinobase_block_T obj_m;/* '<Root>/Digital Output LED1' */
  int_T CANUnpackID20_ModeSignalID;    /* '<Root>/CAN Unpack ID20' */
  int_T CANUnpackID20_StatusPortID;    /* '<Root>/CAN Unpack ID20' */
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
  boolean_T objisempty;                /* '<Root>/Digital Output1 LED2' */
  boolean_T objisempty_b;              /* '<Root>/Digital Output LED1' */
} DW_arduino_CAN_packandunpack__T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Vector_Value
   * Referenced by: '<S1>/Vector'
   */
  uint8_T Vector_Value[13];
} ConstP_arduino_CAN_packandunp_T;

/* Real-time Model Data Structure */
struct tag_RTM_arduino_CAN_packandun_T {
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
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block signals (default storage) */
extern B_arduino_CAN_packandunpack_e_T arduino_CAN_packandunpack_exa_B;

/* Block states (default storage) */
extern DW_arduino_CAN_packandunpack__T arduino_CAN_packandunpack_ex_DW;

/* Constant parameters (default storage) */
extern const ConstP_arduino_CAN_packandunp_T arduino_CAN_packandunpac_ConstP;

/* Model entry point functions */
extern void arduino_CAN_packandunpack_example_initialize(void);
extern void arduino_CAN_packandunpack_example_step(void);
extern void arduino_CAN_packandunpack_example_terminate(void);

/* Real-time Model object */
extern RT_MODEL_arduino_CAN_packandu_T *const arduino_CAN_packandunpack_ex_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Propagation' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<Root>/Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Out' : Eliminate redundant signal conversion block
 * Block '<Root>/Zero-Order Hold' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'arduino_CAN_packandunpack_example'
 * '<S1>'   : 'arduino_CAN_packandunpack_example/Repeating Sequence Stair'
 * '<S2>'   : 'arduino_CAN_packandunpack_example/Repeating Sequence Stair/LimitedCounter'
 * '<S3>'   : 'arduino_CAN_packandunpack_example/Repeating Sequence Stair/LimitedCounter/Increment Real World'
 * '<S4>'   : 'arduino_CAN_packandunpack_example/Repeating Sequence Stair/LimitedCounter/Wrap To Zero'
 */
#endif                     /* RTW_HEADER_arduino_CAN_packandunpack_example_h_ */
