import Matrix.Matrix;

class Test {
     public static void print_matrix(float[][] m) {
	  int r, c;
	  
	  System.out.format("[ ");
	  for (r = 0; r < m.length; r++) {
	       System.out.format("[ ");
	       for (c = 0; c < m[0].length; c++) {
		    System.out.format("%f", m[r][c]);
		    if (c != m[0].length - 1 ) {
			 System.out.format(", ");
		    }
	       }
	       System.out.format(" ]\n");
	  }
	  System.out.format("]\n");
     }
     
     public static void main(String[] args) {
	  float a[][] = Matrix.rand_matrix(4,4);
	  float b[][] = Matrix.rand_matrix(4,4);
	  float c[][] = Matrix.create_matrix(4,4);
	  Matrix.mult(c, a,b);

	  print_matrix(c);
     
	  a = Matrix.rand_matrix(4,2);
	  b = Matrix.rand_matrix(2,4);
	  Matrix.mult(c,a,b);
	  print_matrix(c);
	 
    }
}
