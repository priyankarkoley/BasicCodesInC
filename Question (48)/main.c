#include <stdio.h>

// function to get matrix elements entered by the user
void input(int matrix[][3], int r, int c) {

   printf("\nEnter elements: \n");

   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

// function to multiply two matrices
void mul(int first[][3],
                      int second[][3],
                      int result[][3],
                      int r, int c) {

   // Initializing elements of matrix mult to 0.
   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
         result[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
         for (int k = 0; k < c; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

// function to display the matrix
void display(int result[][3], int r, int c) {

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
         printf("%d  ", result[i][j]);
         if (j == c - 1)
            printf("\n");
      }
   }
}

int main() {
   int first[3][3], second[3][3], result[3][3], r, c;
    r=3;
    c=3;

   // get elements of the first matrix
   input(first, r, c);

   // get elements of the second matrix
   input(second, r, c);

   // multiply two matrices.
   mul(first, second, result, r, c);

   // display the result
   display(result, r, c);

   return 0;
}
