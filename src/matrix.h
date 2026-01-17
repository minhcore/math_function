#ifndef MATRIX_H
#define MATRIX_H

#include <stdint.h>

typedef float mat_data_t;

struct matrix
{
    uint8_t rows;
    uint8_t cols;
    mat_data_t *data;
};

typedef enum {
    MATRIX_IVALID,
    MATRIX_OK,
} matrix_status_e;

void matrix_init(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t *buffer);
void matrix_set(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t value);
void matrix_print(const struct matrix *mat);
matrix_status_e matrix_mul(const struct matrix *a, const struct matrix *b, struct matrix *result);

#endif