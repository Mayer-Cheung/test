#include"matrix.h"
#include"stdio.h"
#include<stdlib.h>

void print_matrix(float **m, int rows, int cols) {
     int r,c;
	  
     printf("[ ");
     for (r = 0; r < rows; r++) {
	  printf("[ ");
	  for (c = 0; c < cols; c++) {
	       printf("%f", m[r][c]);
	       if (c != cols -1 ) {
		    printf(", ");
	       }
	  }
	  printf(" ]\n");
     }
     printf("]\n");
     
}

int main(int argc, char *argv[]) {
   
     float **a = rand_matrix(4,4);
     float **b = rand_matrix(4,4);
     float **c = alloc_matrix(4,4);

     mult(c, a,4,4,b,4,4);

     print_matrix(c, 4,4);

     
     a = rand_matrix(4,2);
     b = rand_matrix(2,4);
     mult(c, a,4,2,b,2,4);
     print_matrix(c, 4,4);
     free(c);

     float **a2 = alloc_matrix(2, 2);
     float **b2 = alloc_matrix(2, 2);

     a2[0][0] = 1;
     a2[0][1] = 0;
     a2[1][0] = 0;
     a2[1][1] = 1;

     b2[0][0] = 0;
     b2[0][1] = 1;
     b2[1][0] = 1;
     b2[1][1] = 0;

     c = alloc_matrix(2,2);
     
     mult(c, a2, 2, 2,
	      b2, 2, 2);
     print_matrix(c, 2,2);
     free(c);

     /*
     c = mult([[2,0],
	       [0,2]], 2, 2,
	      [[2,0],
	       [0,2]], 2, 2);
     print_matrix(c, 2,2);
     free(c);*/

}
