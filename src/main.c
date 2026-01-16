#include "matrix.h"
#include <stdio.h>

int main(void)
{

    mat_data_t buffer[2 * 3];
    struct matrix test_matrix;
    matrix_init(&test_matrix, 2, 3, buffer);

    matrix_set(&test_matrix, 0, 0, 0);
    matrix_set(&test_matrix, 0, 1, 1);
    matrix_set(&test_matrix, 0, 2, 2);
    matrix_set(&test_matrix, 1, 0, 3);
    matrix_set(&test_matrix, 1, 1, 4);
    matrix_set(&test_matrix, 1, 2, 5);
  

    printf("Matrix:\n");
    matrix_print(&test_matrix);
}