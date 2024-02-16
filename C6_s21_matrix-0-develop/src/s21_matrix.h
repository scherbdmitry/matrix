#ifndef SRC_S21_MATRIX_H_
#define SRC_S21_MATRIX_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0

#define OK 0;
#define INCORRECT_MATRIX 1;
#define CALC_MATRIX_ERROR 2;
#define EPS 1e-7

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

// creation
int s21_create_matrix(int rows, int columns, matrix_t *result);

// remove
void s21_remove_matrix(matrix_t *A);

// comparison
int s21_eq_matrix(matrix_t *A, matrix_t *B);

// addition (sum)
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

// subtraction (sub)
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

// multiplication by number
int s21_mult_number(matrix_t *A, double number, matrix_t *result);

// multiplication by matrix
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);

// transposition
int s21_transpose(matrix_t *A, matrix_t *result);

// matrix of minors and algebraic complements
int s21_calc_complements(matrix_t *A, matrix_t *result);
double s21_searchDeterminant(matrix_t *A, int size);

// matrix determinant
int s21_determinant(matrix_t *A, double *result);

// matrix inverse
int s21_inverse_matrix(matrix_t *A, matrix_t *result);

#endif  // SRC_S21_MATRIX_H_
