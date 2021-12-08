#define LAENGE 80

/*
 * Es wird ein neues Struct erstellt mit dem Namen Kundendaten
 */
struct Kundendaten {
    char    KdNr[10];  /* Kundennummer */
    char    Nachname[LAENGE];  /* Name         */
    char    Vorname[LAENGE];
    float    kto;     /* Kontostand   */
} kunde1, kunde2;

void startStructs() {

}