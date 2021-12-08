#include "stdio.h"

int countWords(char text[]);

void startWordcount(){
    char text[2048];
    puts("Bitte Text eingeben: ");
    fgets(text,2048,stdin);
    puts(text);
    printf("Wordcount: %d", countWords(text));
}

int countWords(char text[]){
    int wordCount = 1;
    for (int i = 0; text[i] != '\0'; ++i) {
        if(text[i] == ' ' && text[i+1] != ' '){
            wordCount++;
        }
    }
    return wordCount;
}