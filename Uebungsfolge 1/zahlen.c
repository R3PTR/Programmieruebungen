#include "stdio.h"

int startZahlen(void) {
    int decimal;
    printf("Welche Zahl soll ich umrechnen? -> ");
    scanf("%d", &decimal);
    printf("Oktal: %o\n", decimal);
    printf("Hexadezimal: %x\n", decimal);
}