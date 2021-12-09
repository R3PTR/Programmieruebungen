#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int StrToInt(char *);
int zuZahl(char x);

void startNumerische()
{
    char eingabe[10];
    scanf("%s", &eingabe);
    printf("SelfCode: %d\n", StrToInt(eingabe));
    printf("Atoi: %d\n", atoi(eingabe));
}

int StrToInt(char * eingabe)
{
    int i, ergebnis = 0, negativ = 0;

    if (!isdigit(eingabe[0]))
    {
        if (eingabe[0] != '-' && eingabe[0] != '+')
        {
            return 0;
        }else
        {
            if(eingabe[0] == '-')
            {
                negativ = 1;
            }
        }

    }else
    {
        ergebnis = zuZahl(eingabe[0]);
    }

    for (i = 1; i < strlen(eingabe); i++)
    {
        if(!isdigit(eingabe[i]))
            return 0;

        ergebnis = ergebnis * 10 + zuZahl(eingabe[i]);
    }

    if (negativ)
        return -ergebnis;

    return ergebnis;
}

int zuZahl(char x)
{
    switch (x)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}
