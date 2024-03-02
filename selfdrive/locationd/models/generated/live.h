#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_3655759921532451903);
void live_err_fun(double *nom_x, double *delta_x, double *out_6606438496319011893);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_1892773414432101423);
void live_H_mod_fun(double *state, double *out_31505903139368806);
void live_f_fun(double *state, double dt, double *out_4984514158829912596);
void live_F_fun(double *state, double dt, double *out_495900107318952904);
void live_h_4(double *state, double *unused, double *out_4218409302925889705);
void live_H_4(double *state, double *unused, double *out_2064362458237902773);
void live_h_9(double *state, double *unused, double *out_4201404494137813277);
void live_H_9(double *state, double *unused, double *out_1823172811608312128);
void live_h_10(double *state, double *unused, double *out_4904878276509257913);
void live_H_10(double *state, double *unused, double *out_7361770315712994123);
void live_h_12(double *state, double *unused, double *out_3237267128515768115);
void live_H_12(double *state, double *unused, double *out_2955093949794059022);
void live_h_35(double *state, double *unused, double *out_9093746190498438204);
void live_H_35(double *state, double *unused, double *out_1302299599134704603);
void live_h_32(double *state, double *unused, double *out_5484223878963608382);
void live_H_32(double *state, double *unused, double *out_5612564904559411753);
void live_h_13(double *state, double *unused, double *out_7023021544313133462);
void live_H_13(double *state, double *unused, double *out_6405415510614721399);
void live_h_14(double *state, double *unused, double *out_4201404494137813277);
void live_H_14(double *state, double *unused, double *out_1823172811608312128);
void live_h_33(double *state, double *unused, double *out_3622091043585692181);
void live_H_33(double *state, double *unused, double *out_4452856603773562207);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}