#include <stdio.h>

void ausgabeDez();
void ausgabeHex();

void startThreeFive(){
    ausgabeDez();
    ausgabeHex();
}

void ausgabeDez(){
    for (int i = 0; i < 256; ++i) {
        printf("%d %c", i, i);
        if(i%10==0){
            printf("\n");
        }
    }
}

void ausgabeHex(){
    for (int i = 0; i < 256; ++i) {
        printf("%x %c", i, i);
        if(i%10==0){
            printf("\n");
        }
    }
}