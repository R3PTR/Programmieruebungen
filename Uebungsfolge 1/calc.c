#include "stdio.h"

int startCalc(void) {
    double operand1 = 0;
    double operand2 = 0;
    char operator = ' ';
    double result = ' ';
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
        } else {
            printf("Enter valid operator: + - * /\n");
        }
    }
    printf("Ergebnis: %lf", result);
}