/*
 * arduino_CAN_packandunpack_example.c
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

#include "arduino_CAN_packandunpack_example.h"
#include "rtwtypes.h"
#include "arduino_CAN_packandunpack_example_types.h"
#include "arduino_CAN_packandunpack_example_private.h"
#include <string.h>
#include "rt_nonfinite.h"

uint8_t isReceived_CAN_RX_ID20;
tCAN RMsg_CAN_RX_ID20;
tCAN TMsg_CAN_TX_ID21;
tCAN TMsg_CAN_TX_ID105;
uint8_t isReceived_CAN_RX_ID30;
tCAN RMsg_CAN_RX_ID30;
tCAN TMsg_CAN_TX_ID30;

/* Block signals (default storage) */
B_arduino_CAN_packandunpack_e_T arduino_CAN_packandunpack_exa_B;

/* Block states (default storage) */
DW_arduino_CAN_packandunpack__T arduino_CAN_packandunpack_ex_DW;

/* Real-time model */
static RT_MODEL_arduino_CAN_packandu_T arduino_CAN_packandunpack_ex_M_;
RT_MODEL_arduino_CAN_packandu_T *const arduino_CAN_packandunpack_ex_M =
  &arduino_CAN_packandunpack_ex_M_;

/* Model step function */
void arduino_CAN_packandunpack_example_step(void)
{
  int16_T i;
  uint8_T u0;

  /* S-Function (arduino_CAN_rx_msg): '<Root>/CAN_RX_ID20' */

  /* Retreive the relevant messages from CAN buffer (if any) */
  retreive_RxCAN();

  /* Get the CAN message */
  /* Prepare the output CAN message */
  tCAN_2_can_message(&RMsg_CAN_RX_ID20,
                     &arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2);
  arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o1 = isReceived_CAN_RX_ID20;
  isReceived_CAN_RX_ID20 = 0;

  /* S-Function (scanunpack): '<Root>/CAN Unpack ID20' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack ID20' */
    if ((8 == arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2.Length) &&
        (arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2.ID != INVALID_CAN_ID) )
    {
      if ((20 == arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2.ID) && (0U ==
           arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2.Extended) ) {
        (void) memcpy(&arduino_CAN_packandunpack_exa_B.CANUnpackID20[0],
                      arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2.Data,
                      8 * sizeof(uint8_T));
      }
    }
  }

  for (i = 0; i < 8; i++) {
    /* Sum: '<Root>/Add' incorporates:
     *  Constant: '<Root>/Constant Short4'
     */
    arduino_CAN_packandunpack_exa_B.Add[i] = (uint8_T)
      (arduino_CAN_packandunpack_exa_B.CANUnpackID20[i] + 1U);
  }

  /* S-Function (scanpack): '<Root>/CAN Pack ID21' */
  /* S-Function (scanpack): '<Root>/CAN Pack ID21' */
  arduino_CAN_packandunpack_exa_B.CANPackID21.ID = 21U;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Length = 8U;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Extended = 0U;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Remote = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[0] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[1] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[2] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[3] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[4] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[5] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[6] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID21.Data[7] = 0;

  {
    (void) memcpy((arduino_CAN_packandunpack_exa_B.CANPackID21.Data),
                  &arduino_CAN_packandunpack_exa_B.Add[0],
                  8 * sizeof(uint8_T));
  }

  /* S-Function (arduino_CAN_tx_msg): '<Root>/CAN_TX_ID21' */
  if (arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o1 > 0) {
    /* Prepare the CAN message */
    can_message_2_tCAN(&arduino_CAN_packandunpack_exa_B.CANPackID21,
                       &TMsg_CAN_TX_ID21);

    /* Send the CAN message */
    mcp2515_send_message(&TMsg_CAN_TX_ID21);
  }

  /* MATLABSystem: '<Root>/Digital Output1 LED2' */
  u0 = arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o1;
  writeDigitalPin(8, u0);

  /* SignalConversion generated from: '<Root>/CAN Pack ID105' incorporates:
   *  Constant: '<Root>/Constant Short'
   *  Constant: '<Root>/Constant Short1'
   */
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[0] = 2U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[1] = 2U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[2] = 2U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[3] = 2U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[4] = 4U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[5] = 4U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[6] = 4U;
  arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1[7] = 4U;

  /* S-Function (scanpack): '<Root>/CAN Pack ID105' */
  /* S-Function (scanpack): '<Root>/CAN Pack ID105' */
  arduino_CAN_packandunpack_exa_B.CANPackID105.ID = 105U;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Length = 8U;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Extended = 0U;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Remote = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[0] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[1] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[2] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[3] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[4] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[5] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[6] = 0;
  arduino_CAN_packandunpack_exa_B.CANPackID105.Data[7] = 0;

  {
    (void) memcpy((arduino_CAN_packandunpack_exa_B.CANPackID105.Data),
                  &arduino_CAN_packandunpack_exa_B.TmpSignalConversionAtCANPackID1
                  [0],
                  8 * sizeof(uint8_T));
  }

  /* S-Function (arduino_CAN_tx_msg): '<Root>/CAN_TX_ID105' incorporates:
   *  Constant: '<Root>/Constant Short2'
   */
  if (((uint8_T)1U) > 0) {
    /* Prepare the CAN message */
    can_message_2_tCAN(&arduino_CAN_packandunpack_exa_B.CANPackID105,
                       &TMsg_CAN_TX_ID105);

    /* Send the CAN message */
    mcp2515_send_message(&TMsg_CAN_TX_ID105);
  }

  /* S-Function (arduino_CAN_rx_msg): '<Root>/CAN_RX_ID30' */

  /* Get the CAN message */
  /* Prepare the output CAN message */
  tCAN_2_can_message(&RMsg_CAN_RX_ID30,
                     &arduino_CAN_packandunpack_exa_B.CAN_RX_ID30_o2);
  arduino_CAN_packandunpack_exa_B.CAN_RX_ID30_o1 = isReceived_CAN_RX_ID30;
  isReceived_CAN_RX_ID30 = 0;

  /* S-Function (arduino_CAN_tx_msg): '<Root>/CAN_TX_ID30' incorporates:
   *  Constant: '<Root>/Constant Short3'
   */
  if (((uint8_T)1U) > 0) {
    /* Prepare the CAN message */
    can_message_2_tCAN(&arduino_CAN_packandunpack_exa_B.CAN_RX_ID30_o2,
                       &TMsg_CAN_TX_ID30);

    /* Send the CAN message */
    mcp2515_send_message(&TMsg_CAN_TX_ID30);
  }

  /* UnitDelay: '<S2>/Output' */
  arduino_CAN_packandunpack_exa_B.Output =
    arduino_CAN_packandunpack_ex_DW.Output_DSTATE;

  /* MultiPortSwitch: '<S1>/Output' incorporates:
   *  Constant: '<S1>/Vector'
   */
  arduino_CAN_packandunpack_exa_B.Output_c =
    arduino_CAN_packandunpac_ConstP.Vector_Value[arduino_CAN_packandunpack_exa_B.Output];

  /* MATLABSystem: '<Root>/Digital Output LED1' */
  u0 = arduino_CAN_packandunpack_exa_B.Output_c;
  writeDigitalPin(7, u0);

  /* Sum: '<S3>/FixPt Sum1' incorporates:
   *  Constant: '<S3>/FixPt Constant'
   */
  arduino_CAN_packandunpack_exa_B.FixPtSum1 = (uint8_T)
    (arduino_CAN_packandunpack_exa_B.Output + 1U);

  /* Switch: '<S4>/FixPt Switch' */
  if (arduino_CAN_packandunpack_exa_B.FixPtSum1 > 12) {
    /* Switch: '<S4>/FixPt Switch' incorporates:
     *  Constant: '<S4>/Constant'
     */
    arduino_CAN_packandunpack_exa_B.FixPtSwitch = 0U;
  } else {
    /* Switch: '<S4>/FixPt Switch' */
    arduino_CAN_packandunpack_exa_B.FixPtSwitch =
      arduino_CAN_packandunpack_exa_B.FixPtSum1;
  }

  /* End of Switch: '<S4>/FixPt Switch' */
  /* Update for UnitDelay: '<S2>/Output' */
  arduino_CAN_packandunpack_ex_DW.Output_DSTATE =
    arduino_CAN_packandunpack_exa_B.FixPtSwitch;

  /* Matfile logging */
  rt_UpdateTXYLogVars(arduino_CAN_packandunpack_ex_M->rtwLogInfo,
                      (&arduino_CAN_packandunpack_ex_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(arduino_CAN_packandunpack_ex_M)!=-1) &&
        !((rtmGetTFinal(arduino_CAN_packandunpack_ex_M)-
           arduino_CAN_packandunpack_ex_M->Timing.taskTime0) >
          arduino_CAN_packandunpack_ex_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(arduino_CAN_packandunpack_ex_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  arduino_CAN_packandunpack_ex_M->Timing.taskTime0 =
    ((time_T)(++arduino_CAN_packandunpack_ex_M->Timing.clockTick0)) *
    arduino_CAN_packandunpack_ex_M->Timing.stepSize0;
}

/* Model initialize function */
void arduino_CAN_packandunpack_example_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)arduino_CAN_packandunpack_ex_M, 0,
                sizeof(RT_MODEL_arduino_CAN_packandu_T));
  rtmSetTFinal(arduino_CAN_packandunpack_ex_M, 10.0);
  arduino_CAN_packandunpack_ex_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    arduino_CAN_packandunpack_ex_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(arduino_CAN_packandunpack_ex_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(arduino_CAN_packandunpack_ex_M->rtwLogInfo, (NULL));
    rtliSetLogT(arduino_CAN_packandunpack_ex_M->rtwLogInfo, "tout");
    rtliSetLogX(arduino_CAN_packandunpack_ex_M->rtwLogInfo, "");
    rtliSetLogXFinal(arduino_CAN_packandunpack_ex_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(arduino_CAN_packandunpack_ex_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(arduino_CAN_packandunpack_ex_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(arduino_CAN_packandunpack_ex_M->rtwLogInfo, 0);
    rtliSetLogDecimation(arduino_CAN_packandunpack_ex_M->rtwLogInfo, 1);
    rtliSetLogY(arduino_CAN_packandunpack_ex_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(arduino_CAN_packandunpack_ex_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(arduino_CAN_packandunpack_ex_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &arduino_CAN_packandunpack_exa_B), 0,
                sizeof(B_arduino_CAN_packandunpack_e_T));

  {
    arduino_CAN_packandunpack_exa_B.CAN_RX_ID20_o2 = CAN_DATATYPE_GROUND;
    arduino_CAN_packandunpack_exa_B.CANPackID21 = CAN_DATATYPE_GROUND;
    arduino_CAN_packandunpack_exa_B.CANPackID105 = CAN_DATATYPE_GROUND;
    arduino_CAN_packandunpack_exa_B.CAN_RX_ID30_o2 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) memset((void *)&arduino_CAN_packandunpack_ex_DW, 0,
                sizeof(DW_arduino_CAN_packandunpack__T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(arduino_CAN_packandunpack_ex_M->rtwLogInfo,
    0.0, rtmGetTFinal(arduino_CAN_packandunpack_ex_M),
    arduino_CAN_packandunpack_ex_M->Timing.stepSize0, (&rtmGetErrorStatus
    (arduino_CAN_packandunpack_ex_M)));

  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack ID20' */

  /*-----------S-Function Block: <Root>/CAN Unpack ID20 -----------------*/

  /* user code (Start function Trailer) */
  RMsg_CAN_RX_ID20.id = 20U;
  RMsg_CAN_RX_ID20.header.rtr = 0;
  RMsg_CAN_RX_ID20.header.length = 8;
  RMsg_CAN_RX_ID20.data[0] = 0U;
  isReceived_CAN_RX_ID20 = 0;
  RMsg_CAN_RX_ID30.id = 30U;
  RMsg_CAN_RX_ID30.header.rtr = 0;
  RMsg_CAN_RX_ID30.header.length = 8;
  RMsg_CAN_RX_ID30.data[0] = 0U;
  isReceived_CAN_RX_ID30 = 0;
  mcp2515_init(1U);

  {
    codertarget_arduinobase_block_T *b_obj;

    /* InitializeConditions for UnitDelay: '<S2>/Output' */
    arduino_CAN_packandunpack_ex_DW.Output_DSTATE = 0U;

    /* Start for MATLABSystem: '<Root>/Digital Output1 LED2' */
    arduino_CAN_packandunpack_ex_DW.obj.matlabCodegenIsDeleted = true;
    b_obj = &arduino_CAN_packandunpack_ex_DW.obj;
    b_obj->isInitialized = 0L;
    b_obj->matlabCodegenIsDeleted = false;
    arduino_CAN_packandunpack_ex_DW.objisempty = true;
    b_obj = &arduino_CAN_packandunpack_ex_DW.obj;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1L;
    digitalIOSetup(8, 1);
    b_obj->isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output LED1' */
    arduino_CAN_packandunpack_ex_DW.obj_m.matlabCodegenIsDeleted = true;
    b_obj = &arduino_CAN_packandunpack_ex_DW.obj_m;
    b_obj->isInitialized = 0L;
    b_obj->matlabCodegenIsDeleted = false;
    arduino_CAN_packandunpack_ex_DW.objisempty_b = true;
    b_obj = &arduino_CAN_packandunpack_ex_DW.obj_m;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1L;
    digitalIOSetup(7, 1);
    b_obj->isSetupComplete = true;
  }
}

/* Model terminate function */
void arduino_CAN_packandunpack_example_terminate(void)
{
  codertarget_arduinobase_block_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Digital Output1 LED2' */
  obj = &arduino_CAN_packandunpack_ex_DW.obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1 LED2' */
  /* Terminate for MATLABSystem: '<Root>/Digital Output LED1' */
  obj = &arduino_CAN_packandunpack_ex_DW.obj_m;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output LED1' */
}
