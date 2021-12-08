#include "stdio.h"


typedef int SudokuField[9][9];

int zeileGueltig(SudokuField sudokuField, int zeile);

void startSudoku(){
    SudokuField sudokuField = {{1,2,3,4,5,6,7,8,9}};
    SudokuField sudokuField1 = {{1,1,3,4,5,6,7,8,9}};
    printf("1: %d\n", zeileGueltig(sudokuField, 0));
    printf("1: %d\n", zeileGueltig(sudokuField, 1));
    printf("1: %d\n", zeileGueltig(sudokuField1, 0));
}

int zeileGueltig(SudokuField sudokuField, int zeile){
    int numbers[9] = {0};
    for(int i = 0;i<9;i++){
        if(sudokuField[zeile][i] == 0){
            continue;
        }
        for(int j = 0;j<i;j++){
            if (sudokuField[zeile][i] == numbers[j]) {
                return 0;
            }
        }
        numbers[i] = sudokuField[zeile][i];
    }
    return 1;
}