#ifndef MATRIX_H
#define MATRIX_H

#include <stdint.h>
#include <math.h>

typedef float mat_data_t;

struct matrix
{
    uint8_t rows;
    uint8_t cols;
    mat_data_t *data;
};

typedef enum {
    MATRIX_INVALID,
    MATRIX_OK,
    MATRIX_SINGULAR,
} matrix_status_e;

void matrix_init(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t *buffer);
void matrix_set(struct matrix *mat, uint8_t r, uint8_t c, mat_data_t value);
void matrix_print(const struct matrix *mat);
matrix_status_e matrix_mul(const struct matrix *a, const struct matrix *b, struct matrix *result);
matrix_status_e matrix_copy(const struct matrix *src, struct matrix *dest);

//TODO: LED MATRIX

#endif