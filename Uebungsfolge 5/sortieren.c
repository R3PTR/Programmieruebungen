#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANZAHL 5

void eingabe(char * *);
void ausgabe(char * *);
void sortieren(char * *);

void startSortieren()
{
    char * * Namen;
    int i;
    Namen = (char * *) malloc(ANZAHL * sizeof(char *));

    eingabe(Namen);
    sortieren(Namen);
    ausgabe(Namen);
}

void sortieren(char * * Namen)
{
    int i, getauscht = 0;
    char speicher[25];
    printf("***SORTIEREN GESTARTET***\n");
    do
    {
        getauscht = 0;
        for (i = 0; i < ANZAHL - 1; i++)
        {
            if(strcmp(Namen[i], Namen[i+1]) < 0)
            {
                //printf("Muss nichts machen\n");
            }

            if(strcmp(Namen[i], Namen[i+1]) > 0)
            {
                printf("Tausche %d mit %d\n", i+1, i+2);
                strcpy(speicher,Namen[i]);
                strcpy(Namen[i],Namen[i+1]);
                strcpy(Namen[i+1],speicher);
                getauscht++;
            }
        }
    }while(getauscht > 0);
    printf("***SORTIEREN BEENDET***\n");
    printf("\n");
}

void ausgabe(char * * Namen)
{
    int i;
    printf("***AUSGABE***\n");
    for (i = 0; i < ANZAHL; i++)
    {
        printf("%s\n", Namen[i]);
    }
    printf("***AUSGABE BEENDET***\n");
    printf("\n");
}

void eingabe(char * * Namen)
{
    int i;
    char eingabe[20];
    printf("***EINGABE***\n");
    for (i = 0; i < ANZAHL; i++)
    {
        scanf("%s", &eingabe);
        Namen[i] = (char *) malloc(strlen(eingabe) * sizeof(char));
        strcpy(Namen[i],eingabe);
    }
    printf("***EINGABE BEENDET***\n");
    printf("\n");
}
