/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: mini_car_ble.h
 *
 * Code generated for Simulink model 'mini_car_ble'.
 *
 * Model version                  : 1.58
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat May 11 01:06:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: AMD->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mini_car_ble_h_
#define RTW_HEADER_mini_car_ble_h_
#ifndef mini_car_ble_COMMON_INCLUDES_
#define mini_car_ble_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* mini_car_ble_COMMON_INCLUDES_ */

#include "mini_car_ble_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Merge;                        /* '<S3>/Merge' */
  real_T Merge_c;                      /* '<S5>/Merge' */
  real_T Merge1;                       /* '<S5>/Merge1' */
  real_T Merge2;                       /* '<S5>/Merge2' */
  real_T Merge3;                       /* '<S5>/Merge3' */
  real_T Merge4;                       /* '<S5>/Merge4' */
  real_T Merge5;                       /* '<S5>/Merge5' */
  uint16_T Merge_a;                    /* '<S50>/Merge' */
  uint16_T Merge_l;                    /* '<S2>/Merge' */
} B_mini_car_ble_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T DelayInput1_DSTATE;         /* '<S46>/Delay Input1' */
  uint16_T UnitDelay_DSTATE;           /* '<S4>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_d;         /* '<S50>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_e;         /* '<S2>/Unit Delay' */
  uint16_T UnitDelay2_DSTATE;          /* '<S2>/Unit Delay2' */
  uint16_T UnitDelay1_DSTATE;          /* '<S2>/Unit Delay1' */
  uint16_T UnitDelay5_DSTATE;          /* '<S2>/Unit Delay5' */
  uint16_T UnitDelay4_DSTATE;          /* '<S2>/Unit Delay4' */
  uint16_T UnitDelay6_DSTATE;          /* '<S2>/Unit Delay6' */
  uint16_T Delay4_DSTATE[3];           /* '<S2>/Delay4' */
  uint16_T Delay2_DSTATE[2];           /* '<S2>/Delay2' */
  uint16_T UnitDelay10_DSTATE;         /* '<S2>/Unit Delay10' */
  uint16_T Delay5_DSTATE[3];           /* '<S2>/Delay5' */
  uint16_T Delay3_DSTATE[2];           /* '<S2>/Delay3' */
  uint16_T UnitDelay9_DSTATE;          /* '<S2>/Unit Delay9' */
  uint16_T Delay_DSTATE[2];            /* '<S2>/Delay' */
  uint16_T UnitDelay8_DSTATE;          /* '<S2>/Unit Delay8' */
  uint16_T Delay1_DSTATE[2];           /* '<S2>/Delay1' */
  uint16_T UnitDelay7_DSTATE;          /* '<S2>/Unit Delay7' */
  uint16_T Delay6_DSTATE[2];           /* '<S2>/Delay6' */
  uint16_T UnitDelay12_DSTATE;         /* '<S2>/Unit Delay12' */
  uint16_T Delay7_DSTATE[2];           /* '<S2>/Delay7' */
  uint16_T UnitDelay11_DSTATE;         /* '<S2>/Unit Delay11' */
  uint16_T UnitDelay3_DSTATE;          /* '<S2>/Unit Delay3' */
  uint16_T Delay_DSTATE_b[2];          /* '<S41>/Delay' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S67>/Delay Input1' */
} DW_mini_car_ble_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T rx_directionStatus;         /* '<Root>/rx_directionStatus' */
  uint16_T rx_set_speed;               /* '<Root>/rx_set_speed' */
} ExtU_mini_car_ble_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Drive_RMotor;                 /* '<Root>/Drive_RMotor' */
  real_T Drive_LMotor;                 /* '<Root>/Drive_LMotor' */
  real_T IN1_RMotor;                   /* '<Root>/IN1_RMotor' */
  real_T IN2_RMotor;                   /* '<Root>/IN2_RMotor' */
  real_T IN3_LMotor;                   /* '<Root>/IN3_LMotor' */
  real_T IN4_LMotor;                   /* '<Root>/IN4_LMotor' */
} ExtY_mini_car_ble_T;

/* Real-time Model Data Structure */
struct tag_RTM_mini_car_ble_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_mini_car_ble_T mini_car_ble_B;

/* Block states (default storage) */
extern DW_mini_car_ble_T mini_car_ble_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_mini_car_ble_T mini_car_ble_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_mini_car_ble_T mini_car_ble_Y;

