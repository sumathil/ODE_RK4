#ifndef BDCUDA_H
#define BDCUDA_H

include "bdconfig.h";

extern "C" {
		void odefun_gpu(float time_step, real *temp_sol, real *step_sol, int *sol_len, real *actual_sol);
	
	}
extern real *d_Wx;
extern real *d_Wy;
extern real *d_GammaHV;
extern int *d_neighbors;
extern int size;
extern int stencil_size;
extern real *d_u;
extern real *d_v;
extern real *d_temp_sol;
extern real *d_step_sol;

#endif
