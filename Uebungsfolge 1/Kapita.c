#include "stdio.h"
#include "stdlib.h"
#include "math.h"

float kapitalwert(float kapital, int jahre, float zinssatz){
    for(;jahre > 0;jahre--){
        kapital += kapital*zinssatz;
    }
    return kapital;
    //return kapital * pow(1 + zinssatz, jahre);
}

int startKapita(void){
    float kapital = kapitalwert(1400.0,8,0.02);
    printf("Das Kapital betraegt € %5.2f .",kapital);
}