#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_7718808222430479447);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_1034114423937537934);
void car_H_mod_fun(double *state, double *out_7225960904852606817);
void car_f_fun(double *state, double dt, double *out_5925834804962007644);
void car_F_fun(double *state, double dt, double *out_1594563891292900416);
void car_h_25(double *state, double *unused, double *out_4446559038823907444);
void car_H_25(double *state, double *unused, double *out_2291888026643029333);
void car_h_24(double *state, double *unused, double *out_5489680431960231161);
void car_H_24(double *state, double *unused, double *out_1895242722289169838);
void car_h_30(double *state, double *unused, double *out_8308242515252409096);
void car_H_30(double *state, double *unused, double *out_9208578368134646088);
void car_h_26(double *state, double *unused, double *out_2392611761518546760);
void car_H_26(double *state, double *unused, double *out_1449615292231026891);
void car_h_27(double *state, double *unused, double *out_5428643132159205556);
void car_H_27(double *state, double *unused, double *out_7033815056334221177);
void car_h_29(double *state, double *unused, double *out_5703837194443711445);
void car_H_29(double *state, double *unused, double *out_5320452329464670144);
void car_h_28(double *state, double *unused, double *out_6908571236733552516);
void car_H_28(double *state, double *unused, double *out_238053312395139570);
void car_h_31(double *state, double *unused, double *out_3210479663755662439);
void car_H_31(double *state, double *unused, double *out_2322533988519989761);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}