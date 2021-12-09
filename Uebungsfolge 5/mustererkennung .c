#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pruefeKennung(char *);

void startMustererkennung() {
    printf("%d\n", pruefeKennung("AA123"));
    printf("%d\n", pruefeKennung("AB9876"));
    printf("%d\n", pruefeKennung("ABC123"));
    printf("%d\n", pruefeKennung("LEV2011"));
    printf("%d\n", pruefeKennung("A90123"));
    printf("%d\n", pruefeKennung("ABC43A"));
    printf("%d\n", pruefeKennung("XY22"));
    printf("%d\n", pruefeKennung("OK1000"));
    printf("%d\n", pruefeKennung("WRONG22"));
}

int pruefeKennung(char *eingabe) {
    int i, ziffern = 0, buchstaben = 0;

    for (i = 0; i < strlen(eingabe); i++) {
        if (isalpha(eingabe[i]))
            if (i > 2)
                return 0;
            else
                buchstaben++;

        if (isdigit(eingabe[i]))
            if (i < 2)
                return 0;
            else
                ziffern++;
    }
    if (buchstaben > 3 || buchstaben < 2 || ziffern < 3 || ziffern > 4)
        return 0;

    return 1;
}
