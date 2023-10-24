

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MATRIX_ROWS = 5;
const int MATRIX_COLS = 4;

int main(){

    int matrix[MATRIX_ROWS][MATRIX_COLS];

    for (int row = 0; row < MATRIX_ROWS; row++){
        for(int col = 0; col < MATRIX_COLS; col++){
            matrix[row][col] = 1;
        }
    }

    printf("mat est : %lu\n", sizeof(matrix));


}