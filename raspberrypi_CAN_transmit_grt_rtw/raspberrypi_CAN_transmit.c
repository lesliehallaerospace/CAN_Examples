/*
 * raspberrypi_CAN_transmit.c
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

#include "raspberrypi_CAN_transmit.h"
#include "raspberrypi_CAN_transmit_types.h"
#include "rtwtypes.h"
#include <string.h>
#include "raspberrypi_CAN_transmit_private.h"
#include "rt_nonfinite.h"

/* Block signals (default storage) */
B_raspberrypi_CAN_transmit_T raspberrypi_CAN_transmit_B;

/* Block states (default storage) */
DW_raspberrypi_CAN_transmit_T raspberrypi_CAN_transmit_DW;

/* Real-time model */
static RT_MODEL_raspberrypi_CAN_tran_T raspberrypi_CAN_transmit_M_;
RT_MODEL_raspberrypi_CAN_tran_T *const raspberrypi_CAN_transmit_M =
  &raspberrypi_CAN_transmit_M_;

/* Forward declaration for local functions */
static void raspberrypi_CA_SystemCore_setup(codertarget_raspi_internal__f_T *obj);
static void raspberrypi_SystemCore_setup_f0(codertarget_raspi_internal_CA_T *obj);
static void raspberry_SystemCore_setup_f0kl(codertarget_raspi_internal_f0_T *obj);
static void raspberrypi_CA_SystemCore_setup(codertarget_raspi_internal__f_T *obj)
{
  codertarget_raspi_internal__f_T *obj_0;
  int32_T isCANSetup;
  int32_T stat;
  char_T canInterface[5];
  static const char_T tmp[19] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'u',
    'p', '.', ' ', 'S', 'e', 't', ' ', 'u', 'p', ' ' };

  static const char_T tmp_0[14] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's',
    'e', 't', ' ', 'u', 'p' };

  static const char_T tmp_1[46] = { ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o', 't',
    ' ', 'e', 'x', 'i', 's', 't', '.', ' ', 'S', 'e', 'l', 'e', 'c', 't', ' ',
    'a', ' ', 'v', 'a', 'l', 'i', 'd', ' ', 'C', 'A', 'N', ' ', 'i', 'n', 't',
    'e', 'r', 'f', 'a', 'c', 'e', '.' };

  static const char_T tmp_2[34] = { ' ', 'b', 'e', 'f', 'o', 'r', 'e', ' ', 'l',
    'a', 'u', 'n', 'c', 'h', 'i', 'n', 'g', ' ', 't', 'h', 'e', ' ', 'a', 'p',
    'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '.' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  canInterface[0] = 'c';
  canInterface[1] = 'a';
  canInterface[2] = 'n';
  canInterface[3] = '0';
  canInterface[4] = '\x00';
  stat = -1;
  isCANSetup = MW_checkIFStatus(&canInterface[0]);
  if (isCANSetup == 0) {
    MW_createSocket(&canInterface[0], &obj_0->sockHandleDataFrames);
    stat = MW_createSocket(&canInterface[0], &obj_0->sockHandleErrorFrames);
  } else if (isCANSetup == 1) {
    raspberrypi_CAN_transmit_B.errString1_c[0] = 'c';
    raspberrypi_CAN_transmit_B.errString1_c[1] = 'a';
    raspberrypi_CAN_transmit_B.errString1_c[2] = 'n';
    raspberrypi_CAN_transmit_B.errString1_c[3] = '0';
    for (isCANSetup = 0; isCANSetup < 19; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1_c[isCANSetup + 4] = tmp[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1_c[23] = 'c';
    raspberrypi_CAN_transmit_B.errString1_c[24] = 'a';
    raspberrypi_CAN_transmit_B.errString1_c[25] = 'n';
    raspberrypi_CAN_transmit_B.errString1_c[26] = '0';
    for (isCANSetup = 0; isCANSetup < 34; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1_c[isCANSetup + 27] =
        tmp_2[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1_c[61] = '\n';
    raspberrypi_CAN_transmit_B.errString1_c[62] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString1_c[0]);
  } else if (isCANSetup == 2) {
    raspberrypi_CAN_transmit_B.errString2_p[0] = 'c';
    raspberrypi_CAN_transmit_B.errString2_p[1] = 'a';
    raspberrypi_CAN_transmit_B.errString2_p[2] = 'n';
    raspberrypi_CAN_transmit_B.errString2_p[3] = '0';
    for (isCANSetup = 0; isCANSetup < 46; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString2_p[isCANSetup + 4] = tmp_1[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString2_p[50] = '\n';
    raspberrypi_CAN_transmit_B.errString2_p[51] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString2_p[0]);
  } else {
    raspberrypi_CAN_transmit_B.errString3_g1[0] = 'c';
    raspberrypi_CAN_transmit_B.errString3_g1[1] = 'a';
    raspberrypi_CAN_transmit_B.errString3_g1[2] = 'n';
    raspberrypi_CAN_transmit_B.errString3_g1[3] = '0';
    for (isCANSetup = 0; isCANSetup < 14; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString3_g1[isCANSetup + 4] =
        tmp_0[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString3_g1[18] = '\n';
    raspberrypi_CAN_transmit_B.errString3_g1[19] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString3_g1[0]);
  }

  obj_0->Initialized = (stat == 0);
  obj->isSetupComplete = true;
}

static void raspberrypi_SystemCore_setup_f0(codertarget_raspi_internal_CA_T *obj)
{
  codertarget_raspi_internal_CA_T *obj_0;
  int32_T isCANSetup;
  int32_T stat1;
  int32_T stat2;
  char_T canInterface[5];
  static const char_T tmp[19] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'u',
    'p', '.', ' ', 'S', 'e', 't', ' ', 'u', 'p', ' ' };

  static const char_T tmp_0[14] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's',
    'e', 't', ' ', 'u', 'p' };

  static const char_T tmp_1[46] = { ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o', 't',
    ' ', 'e', 'x', 'i', 's', 't', '.', ' ', 'S', 'e', 'l', 'e', 'c', 't', ' ',
    'a', ' ', 'v', 'a', 'l', 'i', 'd', ' ', 'C', 'A', 'N', ' ', 'i', 'n', 't',
    'e', 'r', 'f', 'a', 'c', 'e', '.' };

  static const char_T tmp_2[34] = { ' ', 'b', 'e', 'f', 'o', 'r', 'e', ' ', 'l',
    'a', 'u', 'n', 'c', 'h', 'i', 'n', 'g', ' ', 't', 'h', 'e', ' ', 'a', 'p',
    'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '.' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  canInterface[0] = 'c';
  canInterface[1] = 'a';
  canInterface[2] = 'n';
  canInterface[3] = '0';
  canInterface[4] = '\x00';
  stat1 = -1;
  stat2 = -1;
  isCANSetup = MW_checkIFStatus(&canInterface[0]);
  if (isCANSetup == 0) {
    stat1 = MW_createSocket(&canInterface[0], &obj_0->sockHandleDataFrames);
    stat2 = MW_createSocket(&canInterface[0], &obj_0->sockHandleErrorFrames);
  } else if (isCANSetup == 1) {
    raspberrypi_CAN_transmit_B.errString1_m[0] = 'c';
    raspberrypi_CAN_transmit_B.errString1_m[1] = 'a';
    raspberrypi_CAN_transmit_B.errString1_m[2] = 'n';
    raspberrypi_CAN_transmit_B.errString1_m[3] = '0';
    for (isCANSetup = 0; isCANSetup < 19; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1_m[isCANSetup + 4] = tmp[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1_m[23] = 'c';
    raspberrypi_CAN_transmit_B.errString1_m[24] = 'a';
    raspberrypi_CAN_transmit_B.errString1_m[25] = 'n';
    raspberrypi_CAN_transmit_B.errString1_m[26] = '0';
    for (isCANSetup = 0; isCANSetup < 34; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1_m[isCANSetup + 27] =
        tmp_2[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1_m[61] = '\n';
    raspberrypi_CAN_transmit_B.errString1_m[62] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString1_m[0]);
  } else if (isCANSetup == 2) {
    raspberrypi_CAN_transmit_B.errString2_b[0] = 'c';
    raspberrypi_CAN_transmit_B.errString2_b[1] = 'a';
    raspberrypi_CAN_transmit_B.errString2_b[2] = 'n';
    raspberrypi_CAN_transmit_B.errString2_b[3] = '0';
    for (isCANSetup = 0; isCANSetup < 46; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString2_b[isCANSetup + 4] = tmp_1[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString2_b[50] = '\n';
    raspberrypi_CAN_transmit_B.errString2_b[51] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString2_b[0]);
  } else {
    raspberrypi_CAN_transmit_B.errString3_g[0] = 'c';
    raspberrypi_CAN_transmit_B.errString3_g[1] = 'a';
    raspberrypi_CAN_transmit_B.errString3_g[2] = 'n';
    raspberrypi_CAN_transmit_B.errString3_g[3] = '0';
    for (isCANSetup = 0; isCANSetup < 14; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString3_g[isCANSetup + 4] = tmp_0[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString3_g[18] = '\n';
    raspberrypi_CAN_transmit_B.errString3_g[19] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString3_g[0]);
  }

  if ((stat1 == 0) && (stat2 == 0)) {
    obj_0->Initialized = true;
  } else {
    obj_0->Initialized = false;
  }

  obj->isSetupComplete = true;
}

static void raspberry_SystemCore_setup_f0kl(codertarget_raspi_internal_f0_T *obj)
{
  codertarget_raspi_internal_f0_T *obj_0;
  int32_T isCANSetup;
  int32_T stat1;
  int32_T stat2;
  char_T canInterface[5];
  static const char_T tmp[19] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 'u',
    'p', '.', ' ', 'S', 'e', 't', ' ', 'u', 'p', ' ' };

  static const char_T tmp_0[14] = { ' ', 'i', 's', ' ', 'n', 'o', 't', ' ', 's',
    'e', 't', ' ', 'u', 'p' };

  static const char_T tmp_1[46] = { ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o', 't',
    ' ', 'e', 'x', 'i', 's', 't', '.', ' ', 'S', 'e', 'l', 'e', 'c', 't', ' ',
    'a', ' ', 'v', 'a', 'l', 'i', 'd', ' ', 'C', 'A', 'N', ' ', 'i', 'n', 't',
    'e', 'r', 'f', 'a', 'c', 'e', '.' };

  static const char_T tmp_2[34] = { ' ', 'b', 'e', 'f', 'o', 'r', 'e', ' ', 'l',
    'a', 'u', 'n', 'c', 'h', 'i', 'n', 'g', ' ', 't', 'h', 'e', ' ', 'a', 'p',
    'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '.' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  canInterface[0] = 'c';
  canInterface[1] = 'a';
  canInterface[2] = 'n';
  canInterface[3] = '0';
  canInterface[4] = '\x00';
  stat1 = -1;
  stat2 = -1;
  isCANSetup = MW_checkIFStatus(&canInterface[0]);
  if (isCANSetup == 0) {
    stat1 = MW_createSocket(&canInterface[0], &obj_0->sockHandleDataFrames);
    stat2 = MW_createSocket(&canInterface[0], &obj_0->sockHandleErrorFrames);
  } else if (isCANSetup == 1) {
    raspberrypi_CAN_transmit_B.errString1[0] = 'c';
    raspberrypi_CAN_transmit_B.errString1[1] = 'a';
    raspberrypi_CAN_transmit_B.errString1[2] = 'n';
    raspberrypi_CAN_transmit_B.errString1[3] = '0';
    for (isCANSetup = 0; isCANSetup < 19; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1[isCANSetup + 4] = tmp[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1[23] = 'c';
    raspberrypi_CAN_transmit_B.errString1[24] = 'a';
    raspberrypi_CAN_transmit_B.errString1[25] = 'n';
    raspberrypi_CAN_transmit_B.errString1[26] = '0';
    for (isCANSetup = 0; isCANSetup < 34; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString1[isCANSetup + 27] = tmp_2[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString1[61] = '\n';
    raspberrypi_CAN_transmit_B.errString1[62] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString1[0]);
  } else if (isCANSetup == 2) {
    raspberrypi_CAN_transmit_B.errString2[0] = 'c';
    raspberrypi_CAN_transmit_B.errString2[1] = 'a';
    raspberrypi_CAN_transmit_B.errString2[2] = 'n';
    raspberrypi_CAN_transmit_B.errString2[3] = '0';
    for (isCANSetup = 0; isCANSetup < 46; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString2[isCANSetup + 4] = tmp_1[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString2[50] = '\n';
    raspberrypi_CAN_transmit_B.errString2[51] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString2[0]);
  } else {
    raspberrypi_CAN_transmit_B.errString3[0] = 'c';
    raspberrypi_CAN_transmit_B.errString3[1] = 'a';
    raspberrypi_CAN_transmit_B.errString3[2] = 'n';
    raspberrypi_CAN_transmit_B.errString3[3] = '0';
    for (isCANSetup = 0; isCANSetup < 14; isCANSetup++) {
      raspberrypi_CAN_transmit_B.errString3[isCANSetup + 4] = tmp_0[isCANSetup];
    }

    raspberrypi_CAN_transmit_B.errString3[18] = '\n';
    raspberrypi_CAN_transmit_B.errString3[19] = '\x00';
    MW_printError(&raspberrypi_CAN_transmit_B.errString3[0]);
  }

  if ((stat1 == 0) && (stat2 == 0)) {
    obj_0->Initialized = true;
  } else {
    obj_0->Initialized = false;
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void raspberrypi_CAN_transmit_step(void)
{
  codertarget_raspi_internal_CA_T *obj_0;
  codertarget_raspi_internal__f_T *obj;
  codertarget_raspi_internal_f0_T *obj_1;
  real_T idType;
  int32_T kstr;
  int32_T ret;
  int32_T txData_tmp;
  uint32_T u0_ID;
  char_T rxInterface[5];
  uint8_T dataLength;
  uint8_T error;
  uint8_T extended;
  uint8_T remote;
  uint8_T status;
  boolean_T idType_0;
  static const char_T tmp[28] = { 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', ' ',
    '(', '2', '9', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
    'i', 'e', 'r', ')' };

  static const char_T tmp_0[69] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'L',
    'E', 'D', ' ', 'v', 'a', 'l', 'u', 'e', '.', ' ', 'L', 'E', 'D', ' ', 'v',
    'a', 'l', 'u', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'a', ' ',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', ' ', 'v', 'a', 'l', 'u', 'e', ' ', '(',
    't', 'r', 'u', 'e', ' ', 'o', 'r', ' ', 'f', 'a', 'l', 's', 'e', ')', '.' };

  static const char_T tmp_1[5] = "none";
  static const char_T tmp_2[28] = { 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', ' ',
    '(', '1', '1', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
    'i', 'e', 'r', ')' };

  /* MATLABSystem: '<Root>/CAN Receive1' */
  idType = raspberrypi_CAN_transmit_P.CANReceive1_SampleTime;
  if (raspberrypi_CAN_transmit_DW.obj_o.SampleTime != idType) {
    obj = &raspberrypi_CAN_transmit_DW.obj_o;
    obj->SampleTime = idType;
  }

  obj = &raspberrypi_CAN_transmit_DW.obj_o;
  if (obj->Initialized) {
    rxInterface[0] = 'c';
    rxInterface[1] = 'a';
    rxInterface[2] = 'n';
    rxInterface[3] = '0';
    rxInterface[4] = '\x00';
    for (ret = 0; ret < 8; ret++) {
      raspberrypi_CAN_transmit_B.rxData[ret] = 0U;
    }

    extended = 0U;
    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.a[ret] = obj->IdentifierType[ret];
    }

    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.b[ret] = tmp[ret];
    }

    ret = memcmp(&raspberrypi_CAN_transmit_B.a[0],
                 &raspberrypi_CAN_transmit_B.b[0], 28);
    idType_0 = (ret == 0);
    if (idType_0) {
      extended = 1U;
    }

    ret = MW_CAN_receiveRawSimulink(&rxInterface[0], 20U,
      &raspberrypi_CAN_transmit_B.rxData[0], 1, &status, extended, &remote,
      &error, obj->sockHandleDataFrames, obj->sockHandleErrorFrames);
    if (ret != 0) {
      obj->Initialized = false;
    }

    extended = raspberrypi_CAN_transmit_B.rxData[0];
  } else {
    extended = 0U;
    status = 0U;
  }

  /* MATLABSystem: '<Root>/CAN Receive1' */
  raspberrypi_CAN_transmit_B.CANReceive1_o1 = extended;

  /* MATLABSystem: '<Root>/CAN Receive1' */
  raspberrypi_CAN_transmit_B.CANReceive1_o2 = status;

  /* S-Function (scanunpack): '<Root>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack' */
    if ((8 == raspberrypi_CAN_transmit_B.CANReceive1_o1.Length) &&
        (raspberrypi_CAN_transmit_B.CANReceive1_o1.ID != INVALID_CAN_ID) ) {
      if ((20 == raspberrypi_CAN_transmit_B.CANReceive1_o1.ID) && (0U ==
           raspberrypi_CAN_transmit_B.CANReceive1_o1.Extended) ) {
        (void) memcpy(&raspberrypi_CAN_transmit_B.CANUnpack[0],
                      raspberrypi_CAN_transmit_B.CANReceive1_o1.Data,
                      8 * sizeof(uint8_T));
      }
    }
  }

  for (ret = 0; ret < 8; ret++) {
    /* Sum: '<Root>/Add1' incorporates:
     *  Constant: '<Root>/Constant Short9'
     */
    raspberrypi_CAN_transmit_B.Add1[ret] = (uint8_T)((uint32_T)
      raspberrypi_CAN_transmit_B.CANUnpack[ret] +
      raspberrypi_CAN_transmit_P.ConstantShort9_Value);
  }

  /* S-Function (scanpack): '<Root>/CAN Pack' */
  /* S-Function (scanpack): '<Root>/CAN Pack' */
  raspberrypi_CAN_transmit_B.CANPack.ID = 21U;
  raspberrypi_CAN_transmit_B.CANPack.Length = 8U;
  raspberrypi_CAN_transmit_B.CANPack.Extended = 0U;
  raspberrypi_CAN_transmit_B.CANPack.Remote = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[0] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[1] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[2] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[3] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[4] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[5] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[6] = 0;
  raspberrypi_CAN_transmit_B.CANPack.Data[7] = 0;

  {
    (void) memcpy((raspberrypi_CAN_transmit_B.CANPack.Data),
                  &raspberrypi_CAN_transmit_B.Add1[0],
                  8 * sizeof(uint8_T));
  }

  /* MATLABSystem: '<Root>/CAN Transmit1' */
  status = raspberrypi_CAN_transmit_B.CANPack.Extended;
  dataLength = raspberrypi_CAN_transmit_B.CANPack.Length;
  remote = raspberrypi_CAN_transmit_B.CANPack.Remote;
  u0_ID = raspberrypi_CAN_transmit_B.CANPack.ID;
  for (ret = 0; ret < 8; ret++) {
    raspberrypi_CAN_transmit_B.rxData[ret] =
      raspberrypi_CAN_transmit_B.CANPack.Data[ret];
  }

  obj_0 = &raspberrypi_CAN_transmit_DW.obj_d;
  extended = obj_0->notFirstStep;
  if (obj_0->Initialized) {
    for (ret = 0; ret < 8; ret++) {
      raspberrypi_CAN_transmit_B.txData[ret] = 0U;
    }

    rxInterface[0] = 'c';
    rxInterface[1] = 'a';
    rxInterface[2] = 'n';
    rxInterface[3] = '0';
    rxInterface[4] = '\x00';
    if (remote == 0) {
      kstr = dataLength - 1;
      for (ret = 0; ret <= kstr; ret++) {
        error = (uint8_T)((uint32_T)ret + 1U);
        txData_tmp = error - 1;
        raspberrypi_CAN_transmit_B.txData[txData_tmp] =
          raspberrypi_CAN_transmit_B.rxData[txData_tmp];
      }
    }

    idType = (status == 0);
    ret = (int32_T)idType;
    error = (uint8_T)ret;
    ret = MW_CAN_transmitCANMsg(&rxInterface[0], error, u0_ID, dataLength,
      &raspberrypi_CAN_transmit_B.txData[0], remote, &status, 1, 1.0,
      obj_0->sockHandleDataFrames, obj_0->sockHandleErrorFrames, extended);
    obj_0->notFirstStep = true;
    if (ret != 0) {
      obj_0->Initialized = false;
    }
  }

  /* End of MATLABSystem: '<Root>/CAN Transmit1' */

  /* MATLABSystem: '<Root>/LED1' */
  status = raspberrypi_CAN_transmit_B.CANReceive1_o2;
  if ((status == 0) || (status == 1)) {
  } else {
    memcpy(&raspberrypi_CAN_transmit_B.c[0], &tmp_0[0], 69U * sizeof(char_T));
    perror(&raspberrypi_CAN_transmit_B.c[0]);
  }

  for (ret = 0; ret < 5; ret++) {
    rxInterface[ret] = tmp_1[ret];
  }

  EXT_LED_setTrigger(0U, &rxInterface[0]);
  EXT_LED_write(0U, status);

  /* End of MATLABSystem: '<Root>/LED1' */

  /* SignalConversion generated from: '<Root>/CAN Pack1' incorporates:
   *  Constant: '<Root>/Constant Short5'
   *  Constant: '<Root>/Constant Short6'
   */
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[0] =
    raspberrypi_CAN_transmit_P.ConstantShort5_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[1] =
    raspberrypi_CAN_transmit_P.ConstantShort5_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[2] =
    raspberrypi_CAN_transmit_P.ConstantShort5_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[3] =
    raspberrypi_CAN_transmit_P.ConstantShort5_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[4] =
    raspberrypi_CAN_transmit_P.ConstantShort6_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[5] =
    raspberrypi_CAN_transmit_P.ConstantShort6_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[6] =
    raspberrypi_CAN_transmit_P.ConstantShort6_Value;
  raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[7] =
    raspberrypi_CAN_transmit_P.ConstantShort6_Value;

  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  raspberrypi_CAN_transmit_B.CANPack1.ID = 105U;
  raspberrypi_CAN_transmit_B.CANPack1.Length = 8U;
  raspberrypi_CAN_transmit_B.CANPack1.Extended = 0U;
  raspberrypi_CAN_transmit_B.CANPack1.Remote = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[0] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[1] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[2] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[3] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[4] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[5] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[6] = 0;
  raspberrypi_CAN_transmit_B.CANPack1.Data[7] = 0;

  {
    (void) memcpy((raspberrypi_CAN_transmit_B.CANPack1.Data),
                  &raspberrypi_CAN_transmit_B.TmpSignalConversionAtCANPack1In[0],
                  8 * sizeof(uint8_T));
  }

  /* MATLABSystem: '<Root>/CAN Transmit2' */
  status = raspberrypi_CAN_transmit_B.CANPack1.Extended;
  dataLength = raspberrypi_CAN_transmit_B.CANPack1.Length;
  remote = raspberrypi_CAN_transmit_B.CANPack1.Remote;
  u0_ID = raspberrypi_CAN_transmit_B.CANPack1.ID;
  for (ret = 0; ret < 8; ret++) {
    raspberrypi_CAN_transmit_B.rxData[ret] =
      raspberrypi_CAN_transmit_B.CANPack1.Data[ret];
  }

  obj_0 = &raspberrypi_CAN_transmit_DW.obj_h;
  extended = obj_0->notFirstStep;
  if (obj_0->Initialized) {
    for (ret = 0; ret < 8; ret++) {
      raspberrypi_CAN_transmit_B.txData[ret] = 0U;
    }

    rxInterface[0] = 'c';
    rxInterface[1] = 'a';
    rxInterface[2] = 'n';
    rxInterface[3] = '0';
    rxInterface[4] = '\x00';
    if (remote == 0) {
      kstr = dataLength - 1;
      for (ret = 0; ret <= kstr; ret++) {
        error = (uint8_T)((uint32_T)ret + 1U);
        txData_tmp = error - 1;
        raspberrypi_CAN_transmit_B.txData[txData_tmp] =
          raspberrypi_CAN_transmit_B.rxData[txData_tmp];
      }
    }

    idType = (status == 0);
    ret = (int32_T)idType;
    error = (uint8_T)ret;
    ret = MW_CAN_transmitCANMsg(&rxInterface[0], error, u0_ID, dataLength,
      &raspberrypi_CAN_transmit_B.txData[0], remote, &status, 1, 1.0,
      obj_0->sockHandleDataFrames, obj_0->sockHandleErrorFrames, extended);
    obj_0->notFirstStep = true;
    if (ret != 0) {
      obj_0->Initialized = false;
    }
  }

  /* End of MATLABSystem: '<Root>/CAN Transmit2' */

  /* MATLABSystem: '<Root>/CAN Receive2' */
  idType = raspberrypi_CAN_transmit_P.CANReceive2_SampleTime;
  if (raspberrypi_CAN_transmit_DW.obj.SampleTime != idType) {
    obj = &raspberrypi_CAN_transmit_DW.obj;
    obj->SampleTime = idType;
  }

  obj = &raspberrypi_CAN_transmit_DW.obj;
  if (obj->Initialized) {
    rxInterface[0] = 'c';
    rxInterface[1] = 'a';
    rxInterface[2] = 'n';
    rxInterface[3] = '0';
    rxInterface[4] = '\x00';
    for (ret = 0; ret < 8; ret++) {
      raspberrypi_CAN_transmit_B.rxData[ret] = 0U;
    }

    extended = 0U;
    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.a[ret] = obj->IdentifierType[ret];
    }

    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.b[ret] = tmp[ret];
    }

    ret = memcmp(&raspberrypi_CAN_transmit_B.a[0],
                 &raspberrypi_CAN_transmit_B.b[0], 28);
    idType_0 = (ret == 0);
    if (idType_0) {
      extended = 1U;
    }

    ret = MW_CAN_receiveRawSimulink(&rxInterface[0], 30U,
      &raspberrypi_CAN_transmit_B.rxData[0], 1, &status, extended, &remote,
      &error, obj->sockHandleDataFrames, obj->sockHandleErrorFrames);
    if (ret != 0) {
      obj->Initialized = false;
    }

    extended = raspberrypi_CAN_transmit_B.rxData[0];
  } else {
    extended = 0U;
    status = 0U;
  }

  /* MATLABSystem: '<Root>/CAN Receive2' */
  raspberrypi_CAN_transmit_B.CANReceive2_o1 = extended;

  /* MATLABSystem: '<Root>/CAN Receive2' */
  raspberrypi_CAN_transmit_B.CANReceive2_o2 = status;

  /* MATLABSystem: '<Root>/CAN Transmit3' */
  status = raspberrypi_CAN_transmit_B.CANReceive2_o1;
  obj_1 = &raspberrypi_CAN_transmit_DW.obj_n;
  extended = obj_1->notFirstStep;
  if (obj_1->Initialized) {
    for (ret = 0; ret < 8; ret++) {
      raspberrypi_CAN_transmit_B.txData[ret] = 0U;
    }

    rxInterface[0] = 'c';
    rxInterface[1] = 'a';
    rxInterface[2] = 'n';
    rxInterface[3] = '0';
    rxInterface[4] = '\x00';
    raspberrypi_CAN_transmit_B.txData[0] = status;
    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.a[ret] = obj_1->IdentifierType[ret];
    }

    for (ret = 0; ret < 28; ret++) {
      raspberrypi_CAN_transmit_B.b[ret] = tmp_2[ret];
    }

    ret = memcmp(&raspberrypi_CAN_transmit_B.a[0],
                 &raspberrypi_CAN_transmit_B.b[0], 28);
    idType_0 = (ret == 0);
    ret = MW_CAN_transmitRaw(&rxInterface[0], (uint8_T)idType_0, 30U, 1,
      &raspberrypi_CAN_transmit_B.txData[0], 0, &status, 1, 1.0,
      obj_1->sockHandleDataFrames, obj_1->sockHandleErrorFrames, extended);
    obj_1->notFirstStep = true;
    if (ret != 0) {
      obj_1->Initialized = false;
    }
  }

  /* End of MATLABSystem: '<Root>/CAN Transmit3' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(raspberrypi_CAN_transmit_M->rtwLogInfo,
                      (&raspberrypi_CAN_transmit_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(raspberrypi_CAN_transmit_M)!=-1) &&
        !((rtmGetTFinal(raspberrypi_CAN_transmit_M)-
           raspberrypi_CAN_transmit_M->Timing.taskTime0) >
          raspberrypi_CAN_transmit_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(raspberrypi_CAN_transmit_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++raspberrypi_CAN_transmit_M->Timing.clockTick0)) {
    ++raspberrypi_CAN_transmit_M->Timing.clockTickH0;
  }

  raspberrypi_CAN_transmit_M->Timing.taskTime0 =
    raspberrypi_CAN_transmit_M->Timing.clockTick0 *
    raspberrypi_CAN_transmit_M->Timing.stepSize0 +
    raspberrypi_CAN_transmit_M->Timing.clockTickH0 *
    raspberrypi_CAN_transmit_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void raspberrypi_CAN_transmit_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)raspberrypi_CAN_transmit_M, 0,
                sizeof(RT_MODEL_raspberrypi_CAN_tran_T));
  rtmSetTFinal(raspberrypi_CAN_transmit_M, 10.0);
  raspberrypi_CAN_transmit_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    raspberrypi_CAN_transmit_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(raspberrypi_CAN_transmit_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(raspberrypi_CAN_transmit_M->rtwLogInfo, (NULL));
    rtliSetLogT(raspberrypi_CAN_transmit_M->rtwLogInfo, "tout");
    rtliSetLogX(raspberrypi_CAN_transmit_M->rtwLogInfo, "");
    rtliSetLogXFinal(raspberrypi_CAN_transmit_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(raspberrypi_CAN_transmit_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(raspberrypi_CAN_transmit_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(raspberrypi_CAN_transmit_M->rtwLogInfo, 0);
    rtliSetLogDecimation(raspberrypi_CAN_transmit_M->rtwLogInfo, 1);
    rtliSetLogY(raspberrypi_CAN_transmit_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(raspberrypi_CAN_transmit_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(raspberrypi_CAN_transmit_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &raspberrypi_CAN_transmit_B), 0,
                sizeof(B_raspberrypi_CAN_transmit_T));

  /* states (dwork) */
  (void) memset((void *)&raspberrypi_CAN_transmit_DW, 0,
                sizeof(DW_raspberrypi_CAN_transmit_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(raspberrypi_CAN_transmit_M->rtwLogInfo, 0.0,
    rtmGetTFinal(raspberrypi_CAN_transmit_M),
    raspberrypi_CAN_transmit_M->Timing.stepSize0, (&rtmGetErrorStatus
    (raspberrypi_CAN_transmit_M)));

  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack' */

  /*-----------S-Function Block: <Root>/CAN Unpack -----------------*/
  {
    codertarget_raspi_internal_CA_T *b_obj_0;
    codertarget_raspi_internal_LE_T *b_obj_1;
    codertarget_raspi_internal__f_T *b_obj;
    codertarget_raspi_internal_f0_T *b_obj_2;
    int32_T i;
    static const char_T tmp[28] = { 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', ' ',
      '(', '1', '1', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
      'i', 'e', 'r', ')' };

    static const char_T tmp_0[5] = "none";

    /* Start for MATLABSystem: '<Root>/CAN Receive1' */
    raspberrypi_CAN_transmit_DW.obj_o.matlabCodegenIsDeleted = true;
    raspberrypi_CAN_transmit_B.SampleTime =
      raspberrypi_CAN_transmit_P.CANReceive1_SampleTime;
    b_obj = &raspberrypi_CAN_transmit_DW.obj_o;
    b_obj->sockHandleDataFrames = 0;
    b_obj->sockHandleErrorFrames = 0;
    b_obj->isInitialized = 0;
    b_obj->SampleTime = -1.0;
    b_obj->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty_o = true;
    b_obj = &raspberrypi_CAN_transmit_DW.obj_o;
    for (i = 0; i < 28; i++) {
      raspberrypi_CAN_transmit_B.b_value[i] = tmp[i];
    }

    for (i = 0; i < 28; i++) {
      b_obj->IdentifierType[i] = raspberrypi_CAN_transmit_B.b_value[i];
    }

    b_obj->SetIdentifierType = true;
    b_obj = &raspberrypi_CAN_transmit_DW.obj_o;
    b_obj->SampleTime = raspberrypi_CAN_transmit_B.SampleTime;
    raspberrypi_CA_SystemCore_setup(&raspberrypi_CAN_transmit_DW.obj_o);

    /* End of Start for MATLABSystem: '<Root>/CAN Receive1' */

    /* Start for MATLABSystem: '<Root>/CAN Transmit1' */
    raspberrypi_CAN_transmit_DW.obj_d.matlabCodegenIsDeleted = true;
    b_obj_0 = &raspberrypi_CAN_transmit_DW.obj_d;
    b_obj_0->sockHandleDataFrames = 0;
    b_obj_0->sockHandleErrorFrames = 0;
    b_obj_0->notFirstStep = false;
    b_obj_0->isInitialized = 0;
    b_obj_0->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty_cl = true;
    raspberrypi_SystemCore_setup_f0(&raspberrypi_CAN_transmit_DW.obj_d);

    /* Start for MATLABSystem: '<Root>/LED1' */
    raspberrypi_CAN_transmit_DW.obj_l.matlabCodegenIsDeleted = true;
    b_obj_1 = &raspberrypi_CAN_transmit_DW.obj_l;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty = true;
    b_obj_1 = &raspberrypi_CAN_transmit_DW.obj_l;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 5; i++) {
      raspberrypi_CAN_transmit_B.b_m[i] = tmp_0[i];
    }

    EXT_LED_setTrigger(0U, &raspberrypi_CAN_transmit_B.b_m[0]);
    b_obj_1->isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/LED1' */

    /* Start for MATLABSystem: '<Root>/CAN Transmit2' */
    raspberrypi_CAN_transmit_DW.obj_h.matlabCodegenIsDeleted = true;
    b_obj_0 = &raspberrypi_CAN_transmit_DW.obj_h;
    b_obj_0->sockHandleDataFrames = 0;
    b_obj_0->sockHandleErrorFrames = 0;
    b_obj_0->notFirstStep = false;
    b_obj_0->isInitialized = 0;
    b_obj_0->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty_c = true;
    raspberrypi_SystemCore_setup_f0(&raspberrypi_CAN_transmit_DW.obj_h);

    /* Start for MATLABSystem: '<Root>/CAN Receive2' */
    raspberrypi_CAN_transmit_DW.obj.matlabCodegenIsDeleted = true;
    raspberrypi_CAN_transmit_B.SampleTime =
      raspberrypi_CAN_transmit_P.CANReceive2_SampleTime;
    b_obj = &raspberrypi_CAN_transmit_DW.obj;
    b_obj->sockHandleDataFrames = 0;
    b_obj->sockHandleErrorFrames = 0;
    b_obj->isInitialized = 0;
    b_obj->SampleTime = -1.0;
    b_obj->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty_p = true;
    b_obj = &raspberrypi_CAN_transmit_DW.obj;
    for (i = 0; i < 28; i++) {
      raspberrypi_CAN_transmit_B.b_value[i] = tmp[i];
    }

    for (i = 0; i < 28; i++) {
      b_obj->IdentifierType[i] = raspberrypi_CAN_transmit_B.b_value[i];
    }

    b_obj->SetIdentifierType = true;
    b_obj = &raspberrypi_CAN_transmit_DW.obj;
    b_obj->SampleTime = raspberrypi_CAN_transmit_B.SampleTime;
    raspberrypi_CA_SystemCore_setup(&raspberrypi_CAN_transmit_DW.obj);

    /* End of Start for MATLABSystem: '<Root>/CAN Receive2' */

    /* Start for MATLABSystem: '<Root>/CAN Transmit3' */
    raspberrypi_CAN_transmit_DW.obj_n.matlabCodegenIsDeleted = true;
    b_obj_2 = &raspberrypi_CAN_transmit_DW.obj_n;
    b_obj_2->sockHandleDataFrames = 0;
    b_obj_2->sockHandleErrorFrames = 0;
    b_obj_2->notFirstStep = false;
    b_obj_2->isInitialized = 0;
    b_obj_2->matlabCodegenIsDeleted = false;
    raspberrypi_CAN_transmit_DW.objisempty_h = true;
    b_obj_2 = &raspberrypi_CAN_transmit_DW.obj_n;
    for (i = 0; i < 28; i++) {
      raspberrypi_CAN_transmit_B.b_value[i] = tmp[i];
    }

    for (i = 0; i < 28; i++) {
      b_obj_2->IdentifierType[i] = raspberrypi_CAN_transmit_B.b_value[i];
    }

    b_obj_2->SetIdentifierType = true;
    raspberry_SystemCore_setup_f0kl(&raspberrypi_CAN_transmit_DW.obj_n);

    /* End of Start for MATLABSystem: '<Root>/CAN Transmit3' */
  }
}

/* Model terminate function */
void raspberrypi_CAN_transmit_terminate(void)
{
  codertarget_raspi_internal_CA_T *obj_0;
  codertarget_raspi_internal_LE_T *obj_1;
  codertarget_raspi_internal__f_T *obj;
  codertarget_raspi_internal_f0_T *obj_2;
  char_T canInterface[5];

  /* Terminate for MATLABSystem: '<Root>/CAN Receive1' */
  obj = &raspberrypi_CAN_transmit_DW.obj_o;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete && obj->Initialized) {
      canInterface[0] = 'c';
      canInterface[1] = 'a';
      canInterface[2] = 'n';
      canInterface[3] = '0';
      canInterface[4] = '\x00';
      MW_clearSocket(&obj->sockHandleDataFrames, &canInterface[0]);
      MW_clearSocket(&obj->sockHandleErrorFrames, &canInterface[0]);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/CAN Receive1' */

  /* Terminate for MATLABSystem: '<Root>/CAN Transmit1' */
  obj_0 = &raspberrypi_CAN_transmit_DW.obj_d;
  if (!obj_0->matlabCodegenIsDeleted) {
    obj_0->matlabCodegenIsDeleted = true;
    if ((obj_0->isInitialized == 1) && obj_0->isSetupComplete &&
        obj_0->Initialized) {
      canInterface[0] = 'c';
      canInterface[1] = 'a';
      canInterface[2] = 'n';
      canInterface[3] = '0';
      canInterface[4] = '\x00';
      MW_clearSocket(&obj_0->sockHandleDataFrames, &canInterface[0]);
      MW_clearSocket(&obj_0->sockHandleErrorFrames, &canInterface[0]);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/CAN Transmit1' */

  /* Terminate for MATLABSystem: '<Root>/LED1' */
  obj_1 = &raspberrypi_CAN_transmit_DW.obj_l;
  if (!obj_1->matlabCodegenIsDeleted) {
    obj_1->matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/LED1' */

  /* Terminate for MATLABSystem: '<Root>/CAN Transmit2' */
  obj_0 = &raspberrypi_CAN_transmit_DW.obj_h;
  if (!obj_0->matlabCodegenIsDeleted) {
    obj_0->matlabCodegenIsDeleted = true;
    if ((obj_0->isInitialized == 1) && obj_0->isSetupComplete &&
        obj_0->Initialized) {
      canInterface[0] = 'c';
      canInterface[1] = 'a';
      canInterface[2] = 'n';
      canInterface[3] = '0';
      canInterface[4] = '\x00';
      MW_clearSocket(&obj_0->sockHandleDataFrames, &canInterface[0]);
      MW_clearSocket(&obj_0->sockHandleErrorFrames, &canInterface[0]);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/CAN Transmit2' */

  /* Terminate for MATLABSystem: '<Root>/CAN Receive2' */
  obj = &raspberrypi_CAN_transmit_DW.obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete && obj->Initialized) {
      canInterface[0] = 'c';
      canInterface[1] = 'a';
      canInterface[2] = 'n';
      canInterface[3] = '0';
      canInterface[4] = '\x00';
      MW_clearSocket(&obj->sockHandleDataFrames, &canInterface[0]);
      MW_clearSocket(&obj->sockHandleErrorFrames, &canInterface[0]);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/CAN Receive2' */

  /* Terminate for MATLABSystem: '<Root>/CAN Transmit3' */
  obj_2 = &raspberrypi_CAN_transmit_DW.obj_n;
  if (!obj_2->matlabCodegenIsDeleted) {
    obj_2->matlabCodegenIsDeleted = true;
    if ((obj_2->isInitialized == 1) && obj_2->isSetupComplete &&
        obj_2->Initialized) {
      canInterface[0] = 'c';
      canInterface[1] = 'a';
      canInterface[2] = 'n';
      canInterface[3] = '0';
      canInterface[4] = '\x00';
      MW_clearSocket(&obj_2->sockHandleDataFrames, &canInterface[0]);
      MW_clearSocket(&obj_2->sockHandleErrorFrames, &canInterface[0]);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/CAN Transmit3' */
}
