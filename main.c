#include <stdio.h>
#include <stdlib.h>
#include "include/calculator.h"

int main () {
    int opMenu;
    char input[100];
    char *fin;
    double a, b;

    printf("> Bienvenido a la calculadora de KaliGa70\n");

    enterNumbers(&a, &b);

    do {
        printf("\n\n> Seleccione la operaci%cn a realizar\n", 162);
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Cambiar numeros\n");
        printf("6. Borrar consola\n");
        printf("7. Salir de la calculadora\n");
        printf("Escribe una opci%cn: ", 162);
        fgets(input, sizeof(input), stdin);
        opMenu = strtol(input, &fin, 10);

        if (*fin != '\n') {
            printf("Ingresaste un caracter!");
            continue;
        }

        //if(!(opMenu >= 1 && opMenu <= 5)) continue;

        switch (opMenu) {
            case 1:
                decoration(1, 0);

                double addition = add(a, b);

                decoration(0, 1);
                printf("Resultado ->");
                printf("\n(%.2lf + %.2lf) = %.2lf\n", a, b, addition);
                decoration(0, 2);
                break;

            case 2:
                decoration(1, 0);

                double subtraction = subtract(a, b);

                decoration(0, 1);
                printf("Resultado ->");
                printf("\n(%.2lf - %.2lf) = %.2lf\n", a, b, subtraction);
                decoration(0, 2);
                break;

            case 3:
                decoration(1, 0);

                double multiplication = multiply(a, b);

                decoration(0, 1);
                printf("Resultado ->");
                printf("\n(%.2lf * %.2lf) = %.2lf\n", a, b, multiplication);
                decoration(0, 1);
                break;

            case 4:
                decoration(1, 0);


                if(b == 0) {
                    decoration(0, 1);
                    printf("Error: No se puede dividir entre CERO");
                    decoration(1, 2);
                    continue;
                }

                double division = divide(a, b);

                decoration(0, 1);
                printf("Resultado ->");
                printf("\n(%.2lf / %.2lf) = %.2lf\n", a, b, division);
                decoration(0, 2);
                break;

            case 5:
                enterNumbers(&a, &b);
                break;

            case 6:
                system("cls"); // En linux colocar -> system("clear");
                break;
            
            case 7:
                system("cls");
                break;

            default:
                decoration(1, 1);
                printf("Esa opci%cn es invalida!", 162);
                decoration(1, 2);
                break;
        }
    } while (opMenu != 7);
    
}
