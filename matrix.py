import random

def rand_matrix(rows, cols):
    return [[random.random() for r in range(rows)] for c in range(cols)]

def create_matrix(rows, cols):
    return [[0 for r in range(rows)] for c in range(cols)]

def mult (C, A, B):
    rows_A = len(A)
    cols_A = len(A[0])
    rows_B = len(B)
    cols_B = len(B[0])

    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                C[i][j] += A[i][k] * B[k][j]

    return C
