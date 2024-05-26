#ifndef LAB_L_W_20_H
#define LAB_L_W_20_H


#include <stdio.h>
#include <stdlib.h>
#include "/Users/denzl/CLionProjects/2sem/19.20/lab_20/libs/string/tasks/string_.h"
#include "/Users/denzl/CLionProjects/2sem/19.20/lab_20/libs/data_structures/vector/vectorVoid.h"
#include "/Users/denzl/CLionProjects/2sem/19.20/lab_20/libs/data_structures/matrix/matrix.h"

typedef struct DomainRecord {
    long counter;
    WordDescriptor domain;
} DomainRecord;

typedef struct DomainCounter {
    long counter;
    char domain[255];
} DomainCounter;

typedef struct TreeItem {
    int level;
    int value;
    int type;
    int idx;
} TreeItem;

void printMatrix(int *matrix, int n, int m);
void fillMatrix(int *matrix, size_t sizeOfMatrix, int *query, size_t queryCount);

int countNeighbors(int *matrix, int n, int m, int col, int row);
void gameLife(int *matrix, size_t n, size_t m);

int compareInts1(const void *intPtr1, const void *intPtr2);
int calculateMedianVector(int *matrix, int max_col, int row, int col, int *arrayOfNums, int filter_size);
void medianFilter(int *matrix, int filter, int n, int m);

int compareWordDescriptors(const void *wordPtr1, const void *wordPtr2);
vectorVoid showVisitStats(char *stats);

int getNumSubmatrices(matrix *m);

char* getMinStringNum(char *pattern);

vectorVoid maxThree(int *nums, int len);

char* getShuffledString(char *symbols, int *indices, int len);

#endif