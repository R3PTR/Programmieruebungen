#include "stdio.h"

typedef struct Uhrzeit Uhrzeit;

struct Uhrzeit
{
    int std; // Stunde(n)
    int min; // Minute(n)
};

int diff(Uhrzeit zeit, Uhrzeit zeit1);
void eingabe(Uhrzeit * pInput);
void ausgabe(Uhrzeit input);

void startUhrzeit() {

    Uhrzeit input;
    eingabe(&input);
    ausgabe(input);
    int differenz = 0;
    Uhrzeit zeit1, zeit2;
    zeit1.std = 10; // zeit1: 10:40 h
    zeit1.min = 40;
    zeit2.std = 12; // zeit2: 12:15 h
    zeit2.min = 15;
    differenz = diff(zeit2,zeit1); // setzt differenz auf 95 (Minuten)
    printf("Differenz: %d\n", differenz);
}

void eingabe(Uhrzeit * pInput) {
    Uhrzeit zeit = *pInput;
    int stunden = 0;
    int minuten = 0;
    do{
        printf("Geben sie eine Uhrzeit ein.\n");
        scanf("%d %d", &stunden, &minuten);
    }while(stunden<0 || stunden >23 || minuten<0 || minuten>59);
    zeit.std = stunden;
    zeit.min = minuten;
    *pInput = zeit;
}

void ausgabe(Uhrzeit input){
    printf("%d:%d\n",input.std,input.min);
}

int diff(Uhrzeit zeit, Uhrzeit zeit1) {
    int minutes = zeit.std*60 + zeit.min;
    int minutes1 = zeit1.std*60 + zeit1.min;
    int differenz = minutes-minutes1;
    if(differenz<0){
        differenz*=-1;
    }
    return differenz;
}