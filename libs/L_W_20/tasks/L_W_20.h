#ifndef LAB_L_W_20_H
#define LAB_L_W_20_H


#include <stdio.h>
#include <stdlib.h>

void printMatrix(int *matrix, int n, int m);
void fillMatrix(int *matrix, int sizeOfMatrix, int *query, int queryCount);

int countNeighbors(int *matrix, size_t n, size_t m, size_t col, size_t row);
void gameLife(int *matrix, size_t n, size_t m);

int compareInts1(const void *intPtr1, const void *intPtr2);
int calculateMedianVector(int *matrix, int max_col, int row, int col, int *arrayOfNums, int filter_size);
void medianFilter(int *matrix, int filter, int n, int m);


#endif
