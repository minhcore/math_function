#include "matrix.h"
#include <stdio.h>

int main(void)
{

    mat_data_t res_mat[3 * 3];
    mat_data_t a_mat[3*2];
    mat_data_t b_mat[2*3];
    struct matrix a_matrix;
    struct matrix b_matrix;
    struct matrix res_matrix;
    matrix_init(&res_matrix, 3, 3, res_mat);
    matrix_init(&a_matrix, 3, 2, a_mat);
    matrix_init(&b_matrix, 2, 3, b_mat);

    matrix_set(&a_matrix, 0, 0, 0);
    matrix_set(&a_matrix, 0, 1, 1);
    matrix_set(&a_matrix, 1, 0, 3);
    matrix_set(&a_matrix, 1, 1, 4);
    matrix_set(&a_matrix, 2, 0, 3);
    matrix_set(&a_matrix, 2, 1, 4);

    matrix_set(&b_matrix, 0, 0, 6);
    matrix_set(&b_matrix, 0, 1, 7);
    matrix_set(&b_matrix, 0, 2, 8);
    matrix_set(&b_matrix, 1, 0, 9);
    matrix_set(&b_matrix, 1, 1, 10);
    matrix_set(&b_matrix, 1, 2, 11);

    
    if(matrix_mul(&a_matrix, &b_matrix, &res_matrix) == MATRIX_IVALID)
    {
        printf("Error!\n");
    }
    else {
        matrix_print(&res_matrix);
    }
    

}