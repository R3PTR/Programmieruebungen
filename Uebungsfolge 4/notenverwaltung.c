#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define ANZAHL 30

void notenEingabe(int noten[]);
void randomNoten(char noten[]);
void notenAusgabe(char noten[]);
void statistik(char noten[]);
void notenAenderung(char noten[]);

void startNotenverwaltung(){
    int noten[ANZAHL];
    randomNoten(noten);
    notenAusgabe(noten);
    statistik(noten);
    notenAenderung(noten);
    notenAusgabe(noten);
}

void notenEingabe(int noten[]) {
    int input;
    for(int i = 0; i<ANZAHL; i++) {
        printf("Gib eine Note ein: \n");
        scanf("%d", &input);
        while (input < 0 || input > 5) {
            printf("Die Eingabe war ungueltig, gib bitte eine Zahl zwischen 0 und 5 ein.\n");
            scanf("%d", &input);
        }
        noten[i] = input;
    }
}

void randomNoten(char noten[]) {
    srand(time(NULL));
    for(int i = 0; i<ANZAHL; i++) {
             noten[i] = rand() % 6;
    }
}

void notenAusgabe(char noten[]) {
    for(int i = 0;i<ANZAHL;i++){
        printf("%d: %d\n", i, noten[i]);
    }
}

void statistik(char noten[]) {
    int anzahl[6] = {0};
    for(int i = 0;i<ANZAHL;i++){
        anzahl[noten[i]]++;
    }
    printf("%d Personen habe nicht mitgeschrieben.\n", anzahl[0]);
    printf("Die Notenverteilung sah so aus:\n");
    for(int i = 1;i<6;i++){
        printf("%d: %d\n", i, anzahl[i]);
    }
    int summe = 0;
    int notenAnzahl = 0;
    for(int i = 1;i<6;i++){
        summe += anzahl[i]*i;
        notenAnzahl += anzahl[i];
    }
    printf("Der Durchschnitt ist: %lf\n", (double) summe/notenAnzahl);
}

void notenAenderung(char noten[]) {
    int index;
    printf("Welche Note soll geaendert werden?\n");
    scanf("%d", &index);
    printf("Gib die neue Note ein.\n");
    scanf("%d", &noten[index]);
}