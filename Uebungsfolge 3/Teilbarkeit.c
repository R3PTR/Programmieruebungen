#include "stdio.h"

int teilt(int a, int b);

void startTeilbarkeit(){
    int i = teilt(12,144);
    printf("%d", i);
}

int teilt(int a, int b) {
    return b%a==0;
}