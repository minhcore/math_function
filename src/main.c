#include "matrix.h"
#include <stdio.h>

int main(void)
{

    struct matrix m_matrix;
    struct matrix p_matrix;
    struct matrix res_matrix;

    // clang-format off
    mat_data_t trans_data[16] = {
        1, 0, 0, 10,
        0, 1, 0, 50,
        0, 0, 1, 0,
        0, 0, 0, 1
    };
    // clang-format on

    mat_data_t point_data[4] = { 0, 0, 0, 1 };

    mat_data_t res_mat[4];

    matrix_init(&res_matrix, 4, 1, res_mat);
    matrix_init(&m_matrix, 4, 4, trans_data);
    matrix_init(&p_matrix, 4, 1, point_data);

    if (matrix_mul(&m_matrix, &p_matrix, &res_matrix) == MATRIX_IVALID) {
        printf("Error!\n");
    } else {
        matrix_print(&res_matrix);
    }
}