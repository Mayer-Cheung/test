package Matrix;
import java.util.Random;


public class Matrix {
     public static float[][] rand_matrix(int rows, int cols) {
	  Random rand = new Random();
	  float c[][] = new float[rows][cols];
	  for(int i = 0;i < rows;i++){
	       for(int j = 0;j < cols;j++){
		    c[i][j] = rand.nextFloat();
	       }
	  }
	  return c;
     }
     public static float[][] create_matrix(int rows, int cols) {
	  float c[][] = new float[rows][cols];
	  return c;
     }

     public static float[][] mult(float c[][], float a[][], float b[][]){
	    
	  int n = a[0].length;
	  int m = a.length;
	  int p = b[0].length;
 

	  for(int i = 0;i < m;i++){
	       for(int j = 0;j < p;j++){
		    for(int k = 0;k < n;k++){
			 c[i][j] += a[i][k] * b[k][j];
		    }
	       }
	  }
	  return c;
     }
}
