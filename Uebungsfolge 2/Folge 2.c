#include <stdio.h>
#include "math.h"
#include "ctype.h"

void functs(void);
double convertEURtoCHF(double amount);
double convertCHFtoEUR(double amount);
void convert(void);
void calculator(void);
int cEquals(char c1, char c2);
void read(int * pnumerator, int * pdenominator);
void reduce(int * pnumerator, int * pdenominator);
void startReducing(void);

void functs(void){
    printf("   x   sin(x) sqrt(x) \n");
    double x;
    for(x=0;x<=1;x+=0.05){
        printf("%5.4f %5.4f %5.4f\n", x, sin(x), sqrt(x));
    }
}

void convert(void){
    printf("For EUR to CHF type: 0. For CHF to EUR type: 1. : ");
    int input;
    do {
        scanf("%d", &input);
    } while (input != 0 && input != 1);
    printf("Type the amount you´d like to convert: ");
    double amount;
    scanf("%lf",&amount);
    double result;
    if(input){
        result = convertCHFtoEUR(amount);
    } else {
        result = convertEURtoCHF(amount);
    }
    printf("The Result is: %lf", result);
}

double convertEURtoCHF(double amount){
    return amount * 1.06;
}

double convertCHFtoEUR(double amount){
    return amount * 0.94;
}

void calculator(void){
    double operand1 = 0;
    double operand2 = 0;
    char operator = ' ';
    double result = 0;
    _Bool valid = 0;
    while(!valid) {
        printf("Bitte Rechenausdruck eingeben in der Form: Operand Operator Operand.\n-->");
        scanf("%lf %c %lf",&operand1,&operator,&operand2);
        if(operator == '+'){
            result = operand1 + operand2;
            valid = 1;
        } else if (operator == '-'){
            result = operand1 - operand2;
            valid = 1;
        } else if (operator == '*'){
            result = operand1 * operand2;
            valid = 1;
        } else if (operator == '/'){
            result = operand1 / operand2;
            valid = 1;
        } else if (operator == '#'){
            result = pow(operand1, operand2);
            valid = 1;
        }else {
            printf("Enter valid operator: + - * /\n");
        }
    }
    printf("Ergebnis: %lf", result);
}

int cEquals(char c1, char c2){
    if (tolower(c1) == tolower(c2)){
        return 1;
    } else {
        return 0;
    }
}

void startReducing(void){
    int numerator;
    int denominator;
    read(&numerator,&denominator);
    reduce(&numerator,&denominator);
    printf("Numerator: %d Denominator: %d", numerator, denominator);
}

void read(int * pnumerator, int * pdenominator){
    printf("Type in the numerator and denominator: ");
    scanf("%d %d", pnumerator, pdenominator);

}

void reduce(int * pnumerator, int * pdenominator){
    int i = *pnumerator;
    int numerator = *pnumerator;
    int denominator = *pdenominator;
    while(numerator%i!=0 && denominator%i!=0){
        i--;
    }
    int newNumerator = numerator/i;
    int newDenominator = denominator/i;
    if(newDenominator<0){
        newDenominator*=-1;
        newNumerator*=-1;
    }
    *pnumerator = newNumerator;
    *pdenominator = newDenominator;
}