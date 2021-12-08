#include "string.h"
#include "stdio.h"

typedef struct Dozent Dozent;
typedef struct Studiengruppe Studiengruppe;

int gleicherMentor(Studiengruppe a, Studiengruppe b);

struct Dozent
{
    char name[60];
    char vorname[60];
    char kuerzel[3+1];
    int status; // 1=festangestellt, 2=Honorardozent
};
struct Studiengruppe
{
    char bezeichnung[60];
    char kuerzel[8+1];
    struct Dozent * pMentor;
} a, b;

void startStructurUebung(){
    char kuerzel[4] = "ABC";
    strcpy(a.pMentor->kuerzel, kuerzel);
    strcpy(b.pMentor->kuerzel, kuerzel);
    printf("%d", gleicherMentor(a,b));
}

int gleicherMentor(Studiengruppe a, Studiengruppe b) {
    return strcmp(a.pMentor->kuerzel, b.pMentor->kuerzel) == 0;
}