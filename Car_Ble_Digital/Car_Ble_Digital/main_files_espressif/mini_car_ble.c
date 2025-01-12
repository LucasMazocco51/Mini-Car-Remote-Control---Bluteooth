/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: mini_car_ble.c
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

#include "mini_car_ble.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_mini_car_ble_T mini_car_ble_B;

/* Block states (default storage) */
DW_mini_car_ble_T mini_car_ble_DW;

/* External inputs (root inport signals with default storage) */
ExtU_mini_car_ble_T mini_car_ble_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_mini_car_ble_T mini_car_ble_Y;

/* Real-time model */
static RT_MODEL_mini_car_ble_T mini_car_ble_M_;
RT_MODEL_mini_car_ble_T *const mini_car_ble_M = &mini_car_ble_M_;

/* Model step function */
void mini_car_ble_step(void)
{
  real_T rtb_Multiply;
  boolean_T rtb_Uk1_c;

  /* Outputs for Enabled SubSystem: '<S3>/Subsystem' incorporates:
   *  EnablePort: '<S50>/Enable'
   */
  /* RelationalOperator: '<S46>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/rx_set_speed'
   *  UnitDelay: '<S46>/Delay Input1'
   *
   * Block description for '<S46>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (mini_car_ble_U.rx_set_speed != mini_car_ble_DW.DelayInput1_DSTATE) {
    /* If: '<S50>/If' incorporates:
     *  Constant: '<S51>/Constant'
     *  Constant: '<S52>/Constant'
     *  Constant: '<S53>/Constant'
     *  Constant: '<S54>/Constant'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S56>/Constant'
     *  Constant: '<S57>/Constant'
     *  Constant: '<S58>/Constant'
     *  Constant: '<S59>/Constant'
     *  Constant: '<S60>/Constant'
     *  Logic: '<S50>/AND'
     *  Logic: '<S50>/AND1'
     *  Logic: '<S50>/AND2'
     *  Logic: '<S50>/AND3'
     *  Logic: '<S50>/AND4'
     *  Logic: '<S50>/OR'
     *  Logic: '<S50>/OR1'
     *  RelationalOperator: '<S51>/Compare'
     *  RelationalOperator: '<S52>/Compare'
     *  RelationalOperator: '<S53>/Compare'
     *  RelationalOperator: '<S54>/Compare'
     *  RelationalOperator: '<S55>/Compare'
     *  RelationalOperator: '<S56>/Compare'
     *  RelationalOperator: '<S57>/Compare'
     *  RelationalOperator: '<S58>/Compare'
     *  RelationalOperator: '<S59>/Compare'
     *  RelationalOperator: '<S60>/Compare'
     *  Sum: '<S50>/Sum'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    if (((mini_car_ble_U.rx_set_speed == 16) &&
         (mini_car_ble_DW.UnitDelay_DSTATE_d == 0)) ||
        ((mini_car_ble_U.rx_set_speed == 8) &&
         (mini_car_ble_DW.UnitDelay_DSTATE_d == 2))) {
      /* Outputs for IfAction SubSystem: '<S50>/Speed Mode 1' incorporates:
       *  ActionPort: '<S61>/Action Port'
       */
      /* Merge: '<S50>/Merge' incorporates:
       *  Constant: '<S61>/Constant'
       *  SignalConversion generated from: '<S61>/Out1'
       */
      mini_car_ble_B.Merge_a = 1U;

      /* End of Outputs for SubSystem: '<S50>/Speed Mode 1' */
    } else if (((mini_car_ble_U.rx_set_speed == 16) &&
                (mini_car_ble_DW.UnitDelay_DSTATE_d == 1)) ||
               ((mini_car_ble_U.rx_set_speed == 8) &&
                (mini_car_ble_DW.UnitDelay_DSTATE_d == 3))) {
      /* Outputs for IfAction SubSystem: '<S50>/Speed Mode 2' incorporates:
       *  ActionPort: '<S62>/Action Port'
       */
      /* Merge: '<S50>/Merge' incorporates:
       *  Constant: '<S62>/Constant'
       *  SignalConversion generated from: '<S62>/Out1'
       */
      mini_car_ble_B.Merge_a = 2U;

      /* End of Outputs for SubSystem: '<S50>/Speed Mode 2' */
    } else if ((mini_car_ble_U.rx_set_speed == 16) &&
               (mini_car_ble_DW.UnitDelay_DSTATE_d == 2)) {
      /* Outputs for IfAction SubSystem: '<S50>/Speed Mode 3' incorporates:
       *  ActionPort: '<S63>/Action Port'
       */
      /* Merge: '<S50>/Merge' incorporates:
       *  Constant: '<S63>/Constant'
       *  SignalConversion generated from: '<S63>/Out1'
       */
      mini_car_ble_B.Merge_a = 3U;

      /* End of Outputs for SubSystem: '<S50>/Speed Mode 3' */
    }

    /* End of If: '<S50>/If' */

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    mini_car_ble_DW.UnitDelay_DSTATE_d = mini_car_ble_B.Merge_a;
  }

  /* End of RelationalOperator: '<S46>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<S3>/Subsystem' */

  /* If: '<S3>/If' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   */
  if (mini_car_ble_B.Merge_a == 1) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    /* Merge: '<S3>/Merge' incorporates:
     *  Constant: '<S47>/Constant'
     *  SignalConversion generated from: '<S47>/Out1'
     */
    mini_car_ble_B.Merge = 25.0;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else if (mini_car_ble_B.Merge_a == 2) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    /* Merge: '<S3>/Merge' incorporates:
     *  Constant: '<S48>/Constant'
     *  SignalConversion generated from: '<S48>/Out1'
     */
    mini_car_ble_B.Merge = 135.0;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  } else if (mini_car_ble_B.Merge_a == 3) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    /* Merge: '<S3>/Merge' incorporates:
     *  Constant: '<S49>/Constant'
     *  SignalConversion generated from: '<S49>/Out1'
     */
    mini_car_ble_B.Merge = 255.0;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  }

  /* End of If: '<S3>/If' */

  /* UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Uk1_c = mini_car_ble_DW.DelayInput1_DSTATE_g;

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/rx_directionStatus'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  mini_car_ble_DW.DelayInput1_DSTATE_g = (mini_car_ble_U.rx_directionStatus > 0);

  /* Outputs for Enabled SubSystem: '<S1>/ChangeDirection' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* Logic: '<S4>/OR' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/rx_directionStatus'
   *  Logic: '<S4>/AND'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/FixPt Relational Operator'
   *  UnitDelay: '<S4>/Unit Delay'
   *  UnitDelay: '<S67>/Delay Input1'
   *
   * Block description for '<S67>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)mini_car_ble_DW.DelayInput1_DSTATE_g > (int32_T)rtb_Uk1_c) ||
      (mini_car_ble_U.rx_directionStatus != 0) ||
      ((mini_car_ble_DW.UnitDelay_DSTATE != 0) &&
       (mini_car_ble_U.rx_directionStatus == 0))) {
    /* If: '<S2>/If' incorporates:
     *  Constant: '<S10>/Constant'
     *  Constant: '<S11>/Constant'
     *  Constant: '<S12>/Constant'
     *  Constant: '<S13>/Constant'
     *  Constant: '<S14>/Constant'
     *  Constant: '<S15>/Constant'
     *  Constant: '<S16>/Constant'
     *  Constant: '<S17>/Constant'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S35>/Constant'
     *  Constant: '<S36>/Constant'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S8>/Constant'
     *  Constant: '<S9>/Constant'
     *  Delay: '<S2>/Delay'
     *  Delay: '<S2>/Delay1'
     *  Delay: '<S2>/Delay2'
     *  Delay: '<S2>/Delay3'
     *  Delay: '<S2>/Delay4'
     *  Delay: '<S2>/Delay5'
     *  Delay: '<S2>/Delay6'
     *  Delay: '<S2>/Delay7'
     *  Inport: '<Root>/rx_set_speed'
     *  Logic: '<S2>/AND'
     *  Logic: '<S2>/AND1'
     *  Logic: '<S2>/AND2'
     *  Logic: '<S2>/AND3'
     *  Logic: '<S2>/AND4'
     *  Logic: '<S2>/AND5'
     *  Logic: '<S2>/AND6'
     *  Logic: '<S2>/AND7'
     *  Logic: '<S2>/AND8'
     *  Logic: '<S2>/NOT'
     *  Logic: '<S2>/OR'
     *  RelationalOperator: '<S10>/Compare'
     *  RelationalOperator: '<S11>/Compare'
     *  RelationalOperator: '<S12>/Compare'
     *  RelationalOperator: '<S13>/Compare'
     *  RelationalOperator: '<S14>/Compare'
     *  RelationalOperator: '<S15>/Compare'
     *  RelationalOperator: '<S16>/Compare'
     *  RelationalOperator: '<S17>/Compare'
     *  RelationalOperator: '<S18>/Compare'
     *  RelationalOperator: '<S19>/Compare'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S21>/Compare'
     *  RelationalOperator: '<S22>/Compare'
     *  RelationalOperator: '<S23>/Compare'
     *  RelationalOperator: '<S24>/Compare'
     *  RelationalOperator: '<S25>/Compare'
     *  RelationalOperator: '<S26>/Compare'
     *  RelationalOperator: '<S27>/Compare'
     *  RelationalOperator: '<S28>/Compare'
     *  RelationalOperator: '<S29>/Compare'
     *  RelationalOperator: '<S30>/Compare'
     *  RelationalOperator: '<S31>/Compare'
     *  RelationalOperator: '<S32>/Compare'
     *  RelationalOperator: '<S33>/Compare'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S35>/Compare'
     *  RelationalOperator: '<S36>/Compare'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     *  RelationalOperator: '<S8>/Compare'
     *  RelationalOperator: '<S9>/Compare'
     *  UnitDelay: '<S2>/Unit Delay'
     *  UnitDelay: '<S2>/Unit Delay1'
     *  UnitDelay: '<S2>/Unit Delay10'
     *  UnitDelay: '<S2>/Unit Delay11'
     *  UnitDelay: '<S2>/Unit Delay12'
     *  UnitDelay: '<S2>/Unit Delay2'
     *  UnitDelay: '<S2>/Unit Delay4'
     *  UnitDelay: '<S2>/Unit Delay5'
     *  UnitDelay: '<S2>/Unit Delay6'
     *  UnitDelay: '<S2>/Unit Delay7'
     *  UnitDelay: '<S2>/Unit Delay8'
     *  UnitDelay: '<S2>/Unit Delay9'
     */
    if ((mini_car_ble_DW.UnitDelay_DSTATE_e == 0) &&
        (mini_car_ble_U.rx_directionStatus != 0) && (mini_car_ble_U.rx_set_speed
         == 0)) {
      /* Outputs for IfAction SubSystem: '<S2>/Change Direction' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      /* Merge: '<S2>/Merge' incorporates:
       *  SignalConversion generated from: '<S6>/In1'
       */
      mini_car_ble_B.Merge_l = mini_car_ble_U.rx_directionStatus;

      /* End of Outputs for SubSystem: '<S2>/Change Direction' */
    } else if ((mini_car_ble_DW.UnitDelay2_DSTATE != 0) &&
               (mini_car_ble_U.rx_directionStatus == 0) &&
               (mini_car_ble_DW.UnitDelay1_DSTATE == 0) &&
               (mini_car_ble_U.rx_set_speed != 0)) {
      /* Outputs for IfAction SubSystem: '<S2>/Change Speed Keep Direction' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* Merge: '<S2>/Merge' incorporates:
       *  SignalConversion generated from: '<S7>/In1'
       *  UnitDelay: '<S2>/Unit Delay3'
       */
      mini_car_ble_B.Merge_l = mini_car_ble_DW.UnitDelay3_DSTATE;

      /* End of Outputs for SubSystem: '<S2>/Change Speed Keep Direction' */
    } else if ((mini_car_ble_DW.Delay6_DSTATE[0U] != 0) &&
               (mini_car_ble_DW.UnitDelay12_DSTATE == 0) &&
               (mini_car_ble_U.rx_directionStatus == 0) &&
               (mini_car_ble_DW.Delay7_DSTATE[0U] == 0) &&
               (mini_car_ble_DW.UnitDelay11_DSTATE != 0) &&
               (mini_car_ble_U.rx_set_speed == 0)) {
      /* Outputs for IfAction SubSystem: '<S2>/Keep Direction z-2' incorporates:
       *  ActionPort: '<S41>/Action Port'
       */
      /* Merge: '<S2>/Merge' incorporates:
       *  Delay: '<S41>/Delay'
       */
      mini_car_ble_B.Merge_l = mini_car_ble_DW.Delay_DSTATE_b[0];

      /* Update for Delay: '<S41>/Delay' */
      mini_car_ble_DW.Delay_DSTATE_b[0] = mini_car_ble_DW.Delay_DSTATE_b[1];
      mini_car_ble_DW.Delay_DSTATE_b[1] = mini_car_ble_U.rx_directionStatus;

      /* End of Outputs for SubSystem: '<S2>/Keep Direction z-2' */
    } else if ((((mini_car_ble_DW.UnitDelay5_DSTATE == 0) &&
                 (mini_car_ble_U.rx_directionStatus == 0) &&
                 (mini_car_ble_DW.UnitDelay4_DSTATE == 0) &&
                 (mini_car_ble_U.rx_set_speed == 0)) ||
                ((mini_car_ble_DW.UnitDelay6_DSTATE != 0) &&
                 (mini_car_ble_U.rx_directionStatus == 0)) ||
                ((mini_car_ble_DW.Delay4_DSTATE[0U] != 0) &&
                 (mini_car_ble_DW.Delay2_DSTATE[0U] == 0) &&
                 (mini_car_ble_DW.UnitDelay10_DSTATE == 0) &&
                 (mini_car_ble_U.rx_directionStatus == 0) &&
                 (mini_car_ble_DW.Delay5_DSTATE[0U] == 0) &&
                 (mini_car_ble_DW.Delay3_DSTATE[0U] != 0) &&
                 (mini_car_ble_DW.UnitDelay9_DSTATE == 0) &&
                 (mini_car_ble_U.rx_set_speed == 0))) &&
               ((mini_car_ble_DW.Delay_DSTATE[0U] == 0) ||
                (mini_car_ble_DW.UnitDelay8_DSTATE != 0) ||
                (mini_car_ble_U.rx_directionStatus != 0) ||
                (mini_car_ble_DW.Delay1_DSTATE[0U] != 0) ||
                (mini_car_ble_DW.UnitDelay7_DSTATE == 0) ||
                (mini_car_ble_U.rx_set_speed != 0))) {
      /* Outputs for IfAction SubSystem: '<S2>/Zero Speed' incorporates:
       *  ActionPort: '<S42>/Action Port'
       */
      /* Merge: '<S2>/Merge' incorporates:
       *  Constant: '<S42>/Constant'
       *  SignalConversion generated from: '<S42>/Out1'
       */
      mini_car_ble_B.Merge_l = 0U;

      /* End of Outputs for SubSystem: '<S2>/Zero Speed' */
    }

    /* End of If: '<S2>/If' */

    /* DataTypeConversion: '<S2>/Cast' incorporates:
     *  UnitDelay: '<S2>/Unit Delay3'
     */
    mini_car_ble_DW.UnitDelay3_DSTATE = mini_car_ble_B.Merge_l;

    /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay_DSTATE_e = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay2' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay2_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay1' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.UnitDelay1_DSTATE = mini_car_ble_U.rx_set_speed;

    /* Update for UnitDelay: '<S2>/Unit Delay5' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay5_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay4' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.UnitDelay4_DSTATE = mini_car_ble_U.rx_set_speed;

    /* Update for UnitDelay: '<S2>/Unit Delay6' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay6_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for Delay: '<S2>/Delay2' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.Delay2_DSTATE[0] = mini_car_ble_DW.Delay2_DSTATE[1];
    mini_car_ble_DW.Delay2_DSTATE[1] = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay10' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay10_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for Delay: '<S2>/Delay4' */
    mini_car_ble_DW.Delay4_DSTATE[0] = mini_car_ble_DW.Delay4_DSTATE[1];

    /* Update for Delay: '<S2>/Delay5' */
    mini_car_ble_DW.Delay5_DSTATE[0] = mini_car_ble_DW.Delay5_DSTATE[1];

    /* Update for Delay: '<S2>/Delay4' */
    mini_car_ble_DW.Delay4_DSTATE[1] = mini_car_ble_DW.Delay4_DSTATE[2];

    /* Update for Delay: '<S2>/Delay5' */
    mini_car_ble_DW.Delay5_DSTATE[1] = mini_car_ble_DW.Delay5_DSTATE[2];

    /* Update for Delay: '<S2>/Delay4' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.Delay4_DSTATE[2] = mini_car_ble_U.rx_directionStatus;

    /* Update for Delay: '<S2>/Delay5' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.Delay5_DSTATE[2] = mini_car_ble_U.rx_set_speed;

    /* Update for Delay: '<S2>/Delay3' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.Delay3_DSTATE[0] = mini_car_ble_DW.Delay3_DSTATE[1];
    mini_car_ble_DW.Delay3_DSTATE[1] = mini_car_ble_U.rx_set_speed;

    /* Update for UnitDelay: '<S2>/Unit Delay9' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.UnitDelay9_DSTATE = mini_car_ble_U.rx_set_speed;

    /* Update for Delay: '<S2>/Delay' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.Delay_DSTATE[0] = mini_car_ble_DW.Delay_DSTATE[1];
    mini_car_ble_DW.Delay_DSTATE[1] = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay8' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay8_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for Delay: '<S2>/Delay1' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.Delay1_DSTATE[0] = mini_car_ble_DW.Delay1_DSTATE[1];
    mini_car_ble_DW.Delay1_DSTATE[1] = mini_car_ble_U.rx_set_speed;

    /* Update for UnitDelay: '<S2>/Unit Delay7' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.UnitDelay7_DSTATE = mini_car_ble_U.rx_set_speed;

    /* Update for Delay: '<S2>/Delay6' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.Delay6_DSTATE[0] = mini_car_ble_DW.Delay6_DSTATE[1];
    mini_car_ble_DW.Delay6_DSTATE[1] = mini_car_ble_U.rx_directionStatus;

    /* Update for UnitDelay: '<S2>/Unit Delay12' incorporates:
     *  Inport: '<Root>/rx_directionStatus'
     */
    mini_car_ble_DW.UnitDelay12_DSTATE = mini_car_ble_U.rx_directionStatus;

    /* Update for Delay: '<S2>/Delay7' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.Delay7_DSTATE[0] = mini_car_ble_DW.Delay7_DSTATE[1];
    mini_car_ble_DW.Delay7_DSTATE[1] = mini_car_ble_U.rx_set_speed;

    /* Update for UnitDelay: '<S2>/Unit Delay11' incorporates:
     *  Inport: '<Root>/rx_set_speed'
     */
    mini_car_ble_DW.UnitDelay11_DSTATE = mini_car_ble_U.rx_set_speed;
  }

  /* End of Logic: '<S4>/OR' */
  /* End of Outputs for SubSystem: '<S1>/ChangeDirection' */

  /* Gain: '<S5>/Multiply' */
  rtb_Multiply = 2.0 * mini_car_ble_B.Merge;

  /* If: '<S5>/If' incorporates:
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  Constant: '<S74>/Constant'
   *  Inport: '<Root>/rx_set_speed'
   *  Logic: '<S5>/OR'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   *  RelationalOperator: '<S74>/Compare'
   *  UnitDelay: '<S2>/Unit Delay3'
   */
  if ((mini_car_ble_U.rx_set_speed == 4) || (mini_car_ble_DW.UnitDelay3_DSTATE ==
       0)) {
    /* Outputs for IfAction SubSystem: '<S5>/Stop' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    /* Gain: '<S78>/Gain' incorporates:
     *  Constant: '<S79>/Constant'
     *  Merge: '<S5>/Merge1'
     *  SignalConversion generated from: '<S79>/LMotor'
     */
    mini_car_ble_B.Merge1 = 0.0;

    /* Merge: '<S5>/Merge' incorporates:
     *  Constant: '<S79>/Constant'
     *  SignalConversion generated from: '<S79>/RMotor'
     */
    mini_car_ble_B.Merge_c = 0.0;

    /* Merge: '<S5>/Merge2' incorporates:
     *  Constant: '<S79>/Constant1'
     *  SignalConversion generated from: '<S79>/IN1_RMotor'
     */
    mini_car_ble_B.Merge2 = 0.0;

    /* Merge: '<S5>/Merge4' incorporates:
     *  Constant: '<S79>/Constant1'
     *  SignalConversion generated from: '<S79>/IN3_LMotor'
     */
    mini_car_ble_B.Merge4 = 0.0;

    /* Merge: '<S5>/Merge3' incorporates:
     *  Constant: '<S79>/Constant2'
     *  SignalConversion generated from: '<S79>/IN2_RMotor'
     */
    mini_car_ble_B.Merge3 = 0.0;

    /* Merge: '<S5>/Merge5' incorporates:
     *  Constant: '<S79>/Constant2'
     *  SignalConversion generated from: '<S79>/IN4_LMotor'
     */
    mini_car_ble_B.Merge5 = 0.0;

    /* End of Outputs for SubSystem: '<S5>/Stop' */
  } else if (mini_car_ble_DW.UnitDelay3_DSTATE == 1) {
    /* Outputs for IfAction SubSystem: '<S5>/Frente' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    /* Gain: '<S78>/Gain' incorporates:
     *  Merge: '<S5>/Merge1'
     *  SignalConversion generated from: '<S77>/In1'
     *  SignalConversion generated from: '<S77>/LMotor'
     */
    mini_car_ble_B.Merge1 = rtb_Multiply;

    /* Merge: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S77>/In1'
     *  SignalConversion generated from: '<S77>/RMotor'
     */
    mini_car_ble_B.Merge_c = rtb_Multiply;

    /* Merge: '<S5>/Merge2' incorporates:
     *  Constant: '<S77>/Constant'
     *  SignalConversion generated from: '<S77>/IN1_RMotor'
     */
    mini_car_ble_B.Merge2 = 1.0;

    /* Merge: '<S5>/Merge4' incorporates:
     *  Constant: '<S77>/Constant'
     *  SignalConversion generated from: '<S77>/IN3_LMotor'
     */
    mini_car_ble_B.Merge4 = 1.0;

    /* Merge: '<S5>/Merge3' incorporates:
     *  Constant: '<S77>/Constant1'
     *  SignalConversion generated from: '<S77>/IN2_RMotor'
     */
    mini_car_ble_B.Merge3 = 0.0;

    /* Merge: '<S5>/Merge5' incorporates:
     *  Constant: '<S77>/Constant1'
     *  SignalConversion generated from: '<S77>/IN4_LMotor'
     */
    mini_car_ble_B.Merge5 = 0.0;

    /* End of Outputs for SubSystem: '<S5>/Frente' */
  } else if (mini_car_ble_DW.UnitDelay3_DSTATE == 8) {
    /* Outputs for IfAction SubSystem: '<S5>/Direita' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    /* Gain: '<S78>/Gain' incorporates:
     *  Gain: '<S75>/Multiply'
     *  Merge: '<S5>/Merge1'
     *  SignalConversion generated from: '<S75>/In1'
     */
    mini_car_ble_B.Merge1 = 0.08 * rtb_Multiply;

    /* Merge: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S75>/In1'
     *  SignalConversion generated from: '<S75>/RMotor'
     */
    mini_car_ble_B.Merge_c = rtb_Multiply;

    /* Merge: '<S5>/Merge2' incorporates:
     *  Constant: '<S75>/Constant'
     *  SignalConversion generated from: '<S75>/IN1_RMotor'
     */
    mini_car_ble_B.Merge2 = 1.0;

    /* Merge: '<S5>/Merge4' incorporates:
     *  Constant: '<S75>/Constant'
     *  SignalConversion generated from: '<S75>/IN3_LMotor'
     */
    mini_car_ble_B.Merge4 = 1.0;

    /* Merge: '<S5>/Merge3' incorporates:
     *  Constant: '<S75>/Constant1'
     *  SignalConversion generated from: '<S75>/IN2_RMotor'
     */
    mini_car_ble_B.Merge3 = 0.0;

    /* Merge: '<S5>/Merge5' incorporates:
     *  Constant: '<S75>/Constant1'
     *  SignalConversion generated from: '<S75>/IN4_LMotor'
     */
    mini_car_ble_B.Merge5 = 0.0;

    /* End of Outputs for SubSystem: '<S5>/Direita' */
  } else if (mini_car_ble_DW.UnitDelay3_DSTATE == 2) {
    /* Outputs for IfAction SubSystem: '<S5>/Re' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    /* Gain: '<S78>/Gain' */
    mini_car_ble_B.Merge1 = 0.6 * rtb_Multiply;

    /* Merge: '<S5>/Merge' incorporates:
     *  SignalConversion generated from: '<S78>/RMotor'
     */
    mini_car_ble_B.Merge_c = mini_car_ble_B.Merge1;

    /* Merge: '<S5>/Merge2' incorporates:
     *  Constant: '<S78>/Constant'
     *  SignalConversion generated from: '<S78>/IN1_RMotor'
     */
    mini_car_ble_B.Merge2 = 0.0;

    /* Merge: '<S5>/Merge4' incorporates:
     *  Constant: '<S78>/Constant'
     *  SignalConversion generated from: '<S78>/IN3_LMotor'
     */
    mini_car_ble_B.Merge4 = 0.0;

    /* Merge: '<S5>/Merge3' incorporates:
     *  Constant: '<S78>/Constant1'
     *  SignalConversion generated from: '<S78>/IN2_RMotor'
     */
    mini_car_ble_B.Merge3 = 1.0;

    /* Merge: '<S5>/Merge5' incorporates:
     *  Constant: '<S78>/Constant1'
     *  SignalConversion generated from: '<S78>/IN4_LMotor'
     */
    mini_car_ble_B.Merge5 = 1.0;

    /* End of Outputs for SubSystem: '<S5>/Re' */
  } else if (mini_car_ble_DW.UnitDelay3_DSTATE == 4) {
    /* Outputs for IfAction SubSystem: '<S5>/Esquerda' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    /* Merge: '<S5>/Merge' incorporates:
     *  Gain: '<S76>/Gain'
     *  SignalConversion generated from: '<S76>/In1'
     */
    mini_car_ble_B.Merge_c = 0.08 * rtb_Multiply;

    /* Gain: '<S78>/Gain' incorporates:
     *  Merge: '<S5>/Merge1'
     *  SignalConversion generated from: '<S76>/In1'
     *  SignalConversion generated from: '<S76>/LMotor'
     */
    mini_car_ble_B.Merge1 = rtb_Multiply;

    /* Merge: '<S5>/Merge2' incorporates:
     *  Constant: '<S76>/Constant'
     *  SignalConversion generated from: '<S76>/IN1_RMotor'
     */
    mini_car_ble_B.Merge2 = 1.0;

    /* Merge: '<S5>/Merge4' incorporates:
     *  Constant: '<S76>/Constant'
     *  SignalConversion generated from: '<S76>/IN3_LMotor'
     */
    mini_car_ble_B.Merge4 = 1.0;

    /* Merge: '<S5>/Merge3' incorporates:
     *  Constant: '<S76>/Constant1'
     *  SignalConversion generated from: '<S76>/IN2_RMotor'
     */
    mini_car_ble_B.Merge3 = 0.0;

    /* Merge: '<S5>/Merge5' incorporates:
     *  Constant: '<S76>/Constant1'
     *  SignalConversion generated from: '<S76>/IN4_LMotor'
     */
    mini_car_ble_B.Merge5 = 0.0;

    /* End of Outputs for SubSystem: '<S5>/Esquerda' */
  }

  /* End of If: '<S5>/If' */

  /* Outport: '<Root>/Drive_RMotor' */
  mini_car_ble_Y.Drive_RMotor = mini_car_ble_B.Merge_c;

  /* Outport: '<Root>/Drive_LMotor' */
  mini_car_ble_Y.Drive_LMotor = mini_car_ble_B.Merge1;

  /* Outport: '<Root>/IN1_RMotor' */
  mini_car_ble_Y.IN1_RMotor = mini_car_ble_B.Merge2;

  /* Outport: '<Root>/IN2_RMotor' */
  mini_car_ble_Y.IN2_RMotor = mini_car_ble_B.Merge3;

  /* Outport: '<Root>/IN3_LMotor' */
  mini_car_ble_Y.IN3_LMotor = mini_car_ble_B.Merge4;

  /* Outport: '<Root>/IN4_LMotor' */
  mini_car_ble_Y.IN4_LMotor = mini_car_ble_B.Merge5;

  /* Update for UnitDelay: '<S46>/Delay Input1' incorporates:
   *  Inport: '<Root>/rx_set_speed'
   *
   * Block description for '<S46>/Delay Input1':
   *
   *  Store in Global RAM
   */
  mini_car_ble_DW.DelayInput1_DSTATE = mini_car_ble_U.rx_set_speed;

  /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
   *  Inport: '<Root>/rx_directionStatus'
   */
  mini_car_ble_DW.UnitDelay_DSTATE = mini_car_ble_U.rx_directionStatus;
}

/* Model initialize function */
void mini_car_ble_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void mini_car_ble_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
