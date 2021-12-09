#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef char Datum[10];

int getTag(Datum date);

int getMonat(Datum date);

int getJahr(Datum date);

void getMonatsname(Datum date, char monat[]);

void startDatum() {
    char date[] = "23.12.1986";
    char monat[9];
    printf("%d\n", getTag(date));
    printf("%d\n", getMonat(date));
    printf("%d\n", getJahr(date));
    getMonatsname(date, monat);
    printf("%s\n", monat);
}

int getTag(Datum date) {
    char tag[2];
    tag[0] = date[0];
    tag[1] = date[1];
    return atoi(tag);
}

int getMonat(Datum date) {
    char monat[2];
    monat[0] = date[3];
    monat[1] = date[4];
    return atoi(monat);
}

int getJahr(Datum date) {
    char jahr[4];
    jahr[0] = date[6];
    jahr[1] = date[7];
    jahr[2] = date[8];
    jahr[3] = date[9];
    return atoi(jahr);
}

void getMonatsname(Datum date, char monat[]) {
    switch (getMonat(date)) {
        case 1:
            strcpy(monat, "Januar");
            break;
        case 2:
            strcpy(monat, "Februar");
            break;
        case 3:
            strcpy(monat, "März");
            break;
        case 4:
            strcpy(monat, "April");
            break;
        case 5:
            strcpy(monat, "Mai");
            break;
        case 6:
            strcpy(monat, "Juni");
            break;
        case 7:
            strcpy(monat, "Juli");
            break;
        case 8:
            strcpy(monat, "August");
            break;
        case 9:
            strcpy(monat, "September");
            break;
        case 10:
            strcpy(monat, "Oktober");
            break;
        case 11:
            strcpy(monat, "November");
            break;
        case 12:
            strcpy(monat, "Dezember");
            break;
    }
}

