#include <stdio.h>

int summe(int a) {
    int sum = 0;
    for (int i = 1; i <= a; ++i) {
        sum+=i;
    }
}

int summe2(int a) {
    int sum = 0;
    for (int i = 1; i <= a; ++i) {
        if(i%2==0){
            sum+=i;
        }
    }
}

int maximum(int a, int b) {
    if(a>b){
        return a;  
    } else {
        return b;
    }
}

int minimum(int a, int b) {
    if(a<b){
        return a;
    } else {
        return b;
    }
}

int maxOfArray(int array[]) {
    int arraySize = (int)( sizeof(array) / sizeof(array[0]));
    int max = 0;
    for (int i = 0; i < arraySize; ++i) {
        if(array[i]>max) {
            max = array[i];
        }
    }
}

int quersumme(int a) {
    int quersumme = 0;
    char array[10];
    sprintf(array, "%d", a);
    if(a<=0){
        return 0;
    }
    for(int i = 0; array[i] != '\0';i++){
        quersumme += (int) array[i];
    }
}

