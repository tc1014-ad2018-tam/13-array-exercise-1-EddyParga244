/*
 * Este programa fue realizado como la tarea#13 el 8 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es dado los valores ingresados por el usuario en un arreglo,
 * imprimirlos en orden normal y en orden inverso.
 *
 * Fecha: 8 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main(void) {
    //Declaracion de la variable que define el tamaño del arreglo.
    int n;
    printf("Define el tamaño del arreglo: ");
    scanf("%i", &n);

    //Declaracion del arreglo
    int numero[n];

    printf("Escribe %i numeros\n", n);

    //Ciclo que se encarga de indicar al usuario que escriba los elementos
    //que van dentro del arreglo.
    for (int i = 0; i < n; i++) {
        printf("Escribe el numero %d:", i);
        scanf("%d", &numero[i]);
    }

    printf("Impresion del arreglo de principio a fin: \n");
    //Ciclo que se encarga de imprimir los numeros de principio a fin
    for (int i = 0; i < n; i++) {
        printf("%d ", numero[i]);
    }

    printf("\nImpresion del arreglo en orden inverso: \n");
    //Ciclo que se encarga de imprimir los numeros en orden inverso
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", numero[i]);
    }

    printf("\n");

    return 0;
}