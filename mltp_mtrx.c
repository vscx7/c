#include <stdio.h>

#define MAX_SIZE 10

void multiply_matrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int m, int n, int p) {
  if (n != p) {
    printf("Matrices are not compatible for multiplication.\n");
    return;
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      result[i][j] = 0;
      for (int k = 0; k < n; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}

void print_matrix(int mat[][MAX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  // Define the matrices
  int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

  // Get the size of the first matrix
  int m, n;
  printf("Enter the number of rows in the first matrix: ");
  scanf("%d", &m);
  printf("Enter the number of columns in the first matrix: ");
  scanf("%d", &n);

  // Get the elements of the first matrix
  printf("Enter the elements of the first matrix:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  // Get the size of the second matrix
  int p;
  printf("Enter the number of columns in the second matrix: ");
  scanf("%d", &p);

  // Get the elements of the second matrix
  printf("Enter the elements of the second matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  // Multiply the matrices
  multiply_matrices(mat1, mat2, result, m, n, p);

  // Print the result
  printf("Resultant Matrix:\n");
  print_matrix(result, m, p);

  return 0;
}