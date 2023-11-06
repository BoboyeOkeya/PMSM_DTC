// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

#ifdef __cplusplus
}
#endif

// H files from Advanced C Function components


// Header files from additional sources (Advanced C Function)

// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines


















































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _3_ph_pmsm1_machine_wrapper1__out[2];

double _3_phase_meter_ia_ia1__out;
double _3_phase_meter_ib_ia1__out;
double _3_phase_meter_ic_ia1__out;
double _3_phase_meter_vab_va1__out;
double _3_phase_meter_van_va1__out;
double _3_phase_meter_vbc_va1__out;
double _3_phase_meter_vbn_va1__out;
double _3_phase_meter_vca_va1__out;
double _3_phase_meter_vcn_va1__out;
double _3_phase_meter_zero__out = 0.0;
double _constant1__out = 1.0;
double _flux_magnitude_angle_calculation_constant2__out = 2.0;
double _flux_magnitude_angle_calculation_constant3__out = 0.175;
double _flux_pi_controller_integrator__out;
double _svpwm_references_generator_constant1__out = 0.5;
double _svpwm_references_generator_constant2__out = 0.5;
double _svpwm_references_generator_constant3__out = 0.5;
double _speed_pi_controller_integrator__out;
double _stator_flux_reference__out = 0.175;
double _step1__out;
double _torque_pi_controller_integrator__out;
double _feedforward_disturbance__out = 59.191176470588225;
double _load_torque__out;
double _torque_ref__out;
double _torque_speed_angle__out;
double _torque_speed_angle__out1;
double _3_phase_meter_extra_output_bus__out[12];
double _3_phase_meter_output_bus__out[30];
double _pre_filter_speed__out;
double _pre_filter_speed__previous_filtered_value;
double _pre_filter_torque__out;
double _pre_filter_torque__previous_filtered_value;
double _pole_pair__out;
double _meter_split_curr_input_bus__out;
double _meter_split_curr_input_bus__out1;
double _meter_split_curr_input_bus__out2;
double _meter_split_curr_input_bus__out3;
double _meter_split_curr_input_bus__out4;
double _meter_split_curr_input_bus__out5;
double _meter_split_curr_input_bus__out6;
double _meter_split_curr_input_bus__out7;
double _meter_split_curr_input_bus__out8;
double _meter_split_curr_input_bus__out9;
double _meter_split_curr_input_bus__out10;
double _meter_split_curr_input_bus__out11;
double _meter_split_curr_input_bus__out12;
double _meter_split_curr_input_bus__out13;
double _meter_split_curr_input_bus__out14;
double _meter_split_curr_input_bus__out15;
double _meter_split_curr_input_bus__out16;
double _meter_split_curr_input_bus__out17;
double _meter_split_curr_input_bus__out18;
double _meter_split_curr_input_bus__out19;
double _meter_split_curr_input_bus__out20;
double _meter_split_curr_input_bus__out21;
double _meter_split_curr_input_bus__out22;
double _meter_split_curr_input_bus__out23;
double _meter_split_curr_input_bus__out24;
double _meter_split_curr_input_bus__out25;
double _meter_split_curr_input_bus__out26;
double _meter_split_curr_input_bus__out27;
double _meter_split_curr_input_bus__out28;
double _meter_split_curr_input_bus__out29;
double _speed_pi_controller_sum1__out;
double _iabc_to_idq_abc_to_alpha_beta__alpha;
double _iabc_to_idq_abc_to_alpha_beta__beta;
double _iabc_to_idq_abc_to_alpha_beta__gamma;
double _meter_split_curr_gain__out[12];
double _speed_pi_controller_ki_w__out;
double _speed_pi_controller_kp_w__out;
double _iabc_to_idq_alpha_beta_to_dq__d;
double _iabc_to_idq_alpha_beta_to_dq__q;
double _iabc_to_idq_alpha_beta_to_dq__k1;
double _iabc_to_idq_alpha_beta_to_dq__k2;
double _meter_split_curr_extra_input_bus__out;
double _meter_split_curr_extra_input_bus__out1;
double _meter_split_curr_extra_input_bus__out2;
double _meter_split_curr_extra_input_bus__out3;
double _meter_split_curr_extra_input_bus__out4;
double _meter_split_curr_extra_input_bus__out5;
double _meter_split_curr_extra_input_bus__out6;
double _meter_split_curr_extra_input_bus__out7;
double _meter_split_curr_extra_input_bus__out8;
double _meter_split_curr_extra_input_bus__out9;
double _meter_split_curr_extra_input_bus__out10;
double _meter_split_curr_extra_input_bus__out11;
double _speed_pi_controller_sum2__out;
double _flux_magnitude_angle_calculation_gain2__out;
double _flux_magnitude_angle_calculation_gain4__out;
double _flux_magnitude_angle_calculation_mathematical_function1__out;
double _flux_magnitude_angle_calculation_product3__out;
double _flux_magnitude_angle_calculation_sum1__out;
double _flux_magnitude_angle_calculation_mathematical_function2__out;
double _flux_magnitude_angle_calculation_product1__out;
double _flux_magnitude_angle_calculation_product2__out;
double _flux_magnitude_angle_calculation_sum3__out;
double _flux_magnitude_angle_calculation_trigonometric_function1__out;
double _flux_magnitude_angle_calculation_sum4__out;
double _flux_magnitude_angle_calculation_mathematical_function3__out;
double _voltage_vector_calculation_trigonometric_function5__out;
double _voltage_vector_calculation_trigonometric_function6__out;
double _voltage_vector_calculation_trigonometric_function7__out;
double _voltage_vector_calculation_trigonometric_function8__out;
double _flux_magnitude_angle_calculation_gain3__out;
double _flux_pi_controller_sum1__out;
double _torque_pi_controller_sum1__out;
double _flux_pi_controller_ki_l__out;
double _flux_pi_controller_kp_l__out;
double _torque_pi_controller_ki_t__out;
double _torque_pi_controller_kp_t__out;
double _flux_pi_controller_sum2__out;
double _torque_pi_controller_sum2__out;
double _sum1__out;
double _voltage_vector_calculation_product10__out;
double _voltage_vector_calculation_product8__out;
double _voltage_vector_calculation_product7__out;
double _voltage_vector_calculation_product9__out;
double _voltage_vector_calculation_sum9__out;
double _voltage_vector_calculation_sum10__out;
double _voltage_vector_calculation_dq_to_alpha_beta1__alpha;
double _voltage_vector_calculation_dq_to_alpha_beta1__beta;
double _voltage_vector_calculation_dq_to_alpha_beta1__k1;
double _voltage_vector_calculation_dq_to_alpha_beta1__k2;