/* Model entry point functions */
extern void mini_car_ble_initialize(void);
extern void mini_car_ble_step(void);
extern void mini_car_ble_terminate(void);

/* Real-time Model object */
extern RT_MODEL_mini_car_ble_T *const mini_car_ble_M;

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
 * '<Root>' : 'mini_car_ble'
 * '<S1>'   : 'mini_car_ble/Mini Remote Car'
 * '<S2>'   : 'mini_car_ble/Mini Remote Car/ChangeDirection'
 * '<S3>'   : 'mini_car_ble/Mini Remote Car/ChangeSpeed'
 * '<S4>'   : 'mini_car_ble/Mini Remote Car/Subsystem'
 * '<S5>'   : 'mini_car_ble/Mini Remote Car/Subsystem1'
 * '<S6>'   : 'mini_car_ble/Mini Remote Car/ChangeDirection/Change Direction'
 * '<S7>'   : 'mini_car_ble/Mini Remote Car/ChangeDirection/Change Speed Keep Direction'
 * '<S8>'   : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant'
 * '<S9>'   : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant1'
 * '<S10>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant10'
 * '<S11>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant11'
 * '<S12>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant12'
 * '<S13>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant13'
 * '<S14>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant14'
 * '<S15>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant15'
 * '<S16>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant16'
 * '<S17>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant17'
 * '<S18>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant18'
 * '<S19>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant19'
 * '<S20>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant2'
 * '<S21>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant20'
 * '<S22>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant21'
 * '<S23>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant22'
 * '<S24>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant23'
 * '<S25>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant24'
 * '<S26>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant25'
 * '<S27>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant26'
 * '<S28>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant27'
 * '<S29>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant28'
 * '<S30>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant29'
 * '<S31>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant3'
 * '<S32>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant30'
 * '<S33>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant31'
 * '<S34>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant32'
 * '<S35>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant4'
 * '<S36>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant5'
 * '<S37>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant6'
 * '<S38>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant7'
 * '<S39>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant8'
 * '<S40>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Compare To Constant9'
 * '<S41>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Keep Direction z-2'
 * '<S42>'  : 'mini_car_ble/Mini Remote Car/ChangeDirection/Zero Speed'
 * '<S43>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Compare To Constant'
 * '<S44>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Compare To Constant1'
 * '<S45>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Compare To Constant2'
 * '<S46>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Detect Change'
 * '<S47>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/If Action Subsystem'
 * '<S48>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/If Action Subsystem1'
 * '<S49>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/If Action Subsystem2'
 * '<S50>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem'
 * '<S51>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant'
 * '<S52>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant1'
 * '<S53>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant2'
 * '<S54>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant3'
 * '<S55>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant4'
 * '<S56>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant5'
 * '<S57>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant6'
 * '<S58>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant7'
 * '<S59>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant8'
 * '<S60>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Compare To Constant9'
 * '<S61>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Speed Mode 1'
 * '<S62>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Speed Mode 2'
 * '<S63>'  : 'mini_car_ble/Mini Remote Car/ChangeSpeed/Subsystem/Speed Mode 3'
 * '<S64>'  : 'mini_car_ble/Mini Remote Car/Subsystem/Compare To Constant1'
 * '<S65>'  : 'mini_car_ble/Mini Remote Car/Subsystem/Compare To Constant2'
 * '<S66>'  : 'mini_car_ble/Mini Remote Car/Subsystem/Compare To Constant3'
 * '<S67>'  : 'mini_car_ble/Mini Remote Car/Subsystem/Detect Rise Positive'
 * '<S68>'  : 'mini_car_ble/Mini Remote Car/Subsystem/Detect Rise Positive/Positive'
 * '<S69>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant'
 * '<S70>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant1'
 * '<S71>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant2'
 * '<S72>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant3'
 * '<S73>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant4'
 * '<S74>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Compare To Constant5'
 * '<S75>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Direita'
 * '<S76>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Esquerda'
 * '<S77>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Frente'
 * '<S78>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Re'
 * '<S79>'  : 'mini_car_ble/Mini Remote Car/Subsystem1/Stop'
 */
#endif                                 /* RTW_HEADER_mini_car_ble_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
