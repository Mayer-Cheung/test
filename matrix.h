#ifndef MATRIX_INCLUDED
#define MATRIX_INCLUDED

float** mult(float **C,
	     float **A,
	     int a_rows,
	     int a_cols,
	     float **B,
	     int b_rows,
	     int b_cols);

float **rand_matrix(int rows, int cols);

float **alloc_matrix(int rows, int cols);

#endif
