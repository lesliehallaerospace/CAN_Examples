/*
 * rt_nonfinite.h
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

#ifndef RTW_HEADER_rt_nonfinite_h_
#define RTW_HEADER_rt_nonfinite_h_
#include <stddef.h>
#include "rtwtypes.h"
#define NOT_USING_NONFINITE_LITERALS   1

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern boolean_T rtIsInf(real_T value);
extern boolean_T rtIsInfF(real32_T value);
extern boolean_T rtIsNaN(real_T value);
extern boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

#endif                                 /* RTW_HEADER_rt_nonfinite_h_ */