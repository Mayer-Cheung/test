import matrix

a = matrix.rand_matrix(4,4)
b = matrix.rand_matrix(4,4)

c = matrix.create_matrix(4,4)

matrix.mult(c, a,b)

print c

a = matrix.rand_matrix(4,2)
b = matrix.rand_matrix(2,4)
c = matrix.create_matrix(4,4)
c = matrix.mult(c, a,b)

print c

r = matrix.create_matrix(2,2)

print matrix.mult(r,
                  [[1,0],
                   [0,1]],
                  [[1,0],
                   [0,1]])

print matrix.mult(r,
                  [[2,0],
                   [0,2]],
                  [[0,2],
                   [2,0]])
