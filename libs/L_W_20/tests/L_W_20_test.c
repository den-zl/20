#include <stdio.h>
#include <assert.h>
#include "/Users/denzl/CLionProjects/2sem/19.20/lab_20/libs/L_W_20/tasks/L_W_20.h"
#include "L_W_20_test.h"


void testAll_fillMatrix() {
    int n = 3;
    int count_query = 2;
    int matrix[n][n];

    int query[2][4] = {{1,1,2,2}, {0,0,1,1}};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    fillMatrix(*matrix, n, *query, count_query);
    int resMatrix[3][3] = {{1,1,0}, {1,2,1}, {0,1,1}};

    for (int z = 0; z < n; z++) {
        for (int x = 0; x < n; x++) {
            assert(matrix[z][x] == resMatrix[z][x]);
        }
    }
}

void testAll_gameLife() {
    int n = 4;
    int m = 3;
    int matrix[4][3] = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};

    gameLife(*matrix, n, m);

    int resMatrix[4][3] = {{0,0,0},{1,0,1},{0,1,1},{0,1,0}};
    for (int z = 0; z < n; z++) {
        for (int x = 0; x < m; x++) {
            assert(matrix[z][x] == resMatrix[z][x]);
        }
    }
}

void testAll_MedianFilter() {
    int filter = 5;
    int n = 7;
    int m = 7;

    int matrix[3][3] = {{10,20,30},{25,35,45},{15,25,35}};
    int res_matrix[3][3] = {{10,20,30},{25,25,45},{15,25,35}};

    int matrix2[7][7] = {{8,9,1,3,2,4,6},
                         {1,11,1,3,8,9,2},
                         {2,5,3,6,7,4,2},
                         {8,6,4,9,7,1,3},
                         {4,3,7,2,1,8,4},
                         {5,6,5,7,8,8,4},
                         {1,2,1,9,10,5,9}};
    int res_matrix2[7][7] = {{8,9,1,3,2,4,6},
                             {1,11,1,3,8,9,2},
                             {2,5,4,4,4,4,2},
                             {8,6,5,6,4,1,3},
                             {4,3,5,6,5,8,4},
                             {5,6,5,7,8,8,4},
                             {1,2,1,9,10,5,9}};

    medianFilter(*matrix, 3, 3, 3);
    for (int z = 0; z < 3; z++) {
        for (int x = 0; x < 3; x++) {
            assert(matrix[z][x] == res_matrix[z][x]);
        }
    }

    medianFilter(*matrix2, filter, n, m);
    for (int z = 0; z < n; z++) {
        for (int x = 0; x < m; x++) {
            assert(matrix2[z][x] == res_matrix2[z][x]);
        }
    }
}

void testAll_showVisitStats() {
    char stats[] = "cpdomains = [\"900 google.mail.com\", \"50 yahoo.com\", \"1 intel.mail.com\", \"5 wiki.org\"]\0";
    vectorVoid res = showVisitStats(stats);

    DomainCounter expDomains[] = {{951, "com"}, {900, "google.mail.com"},
                                  {1, "intel.mail.com"}, {901, "mail.com"},
                                  {5, "org"}, {5, "wiki.org"},
                                  {50, "yahoo.com"}};

    assert(sizeof(expDomains) / sizeof(DomainCounter) == res.size);
    for (int i = 0; i < res.size; i++) {
        DomainCounter domain;
        getVectorValueV(&res, i, &domain);
        assert(expDomains[i].counter == domain.counter);
        ASSERT_STRING(expDomains[i].domain, domain.domain);
    }
}

void test_L_W_20_All() {
    testAll_fillMatrix();
    testAll_gameLife();
    testAll_MedianFilter();
    testAll_showVisitStats();

}