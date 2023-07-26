/*
 * arduino_CAN_packandunpack_example_types.h
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

#ifndef RTW_HEADER_arduino_CAN_packandunpack_example_types_h_
#define RTW_HEADER_arduino_CAN_packandunpack_example_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_b_arduinodriver_ArduinoDigita_T
#define typedef_b_arduinodriver_ArduinoDigita_T

typedef struct tag_04b6x6tDldj9IrIH2gmbjG b_arduinodriver_ArduinoDigita_T;

#endif                             /* typedef_b_arduinodriver_ArduinoDigita_T */

#ifndef struct_tag_AYWgtFscQm3mLUJYb3A20C
#define struct_tag_AYWgtFscQm3mLUJYb3A20C

struct tag_AYWgtFscQm3mLUJYb3A20C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigita_T DigitalIODriverObj;
};

#endif                                 /* struct_tag_AYWgtFscQm3mLUJYb3A20C */

#ifndef typedef_codertarget_arduinobase_block_T
#define typedef_codertarget_arduinobase_block_T

typedef struct tag_AYWgtFscQm3mLUJYb3A20C codertarget_arduinobase_block_T;

#endif                             /* typedef_codertarget_arduinobase_block_T */

#ifndef SS_UINT64
#define SS_UINT64                      19
#endif

#ifndef SS_INT64
#define SS_INT64                       20
#endif

#if defined(CAN_RX_MSG_CAN_DATATYPE_USED) || defined(CAN_TX_MSG_CAN_DATATYPE_USED)
#include "can_message_2_tCAN.h"
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_arduino_CAN_packandun_T RT_MODEL_arduino_CAN_packandu_T;

#endif               /* RTW_HEADER_arduino_CAN_packandunpack_example_types_h_ */
