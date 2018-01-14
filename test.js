matrix = require("./matrix.js");

a = matrix.rand_matrix(4,4);
b = matrix.rand_matrix(4,4);
c = matrix.create_matrix(4,4);
matrix.mult(c, a,b);

console.log(c);

a = matrix.rand_matrix(4,2);
b = matrix.rand_matrix(2,4);
matrix.mult(c, a,b);

console.log(c);

r = matrix.create_matrix(2,2);

console.log(matrix.mult(r,
			[[1,0],
			 [0,1]],
			[[1,0],
			 [0,1]]));

console.log(matrix.mult(r,
			[[2,0],
			 [0,2]],
			[[0,2],
			 [2,0]]));
