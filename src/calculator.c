#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    return a / b;
}

void decoration(int amountL, int amountR) {
    if(amountL != 0) {
        for(int i = 0; i < amountL; i++){
            printf("\n");
        }
    }
    printf("----------------------------------------");
    if(amountR != 0){
        for(int i = 0; i < amountR; i++){
            printf("\n");
        }
    }
}

void enterNumbers(double *a, double *b) {
    char input[100];
    char *fin;
    while (1) {
        printf("> Ingrese 2 numeros\n");

        printf("\nDigite el primer numero: ");
        fgets(input, sizeof(input), stdin);
        *a = strtod(input, &fin);
        if (*fin != '\n') {
            system("cls");
            printf("Ingresaste un caracter!\n\n");
            continue;
        }

        printf("Digite el segundo numero: ");
        fgets(input, sizeof(input), stdin);
        *b = strtod(input, &fin);
        if (*fin != '\n') {
            system("cls");
            printf("Ingresaste un caracter!\n\n");
            continue;
        }
        break;
    }
}