double _voltage_vector_calculation_normalizer__Vs_alpha_in;
double _voltage_vector_calculation_normalizer__Vs_beta_in;


double _voltage_vector_calculation_normalizer__Vs_alpha_out;
double _voltage_vector_calculation_normalizer__Vs_beta_out;
double _svpwm_references_generator_gain4__out;
double _svpwm_references_generator_gain5__out;
double _svpwm_references_generator_svpwm__alpha;
double _svpwm_references_generator_svpwm__beta;


double _svpwm_references_generator_svpwm__ref1;
double _svpwm_references_generator_svpwm__ref2;
double _svpwm_references_generator_svpwm__ref3;
double _svpwm_references_generator_sum1__out;
double _svpwm_references_generator_sum2__out;
double _svpwm_references_generator_sum3__out;
double _svpwm_references_generator_gain6__out;
double _svpwm_references_generator_gain7__out;
double _svpwm_references_generator_gain8__out;
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__channels[1] = {0};
double _three_phase_inverter_phase_a_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_a_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__channels[1] = {1};
double _three_phase_inverter_phase_b_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_b_pwm_modulator__sig_dir[1];

X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__channels[1] = {2};
double _three_phase_inverter_phase_c_pwm_modulator__limited_in[1];
X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__update_mask;
X_UnInt32 _three_phase_inverter_phase_c_pwm_modulator__sig_dir[1];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _3_ph_pmsm1_machine_wrapper1__model_load;
double _adc_sampler11_output__out =  0.0;
double _flux_pi_controller_integrator__state;
double _speed_pi_controller_integrator__state;
double _step1__state;
double _torque_pi_controller_integrator__state;
double _rate_transition_output__out =  0.0;
double _pre_filter_speed__filtered_value;
double _pre_filter_speed__previous_in;
double _pre_filter_torque__filtered_value;
double _pre_filter_torque__previous_in;
double _voltage_vector_calculation_normalizer__V_mag;
double _svpwm_references_generator_svpwm__Sk;
double _svpwm_references_generator_svpwm__Sk_next;
double _svpwm_references_generator_svpwm__Ck;
double _svpwm_references_generator_svpwm__Ck_next;
double _svpwm_references_generator_svpwm__long;
double _svpwm_references_generator_svpwm__middle;
double _svpwm_references_generator_svpwm__short;
double _svpwm_references_generator_svpwm__tmp;
double _svpwm_references_generator_svpwm__Tk;
double _svpwm_references_generator_svpwm__Tk_next;
double _svpwm_references_generator_svpwm__T0;
X_Int32 _svpwm_references_generator_svpwm__sector;
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif







// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _3_ph_pmsm1_machine_wrapper1__model_load = 0.0;
    _adc_sampler11_output__out =  0.0;
    _flux_pi_controller_integrator__state = 0.0;
    _speed_pi_controller_integrator__state = 0.0;
    _step1__state = 0x0;
    _torque_pi_controller_integrator__state = 0.0;
    _rate_transition_output__out =  0.0;
    HIL_OutAO(0x400b, 0.0f);
    _pre_filter_speed__filtered_value = 0x0;
    _pre_filter_speed__previous_in = 0x0;
    _pre_filter_torque__filtered_value = 0x0;
    _pre_filter_torque__previous_in = 0x0;
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    _svpwm_references_generator_svpwm__sector = 0;
    _svpwm_references_generator_svpwm__Sk = 0.0;
    _svpwm_references_generator_svpwm__Sk_next = 0.0;
    _svpwm_references_generator_svpwm__Ck = 0.0;
    _svpwm_references_generator_svpwm__Ck_next = 0.0;
    _three_phase_inverter_phase_a_pwm_modulator__update_mask = 1;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_a_pwm_modulator__update_mask);
    HIL_OutAO(0x4004, 0.0f);
    _three_phase_inverter_phase_b_pwm_modulator__update_mask = 2;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_b_pwm_modulator__update_mask);
    HIL_OutAO(0x4005, 0.0f);
    _three_phase_inverter_phase_c_pwm_modulator__update_mask = 4;
    HIL_OutInt32(0x2000080 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 4000);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 400);
    HIL_OutInt32(0x20001c0 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_c_pwm_modulator__update_mask);
    HIL_OutAO(0x4006, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}              // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: 3-phase Meter.zero
    // Generated from the component: Constant1
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Constant2
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Constant3
    // Generated from the component: SVPWM References Generator.Constant1
    // Generated from the component: SVPWM References Generator.Constant2
    // Generated from the component: SVPWM References Generator.Constant3
    // Generated from the component: Stator Flux Reference
    // Generated from the component: feedforward_disturbance
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: 3 ph PMSM1.Machine Wrapper1
    HIL_OutFloat((0x800000 + 0x40000 * 0x0 + 0x18),  _3_ph_pmsm1_machine_wrapper1__model_load);
    _3_ph_pmsm1_machine_wrapper1__out[0] = HIL_InFloat(0xc80000 + 32778);
    _3_ph_pmsm1_machine_wrapper1__out[1] = HIL_InFloat(0xc80000 + 32779);
    // Generated from the component: 3-phase Meter.IA.Ia1
    _3_phase_meter_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: 3-phase Meter.IB.Ia1
    _3_phase_meter_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: 3-phase Meter.IC.Ia1
    _3_phase_meter_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: 3-phase Meter.VAB.Va1
    _3_phase_meter_vab_va1__out = (HIL_InFloat(0xc80000 + 0x4));
    // Generated from the component: 3-phase Meter.VAn.Va1
    _3_phase_meter_van_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: 3-phase Meter.VBC.Va1
    _3_phase_meter_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: 3-phase Meter.VBn.Va1
    _3_phase_meter_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x7));
    // Generated from the component: 3-phase Meter.VCA.Va1
    _3_phase_meter_vca_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: 3-phase Meter.VCn.Va1
    _3_phase_meter_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: 3-phase Meter.zero
    // Generated from the component: Constant1
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Constant2
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Constant3
    // Generated from the component: Flux_PI_Controller.Integrator
    _flux_pi_controller_integrator__out = _flux_pi_controller_integrator__state;
    // Generated from the component: SVPWM References Generator.Constant1
    // Generated from the component: SVPWM References Generator.Constant2
    // Generated from the component: SVPWM References Generator.Constant3
    // Generated from the component: Stator Flux Reference
    // Generated from the component: Torque_PI_Controller.Integrator
    _torque_pi_controller_integrator__out = _torque_pi_controller_integrator__state;
    // Generated from the component: feedforward_disturbance
    // Generated from the component: load_torque
    _load_torque__out = XIo_InFloat(0x55000100);
    // Generated from the component: torque_ref
    _torque_ref__out = XIo_InFloat(0x55000104);
    // Generated from the component: torque_speed_angle
    _torque_speed_angle__out = _3_ph_pmsm1_machine_wrapper1__out[0];
    _torque_speed_angle__out1 = _3_ph_pmsm1_machine_wrapper1__out[1];
    // Generated from the component: 3-phase Meter.Freq
    // Generated from the component: 3-phase Meter.IA_RMS
    // Generated from the component: 3-phase Meter.IB_RMS
    // Generated from the component: 3-phase Meter.IC_RMS
    // Generated from the component: 3-phase Meter.I_RMS
    // Generated from the component: 3-phase Meter.POWER_P
    // Generated from the component: 3-phase Meter.POWER_PA
    // Generated from the component: 3-phase Meter.POWER_PB
    // Generated from the component: 3-phase Meter.POWER_PC
    // Generated from the component: 3-phase Meter.POWER_PF
    // Generated from the component: 3-phase Meter.POWER_PFA
    // Generated from the component: 3-phase Meter.POWER_PFB
    // Generated from the component: 3-phase Meter.POWER_PFC
    // Generated from the component: 3-phase Meter.POWER_Q
    // Generated from the component: 3-phase Meter.POWER_QA
    // Generated from the component: 3-phase Meter.POWER_QB
    // Generated from the component: 3-phase Meter.POWER_QC
    // Generated from the component: 3-phase Meter.POWER_S
    // Generated from the component: 3-phase Meter.POWER_SA
    // Generated from the component: 3-phase Meter.POWER_SB
    // Generated from the component: 3-phase Meter.POWER_SC
    // Generated from the component: 3-phase Meter.VAB_RMS
    // Generated from the component: 3-phase Meter.VAn_RMS
    // Generated from the component: 3-phase Meter.VBC_RMS
    // Generated from the component: 3-phase Meter.VBn_RMS
    // Generated from the component: 3-phase Meter.VCA_RMS
    // Generated from the component: 3-phase Meter.VCn_RMS
    // Generated from the component: 3-phase Meter.VLL_RMS
    // Generated from the component: 3-phase Meter.VLn_RMS
    // Generated from the component: 3-phase Meter.extra_output_bus
    _3_phase_meter_extra_output_bus__out[0] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[1] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[2] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[3] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[4] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[5] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[6] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[7] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[8] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[9] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[10] = _3_phase_meter_zero__out;
    _3_phase_meter_extra_output_bus__out[11] = _3_phase_meter_zero__out;
    // Generated from the component: 3-phase Meter.output_bus
    _3_phase_meter_output_bus__out[0] = _3_phase_meter_van_va1__out;
    _3_phase_meter_output_bus__out[1] = _3_phase_meter_vbn_va1__out;
    _3_phase_meter_output_bus__out[2] = _3_phase_meter_vcn_va1__out;
    _3_phase_meter_output_bus__out[3] = _3_phase_meter_vab_va1__out;
    _3_phase_meter_output_bus__out[4] = _3_phase_meter_vbc_va1__out;
    _3_phase_meter_output_bus__out[5] = _3_phase_meter_vca_va1__out;
    _3_phase_meter_output_bus__out[6] = _3_phase_meter_ia_ia1__out;
    _3_phase_meter_output_bus__out[7] = _3_phase_meter_ib_ia1__out;
    _3_phase_meter_output_bus__out[8] = _3_phase_meter_ic_ia1__out;
    _3_phase_meter_output_bus__out[9] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[10] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[11] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[12] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[13] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[14] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[15] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[16] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[17] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[18] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[19] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[20] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[21] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[22] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[23] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[24] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[25] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[26] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[27] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[28] = _3_phase_meter_zero__out;
    _3_phase_meter_output_bus__out[29] = _3_phase_meter_zero__out;
    // Generated from the component: Termination9
    // Generated from the component: Three Phase Inverter.Phase A.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter.Phase B.IGBT Leg global gds ovs.termination1
    // Generated from the component: Three Phase Inverter.Phase C.IGBT Leg global gds ovs.termination1
    // Generated from the component: stator flux reference
    HIL_OutAO(0x400b, (float)_stator_flux_reference__out);
    // Generated from the component: Pre_Filter_Torque
    _pre_filter_torque__previous_filtered_value = _pre_filter_torque__filtered_value;
    _pre_filter_torque__filtered_value = _pre_filter_torque__previous_in * (6.283185307179586 * 84.53402749490773 * 2e-05) + _pre_filter_torque__previous_filtered_value * (1 - 6.283185307179586 * 84.53402749490773 * 2e-05 );
    _pre_filter_torque__out = _pre_filter_torque__filtered_value;
    _pre_filter_torque__previous_in = _torque_ref__out;
    // Generated from the component: pole_pair
    _pole_pair__out = 4.0 * _torque_speed_angle__out1;
    // Generated from the component: rate_transition.Input
    _rate_transition_output__out = _torque_speed_angle__out;
    // Generated from the component: 3-phase Meter.extra_out
    // Generated from the component: Meter_Split_Curr.input_bus
    _meter_split_curr_input_bus__out = _3_phase_meter_output_bus__out[0];
    _meter_split_curr_input_bus__out1 = _3_phase_meter_output_bus__out[1];
    _meter_split_curr_input_bus__out2 = _3_phase_meter_output_bus__out[2];
    _meter_split_curr_input_bus__out3 = _3_phase_meter_output_bus__out[3];
    _meter_split_curr_input_bus__out4 = _3_phase_meter_output_bus__out[4];
    _meter_split_curr_input_bus__out5 = _3_phase_meter_output_bus__out[5];
    _meter_split_curr_input_bus__out6 = _3_phase_meter_output_bus__out[6];
    _meter_split_curr_input_bus__out7 = _3_phase_meter_output_bus__out[7];
    _meter_split_curr_input_bus__out8 = _3_phase_meter_output_bus__out[8];
    _meter_split_curr_input_bus__out9 = _3_phase_meter_output_bus__out[9];
    _meter_split_curr_input_bus__out10 = _3_phase_meter_output_bus__out[10];
    _meter_split_curr_input_bus__out11 = _3_phase_meter_output_bus__out[11];
    _meter_split_curr_input_bus__out12 = _3_phase_meter_output_bus__out[12];
    _meter_split_curr_input_bus__out13 = _3_phase_meter_output_bus__out[13];
    _meter_split_curr_input_bus__out14 = _3_phase_meter_output_bus__out[14];
    _meter_split_curr_input_bus__out15 = _3_phase_meter_output_bus__out[15];
    _meter_split_curr_input_bus__out16 = _3_phase_meter_output_bus__out[16];
    _meter_split_curr_input_bus__out17 = _3_phase_meter_output_bus__out[17];
    _meter_split_curr_input_bus__out18 = _3_phase_meter_output_bus__out[18];
    _meter_split_curr_input_bus__out19 = _3_phase_meter_output_bus__out[19];
    _meter_split_curr_input_bus__out20 = _3_phase_meter_output_bus__out[20];
    _meter_split_curr_input_bus__out21 = _3_phase_meter_output_bus__out[21];
    _meter_split_curr_input_bus__out22 = _3_phase_meter_output_bus__out[22];
    _meter_split_curr_input_bus__out23 = _3_phase_meter_output_bus__out[23];
    _meter_split_curr_input_bus__out24 = _3_phase_meter_output_bus__out[24];
    _meter_split_curr_input_bus__out25 = _3_phase_meter_output_bus__out[25];
    _meter_split_curr_input_bus__out26 = _3_phase_meter_output_bus__out[26];
    _meter_split_curr_input_bus__out27 = _3_phase_meter_output_bus__out[27];
    _meter_split_curr_input_bus__out28 = _3_phase_meter_output_bus__out[28];
    _meter_split_curr_input_bus__out29 = _3_phase_meter_output_bus__out[29];
    // Generated from the component: torque reference
    HIL_OutAO(0x400d, (float)_pre_filter_torque__out);
    // Generated from the component: Iabc to Idq.abc to alpha beta
    _iabc_to_idq_abc_to_alpha_beta__alpha = (2.0 * _meter_split_curr_input_bus__out6 - _meter_split_curr_input_bus__out7 - _meter_split_curr_input_bus__out8) * 0.3333333333333333;
    _iabc_to_idq_abc_to_alpha_beta__beta = (_meter_split_curr_input_bus__out7 - _meter_split_curr_input_bus__out8) * 0.5773502691896258;
    _iabc_to_idq_abc_to_alpha_beta__gamma = (_meter_split_curr_input_bus__out6 + _meter_split_curr_input_bus__out7 + _meter_split_curr_input_bus__out8) * 0.3333333333333333;
    // Generated from the component: Meter_Split_Curr.Freq
    // Generated from the component: Meter_Split_Curr.IA_RMS
    // Generated from the component: Meter_Split_Curr.IB_RMS
    // Generated from the component: Meter_Split_Curr.IC_RMS
    // Generated from the component: Meter_Split_Curr.IN
    // Generated from the component: Meter_Split_Curr.IN_RMS
    // Generated from the component: Meter_Split_Curr.I_RMS
    // Generated from the component: Meter_Split_Curr.POWER_P
    // Generated from the component: Meter_Split_Curr.POWER_PF
    // Generated from the component: Meter_Split_Curr.POWER_Q
    // Generated from the component: Meter_Split_Curr.POWER_S
    // Generated from the component: Meter_Split_Curr.VAB
    // Generated from the component: Meter_Split_Curr.VAB_RMS
    // Generated from the component: Meter_Split_Curr.VAn
    // Generated from the component: Meter_Split_Curr.VAn_RMS
    // Generated from the component: Meter_Split_Curr.VBC
    // Generated from the component: Meter_Split_Curr.VBC_RMS
    // Generated from the component: Meter_Split_Curr.VBn
    // Generated from the component: Meter_Split_Curr.VBn_RMS
    // Generated from the component: Meter_Split_Curr.VCA
    // Generated from the component: Meter_Split_Curr.VCA_RMS
    // Generated from the component: Meter_Split_Curr.VCn
    // Generated from the component: Meter_Split_Curr.VCn_RMS
    // Generated from the component: Meter_Split_Curr.VLL_RMS
    // Generated from the component: Meter_Split_Curr.VLn_RMS
    // Generated from the component: Meter_Split_Curr.VN
    // Generated from the component: Meter_Split_Curr.Vn_RMS
    // Generated from the component: Meter_Split_Curr.gain
    _meter_split_curr_gain__out[0] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[1] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[2] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[3] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[4] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[5] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[6] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[7] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[8] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[9] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[10] = 0.0 * _meter_split_curr_input_bus__out29;
    _meter_split_curr_gain__out[11] = 0.0 * _meter_split_curr_input_bus__out29;
    // Generated from the component: Iabc to Idq.alpha beta to dq
    _iabc_to_idq_alpha_beta_to_dq__k1 = cos(_pole_pair__out);
    _iabc_to_idq_alpha_beta_to_dq__k2 = sin(_pole_pair__out);
    _iabc_to_idq_alpha_beta_to_dq__d = _iabc_to_idq_alpha_beta_to_dq__k2 * _iabc_to_idq_abc_to_alpha_beta__alpha - _iabc_to_idq_alpha_beta_to_dq__k1 * _iabc_to_idq_abc_to_alpha_beta__beta;
    _iabc_to_idq_alpha_beta_to_dq__q = _iabc_to_idq_alpha_beta_to_dq__k1 * _iabc_to_idq_abc_to_alpha_beta__alpha + _iabc_to_idq_alpha_beta_to_dq__k2 * _iabc_to_idq_abc_to_alpha_beta__beta;
    // Generated from the component: Termination5
    // Generated from the component: Meter_Split_Curr.extra_input_bus
    _meter_split_curr_extra_input_bus__out = _meter_split_curr_gain__out[0];
    _meter_split_curr_extra_input_bus__out1 = _meter_split_curr_gain__out[1];
    _meter_split_curr_extra_input_bus__out2 = _meter_split_curr_gain__out[2];
    _meter_split_curr_extra_input_bus__out3 = _meter_split_curr_gain__out[3];
    _meter_split_curr_extra_input_bus__out4 = _meter_split_curr_gain__out[4];
    _meter_split_curr_extra_input_bus__out5 = _meter_split_curr_gain__out[5];
    _meter_split_curr_extra_input_bus__out6 = _meter_split_curr_gain__out[6];
    _meter_split_curr_extra_input_bus__out7 = _meter_split_curr_gain__out[7];
    _meter_split_curr_extra_input_bus__out8 = _meter_split_curr_gain__out[8];
    _meter_split_curr_extra_input_bus__out9 = _meter_split_curr_gain__out[9];
    _meter_split_curr_extra_input_bus__out10 = _meter_split_curr_gain__out[10];
    _meter_split_curr_extra_input_bus__out11 = _meter_split_curr_gain__out[11];
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Gain2
    _flux_magnitude_angle_calculation_gain2__out = 0.0085 * _iabc_to_idq_alpha_beta_to_dq__q;
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Gain4
    _flux_magnitude_angle_calculation_gain4__out = 0.0085 * _iabc_to_idq_alpha_beta_to_dq__d;
    // Generated from the component: Id
    HIL_OutAO(0x4002, (float)_iabc_to_idq_alpha_beta_to_dq__d);
    // Generated from the component: Iq
    HIL_OutAO(0x4003, (float)_iabc_to_idq_alpha_beta_to_dq__q);
    // Generated from the component: Meter_Split_Curr.POWER_PA
    // Generated from the component: Meter_Split_Curr.POWER_PB
    // Generated from the component: Meter_Split_Curr.POWER_PC
    // Generated from the component: Meter_Split_Curr.POWER_PFA
    // Generated from the component: Meter_Split_Curr.POWER_PFB
    // Generated from the component: Meter_Split_Curr.POWER_PFC
    // Generated from the component: Meter_Split_Curr.POWER_QA
    // Generated from the component: Meter_Split_Curr.POWER_QB
    // Generated from the component: Meter_Split_Curr.POWER_QC
    // Generated from the component: Meter_Split_Curr.POWER_SA
    // Generated from the component: Meter_Split_Curr.POWER_SB
    // Generated from the component: Meter_Split_Curr.POWER_SC
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Mathematical function1
    _flux_magnitude_angle_calculation_mathematical_function1__out = pow(_flux_magnitude_angle_calculation_gain2__out, _flux_magnitude_angle_calculation_constant2__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Product3
    _flux_magnitude_angle_calculation_product3__out = (_flux_magnitude_angle_calculation_gain2__out * _iabc_to_idq_alpha_beta_to_dq__d);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.lambda_q
    HIL_OutAO(0x4001, (float)_flux_magnitude_angle_calculation_gain2__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Sum1
    _flux_magnitude_angle_calculation_sum1__out = _flux_magnitude_angle_calculation_gain4__out + _flux_magnitude_angle_calculation_constant3__out;
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Mathematical function2
    _flux_magnitude_angle_calculation_mathematical_function2__out = pow(_flux_magnitude_angle_calculation_sum1__out, _flux_magnitude_angle_calculation_constant2__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Product1
    _flux_magnitude_angle_calculation_product1__out = (_flux_magnitude_angle_calculation_gain2__out) * 1.0 / (_flux_magnitude_angle_calculation_sum1__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Product2
    _flux_magnitude_angle_calculation_product2__out = (_flux_magnitude_angle_calculation_sum1__out * _iabc_to_idq_alpha_beta_to_dq__q);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.lambda_d
    HIL_OutAO(0x4000, (float)_flux_magnitude_angle_calculation_sum1__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Sum3
    _flux_magnitude_angle_calculation_sum3__out = _flux_magnitude_angle_calculation_mathematical_function2__out + _flux_magnitude_angle_calculation_mathematical_function1__out;
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Trigonometric function1
    _flux_magnitude_angle_calculation_trigonometric_function1__out = atan(_flux_magnitude_angle_calculation_product1__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Sum4
    _flux_magnitude_angle_calculation_sum4__out = _flux_magnitude_angle_calculation_product2__out - _flux_magnitude_angle_calculation_product3__out;
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Mathematical function3
    _flux_magnitude_angle_calculation_mathematical_function3__out = sqrt(_flux_magnitude_angle_calculation_sum3__out);
    // Generated from the component: Voltage_Vector_Calculation.Trigonometric function5
    _voltage_vector_calculation_trigonometric_function5__out = cos(_flux_magnitude_angle_calculation_trigonometric_function1__out);
    // Generated from the component: Voltage_Vector_Calculation.Trigonometric function6
    _voltage_vector_calculation_trigonometric_function6__out = sin(_flux_magnitude_angle_calculation_trigonometric_function1__out);
    // Generated from the component: Voltage_Vector_Calculation.Trigonometric function7
    _voltage_vector_calculation_trigonometric_function7__out = sin(_flux_magnitude_angle_calculation_trigonometric_function1__out);
    // Generated from the component: Voltage_Vector_Calculation.Trigonometric function8
    _voltage_vector_calculation_trigonometric_function8__out = cos(_flux_magnitude_angle_calculation_trigonometric_function1__out);
    // Generated from the component: Flux_Magnitude_Angle_Calculation.Gain3
    _flux_magnitude_angle_calculation_gain3__out = 6.0 * _flux_magnitude_angle_calculation_sum4__out;
    // Generated from the component: Flux_PI_Controller.Sum1
    _flux_pi_controller_sum1__out = _stator_flux_reference__out - _flux_magnitude_angle_calculation_mathematical_function3__out;
    // Generated from the component: stator flux amplitude
    HIL_OutAO(0x400a, (float)_flux_magnitude_angle_calculation_mathematical_function3__out);
    // Generated from the component: Torque_PI_Controller.Sum1
    _torque_pi_controller_sum1__out = _pre_filter_torque__out - _flux_magnitude_angle_calculation_gain3__out;
    // Generated from the component: torque estimate
    HIL_OutAO(0x400c, (float)_flux_magnitude_angle_calculation_gain3__out);
    // Generated from the component: Flux_PI_Controller.Ki_l
    _flux_pi_controller_ki_l__out = 1849599.9999999998 * _flux_pi_controller_sum1__out;
    // Generated from the component: Flux_PI_Controller.Kp_l
    _flux_pi_controller_kp_l__out = 2381.764705882353 * _flux_pi_controller_sum1__out;
    // Generated from the component: Torque_PI_Controller.Ki_t
    _torque_pi_controller_ki_t__out = 7059.142857142859 * _torque_pi_controller_sum1__out;
    // Generated from the component: Torque_PI_Controller.Kp_t
    _torque_pi_controller_kp_t__out = 13.290476190476193 * _torque_pi_controller_sum1__out;
    // Generated from the component: Flux_PI_Controller.Sum2
    _flux_pi_controller_sum2__out = _flux_pi_controller_kp_l__out + _flux_pi_controller_integrator__out;
    // Generated from the component: Torque_PI_Controller.Sum2
    _torque_pi_controller_sum2__out = _torque_pi_controller_kp_t__out + _torque_pi_controller_integrator__out;
    // Generated from the component: Sum1
    _sum1__out = _flux_pi_controller_sum2__out + _feedforward_disturbance__out;
    // Generated from the component: Voltage_Vector_Calculation.Product10
    _voltage_vector_calculation_product10__out = (_voltage_vector_calculation_trigonometric_function8__out * _torque_pi_controller_sum2__out);
    // Generated from the component: Voltage_Vector_Calculation.Product8
    _voltage_vector_calculation_product8__out = (_voltage_vector_calculation_trigonometric_function6__out * _torque_pi_controller_sum2__out);
    // Generated from the component: Voltage_Vector_Calculation.Product7
    _voltage_vector_calculation_product7__out = (_voltage_vector_calculation_trigonometric_function5__out * _sum1__out);
    // Generated from the component: Voltage_Vector_Calculation.Product9
    _voltage_vector_calculation_product9__out = (_voltage_vector_calculation_trigonometric_function7__out * _sum1__out);
    // Generated from the component: Voltage_Vector_Calculation.Sum9
    _voltage_vector_calculation_sum9__out = _voltage_vector_calculation_product7__out - _voltage_vector_calculation_product8__out;
    // Generated from the component: Voltage_Vector_Calculation.Sum10
    _voltage_vector_calculation_sum10__out = _voltage_vector_calculation_product9__out + _voltage_vector_calculation_product10__out;
    // Generated from the component: Voltage_Vector_Calculation.dq to alpha beta1
    _voltage_vector_calculation_dq_to_alpha_beta1__k1 = cos(_pole_pair__out);
    _voltage_vector_calculation_dq_to_alpha_beta1__k2 = sin(_pole_pair__out);
    _voltage_vector_calculation_dq_to_alpha_beta1__alpha = _voltage_vector_calculation_dq_to_alpha_beta1__k2 * _voltage_vector_calculation_sum9__out + _voltage_vector_calculation_dq_to_alpha_beta1__k1 * _voltage_vector_calculation_sum10__out;
    _voltage_vector_calculation_dq_to_alpha_beta1__beta = _voltage_vector_calculation_dq_to_alpha_beta1__k2 * _voltage_vector_calculation_sum10__out - _voltage_vector_calculation_dq_to_alpha_beta1__k1 * _voltage_vector_calculation_sum9__out;
    // Generated from the component: Voltage_Vector_Calculation.normalizer
    _voltage_vector_calculation_normalizer__Vs_alpha_in = _voltage_vector_calculation_dq_to_alpha_beta1__alpha;
    _voltage_vector_calculation_normalizer__Vs_beta_in = _voltage_vector_calculation_dq_to_alpha_beta1__beta;
    _voltage_vector_calculation_normalizer__V_mag = sqrtf((_voltage_vector_calculation_normalizer__Vs_alpha_in * _voltage_vector_calculation_normalizer__Vs_alpha_in) + (_voltage_vector_calculation_normalizer__Vs_beta_in * _voltage_vector_calculation_normalizer__Vs_beta_in));
    if (_voltage_vector_calculation_normalizer__V_mag > 1) {
        _voltage_vector_calculation_normalizer__Vs_alpha_out = _voltage_vector_calculation_normalizer__Vs_alpha_in / _voltage_vector_calculation_normalizer__V_mag;
        _voltage_vector_calculation_normalizer__Vs_beta_out = _voltage_vector_calculation_normalizer__Vs_beta_in / _voltage_vector_calculation_normalizer__V_mag;
    }
    else {
        _voltage_vector_calculation_normalizer__Vs_alpha_out = _voltage_vector_calculation_normalizer__Vs_alpha_in;
        _voltage_vector_calculation_normalizer__Vs_beta_out = _voltage_vector_calculation_normalizer__Vs_beta_in;
    }
    // Generated from the component: SVPWM References Generator.Gain4
    _svpwm_references_generator_gain4__out = 0.5773502691896258 * _voltage_vector_calculation_normalizer__Vs_alpha_out;
    // Generated from the component: SVPWM References Generator.Gain5
    _svpwm_references_generator_gain5__out = 0.5773502691896258 * _voltage_vector_calculation_normalizer__Vs_beta_out;
    // Generated from the component: Vs_alpha_ref
    HIL_OutAO(0x4007, (float)_voltage_vector_calculation_normalizer__Vs_alpha_out);
    // Generated from the component: Vs_beta_ref
    HIL_OutAO(0x4008, (float)_voltage_vector_calculation_normalizer__Vs_beta_out);
    // Generated from the component: SVPWM References Generator.SVPWM
    _svpwm_references_generator_svpwm__alpha = _svpwm_references_generator_gain4__out;
    _svpwm_references_generator_svpwm__beta = _svpwm_references_generator_gain5__out;
    if (_svpwm_references_generator_svpwm__beta >= 0.0) {
        if (1 / sqrt(3)*_svpwm_references_generator_svpwm__beta > fabs(_svpwm_references_generator_svpwm__alpha))_svpwm_references_generator_svpwm__sector = 2;
        else if (_svpwm_references_generator_svpwm__alpha >= 0.0)_svpwm_references_generator_svpwm__sector = 1;
        else _svpwm_references_generator_svpwm__sector = 3;
    }
    else {
        if (-1 / sqrt(3)*_svpwm_references_generator_svpwm__beta > fabs(_svpwm_references_generator_svpwm__alpha))_svpwm_references_generator_svpwm__sector = 5;
        else if (_svpwm_references_generator_svpwm__alpha >= 0.0)_svpwm_references_generator_svpwm__sector = 6;
        else _svpwm_references_generator_svpwm__sector = 4;
    }
    switch (_svpwm_references_generator_svpwm__sector) {
    case 1:
        _svpwm_references_generator_svpwm__Sk = 1.5;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = -0.866;
        _svpwm_references_generator_svpwm__Ck_next = 1.732;
        break ;
    case 2:
        _svpwm_references_generator_svpwm__Sk = 1.5;
        _svpwm_references_generator_svpwm__Sk_next = -1.5;
        _svpwm_references_generator_svpwm__Ck = 0.866;
        _svpwm_references_generator_svpwm__Ck_next = 0.866;
        break ;
    case 3:
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = -1.5;
        _svpwm_references_generator_svpwm__Ck = 1.732;
        _svpwm_references_generator_svpwm__Ck_next = -0.866;
        break ;
    case 4:
        _svpwm_references_generator_svpwm__Sk = -1.5;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = 0.866;
        _svpwm_references_generator_svpwm__Ck_next = -1.732;
        break ;
    case 5:
        _svpwm_references_generator_svpwm__Sk = -1.5;
        _svpwm_references_generator_svpwm__Sk_next = 1.5;
        _svpwm_references_generator_svpwm__Ck = -0.866;
        _svpwm_references_generator_svpwm__Ck_next = -0.866;
        break ;
    case 6:
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = 1.5;
        _svpwm_references_generator_svpwm__Ck = -1.732;
        _svpwm_references_generator_svpwm__Ck_next = 0.866;
        break ;
    default :
        _svpwm_references_generator_svpwm__Sk = 0.0;
        _svpwm_references_generator_svpwm__Sk_next = 0.0;
        _svpwm_references_generator_svpwm__Ck = 0.0;
        _svpwm_references_generator_svpwm__Ck_next = 0.0;
    }
    _svpwm_references_generator_svpwm__Tk = 10000.0 * (_svpwm_references_generator_svpwm__Sk * _svpwm_references_generator_svpwm__alpha + _svpwm_references_generator_svpwm__Ck * _svpwm_references_generator_svpwm__beta);
    _svpwm_references_generator_svpwm__Tk_next = 10000.0 * (_svpwm_references_generator_svpwm__Sk_next * _svpwm_references_generator_svpwm__alpha + _svpwm_references_generator_svpwm__Ck_next * _svpwm_references_generator_svpwm__beta);
    _svpwm_references_generator_svpwm__T0 = 10000.0 - _svpwm_references_generator_svpwm__Tk - _svpwm_references_generator_svpwm__Tk_next;
    if (!(_svpwm_references_generator_svpwm__sector & 0x0001)) {
        _svpwm_references_generator_svpwm__tmp = _svpwm_references_generator_svpwm__Tk;
        _svpwm_references_generator_svpwm__Tk = _svpwm_references_generator_svpwm__Tk_next;
        _svpwm_references_generator_svpwm__Tk_next = _svpwm_references_generator_svpwm__tmp;
    }
    if (_svpwm_references_generator_svpwm__T0 < 0.0) {
        _svpwm_references_generator_svpwm__Tk = 10000.0 * _svpwm_references_generator_svpwm__Tk / (_svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next);
        _svpwm_references_generator_svpwm__Tk_next = 10000.0 * _svpwm_references_generator_svpwm__Tk_next / (_svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next);
        _svpwm_references_generator_svpwm__T0 = 0.0;
    }
    _svpwm_references_generator_svpwm__long = (_svpwm_references_generator_svpwm__T0 / 2 + _svpwm_references_generator_svpwm__Tk + _svpwm_references_generator_svpwm__Tk_next) / 10000.0;
    _svpwm_references_generator_svpwm__middle = (_svpwm_references_generator_svpwm__T0 / 2 + _svpwm_references_generator_svpwm__Tk_next) / 10000.0;
    _svpwm_references_generator_svpwm__short = (_svpwm_references_generator_svpwm__T0 / 2) / 10000.0;
    switch (_svpwm_references_generator_svpwm__sector) {
    case 1:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__short;
        break ;
    case 2:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__short;
        break ;
    case 3:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__middle;
        break ;
    case 4:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__long;
        break ;
    case 5:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__middle;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__long;
        break ;
    case 6:
        _svpwm_references_generator_svpwm__ref1 = _svpwm_references_generator_svpwm__long;
        _svpwm_references_generator_svpwm__ref2 = _svpwm_references_generator_svpwm__short;
        _svpwm_references_generator_svpwm__ref3 = _svpwm_references_generator_svpwm__middle;
        break ;
    default :
        _svpwm_references_generator_svpwm__ref1 = 0.0;
        _svpwm_references_generator_svpwm__ref2 = 0.0;
        _svpwm_references_generator_svpwm__ref3 = 0.0;
    }
    // Generated from the component: SVPWM References Generator.Sum1
    _svpwm_references_generator_sum1__out = _svpwm_references_generator_svpwm__ref1 - _svpwm_references_generator_constant1__out;
    // Generated from the component: SVPWM References Generator.Sum2
    _svpwm_references_generator_sum2__out = _svpwm_references_generator_svpwm__ref2 - _svpwm_references_generator_constant2__out;
    // Generated from the component: SVPWM References Generator.Sum3
    _svpwm_references_generator_sum3__out = _svpwm_references_generator_svpwm__ref3 - _svpwm_references_generator_constant3__out;
    // Generated from the component: SVPWM References Generator.Gain6
    _svpwm_references_generator_gain6__out = 2.0 * _svpwm_references_generator_sum1__out;
    // Generated from the component: SVPWM References Generator.Gain7
    _svpwm_references_generator_gain7__out = 2.0 * _svpwm_references_generator_sum2__out;
    // Generated from the component: SVPWM References Generator.Gain8
    _svpwm_references_generator_gain8__out = 2.0 * _svpwm_references_generator_sum3__out;
    // Generated from the component: Three Phase Inverter.Phase A.PWM_Modulator
    _three_phase_inverter_phase_a_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain6__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_a_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_a_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_a_pwm_modulator__update_mask);
    // Generated from the component: Va_ref
    HIL_OutAO(0x4004, (float)_svpwm_references_generator_gain6__out);
    // Generated from the component: Three Phase Inverter.Phase B.PWM_Modulator
    _three_phase_inverter_phase_b_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain7__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_b_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_b_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_b_pwm_modulator__update_mask);
    // Generated from the component: Vb_ref
    HIL_OutAO(0x4005, (float)_svpwm_references_generator_gain7__out);
    // Generated from the component: Three Phase Inverter.Phase C.PWM_Modulator
    _three_phase_inverter_phase_c_pwm_modulator__limited_in[0] = MIN(MAX(_svpwm_references_generator_gain8__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], ((unsigned)((_three_phase_inverter_phase_c_pwm_modulator__limited_in[0] - (-1.0)) * 2000.0)));
    if (_constant1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _three_phase_inverter_phase_c_pwm_modulator__channels[0], 0x1);
    }
    HIL_OutInt32(0x2000140, _three_phase_inverter_phase_c_pwm_modulator__update_mask);
    // Generated from the component: Vc_ref
    HIL_OutAO(0x4006, (float)_svpwm_references_generator_gain8__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: 3 ph PMSM1.Machine Wrapper1
    _3_ph_pmsm1_machine_wrapper1__model_load = _load_torque__out;
    // Generated from the component: Flux_PI_Controller.Integrator
    _flux_pi_controller_integrator__state += _flux_pi_controller_ki_l__out * 2e-05;
    // Generated from the component: Torque_PI_Controller.Integrator
    _torque_pi_controller_integrator__state += _torque_pi_controller_ki_t__out * 2e-05;
    // Generated from the component: Voltage_Vector_Calculation.normalizer
    // Generated from the component: SVPWM References Generator.SVPWM
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Speed_PI_Controller.Integrator
    _speed_pi_controller_integrator__out = _speed_pi_controller_integrator__state;
    // Generated from the component: Step1
    if (_step1__state < 0.5) {
        _step1__out = 200.0;
    } else {
        _step1__out = 50.0;
    }
    // Generated from the component: Pre_Filter_Speed
    _pre_filter_speed__previous_filtered_value = _pre_filter_speed__filtered_value;
    _pre_filter_speed__filtered_value = _pre_filter_speed__previous_in * (6.283185307179586 * 5.968310365946075 * 6e-05) + _pre_filter_speed__previous_filtered_value * (1 - 6.283185307179586 * 5.968310365946075 * 6e-05 );
    _pre_filter_speed__out = _pre_filter_speed__filtered_value;
    _pre_filter_speed__previous_in = _step1__out;
    // Generated from the component: Speed_PI_Controller.Sum1
    _speed_pi_controller_sum1__out = _pre_filter_speed__out - _rate_transition_output__out;
    // Generated from the component: speed reference
    HIL_OutAO(0x4009, (float)_pre_filter_speed__out);
    // Generated from the component: Speed_PI_Controller.Ki_w
    _speed_pi_controller_ki_w__out = 5.057787266766504 * _speed_pi_controller_sum1__out;
    // Generated from the component: Speed_PI_Controller.Kp_w
    _speed_pi_controller_kp_w__out = 0.13487432711377345 * _speed_pi_controller_sum1__out;
    // Generated from the component: Speed_PI_Controller.Sum2
    _speed_pi_controller_sum2__out = _speed_pi_controller_kp_w__out + _speed_pi_controller_integrator__out;
    // Generated from the component: ADC_Sampler11.Input
    _adc_sampler11_output__out = _speed_pi_controller_sum2__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Speed_PI_Controller.Integrator
    _speed_pi_controller_integrator__state += _speed_pi_controller_ki_w__out * 6e-05;
    // Generated from the component: Step1
    if (_step1__state <= 0.5)
        _step1__state += 6e-05;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------