#include "matrix.h"
#include "common/defines.h"
#include <stdio.h>

/* Using row-major: index = i * cols + j
-> i = index / cols
-> j = index % cols
*/
void matrix_init(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t *buffer)
{
    mat->cols = c;
    mat->rows = r;
    mat->data = buffer;
}

void matrix_set(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t value)
{
    if ((r > mat->rows) || (c > mat->cols)) {
        return;
    }
    uint8_t index = r * mat->cols + c;
    mat->data[index] = value;
}

void matrix_print(const struct matrix *mat)
{
    for (uint8_t i = 0; i < mat->rows; i++) {
        for (uint8_t j = 0; j < mat->cols; j++) {
            uint8_t index = i * mat->cols + j;
            printf("%.2f ", mat->data[index]);
        }
        printf("\n");
    }
}

int8_t matrix_mul(const struct matrix *a, const struct matrix *b, struct matrix *result)
{
    UNUSED(a);
    UNUSED(b);
    UNUSED(result);
    return 0;
}
