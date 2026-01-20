#include "matrix.h"
#include <stdio.h>

int main(void)
{

    struct matrix m_matrix;
    struct matrix p_matrix;
    struct matrix res_matrix;
    struct matrix tmp_matrix;

    mat_data_t tmp_buff[9];

    // clang-format off
    mat_data_t trans_data[9] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    // clang-format on
    
    // clang-format off
    mat_data_t point_data[6] = {
         10,    11,
         12,    13,
         14,    15 
    };
    // clang-format on

    mat_data_t res_mat[4];

    matrix_init(&res_matrix, 3, 2, res_mat);
    matrix_init(&m_matrix, 3, 3, trans_data);
    matrix_init(&p_matrix, 3, 2, point_data);
    matrix_init(&tmp_matrix, 3, 3, tmp_buff);

    if (matrix_mul(&m_matrix, &p_matrix, &res_matrix) == MATRIX_INVALID) {
        printf("Error!\n");
    } else {
        matrix_print(&res_matrix);
    }
    printf("Copy m_matrix:\n");
    matrix_copy(&m_matrix, &tmp_matrix);
    matrix_print(&tmp_matrix);
    

}