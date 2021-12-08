#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define ZEILEN         3
#define SPALTEN        4

typedef int Matrix[ZEILEN][SPALTEN];

void matrixEingabe(Matrix m);
void matrixAusgabe(Matrix m);
void matrixAddition(Matrix m, Matrix m1, Matrix m2);
void randomMatrix(Matrix m);

void startMatrix(){
    Matrix m;
    Matrix m1;
    Matrix m2;
    randomMatrix(m);
    randomMatrix(m1);
    matrixAusgabe(m);
    matrixAusgabe(m1);
    matrixAddition(m,m1,m2);
    matrixAusgabe(m2);
}

void matrixEingabe(Matrix m) {
    printf("Gib die Matrix Zeile für Zeile ein.\n");
    for (int i = 0; i <ZEILEN; ++i) {
        scanf("%d %d %d %d", &m[i][0],&m[i][1],&m[i][2],&m[i][3]);
    }
}

void matrixAusgabe(Matrix m) {
    printf("Matrixausgabe: \n");
    for (int i = 0; i <ZEILEN; ++i) {
        printf("%d. Zeile: %d %d %d %d\n", i+1, m[i][0], m[i][1], m[i][2], m[i][3]);
    }
}

void randomMatrix(Matrix m) {
    srand(time(NULL));
    for (int i = 0; i < ZEILEN; i++) {
        for (int j = 0; j < SPALTEN; j++) {
            m[i][j] = rand() % 10;
        }
    }
}

void matrixAddition(Matrix m, Matrix m1, Matrix m2) {
    for (int i = 0; i < ZEILEN; i++) {
        for (int j = 0; j < SPALTEN; j++) {
            m2[i][j] = m[i][j] + m1[i][j];
        }
    }
}