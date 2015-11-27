#include <stdio.h>
#include <stdlib.h>
#define BASE 10
int main(){
    //Pregunta un numero entre 0 - 999
    //Introduce un numer o ENTRADA
    //Usuario imprime 356
    //imprime el 6
    //imprime el 5
    //imprime el 3

    /*Algorritmo*/
    int entrada;

    // 1.- Pregunta numero entre 0 - 999
    printf("Intoduce tu numero entre 0 - 999 : ");
    // 2.- Usuario mete numero ENTRADA
    scanf(" %i", &entrada);
    // 3.- imprime ultimo numero
    printf("%i", entrada % BASE);
    // 4.- desplaza todos lo numeros una posocion a la der.
    entrada /= BASE;
    // 5.- imprime ultimo numero
    printf("%i", entrada % BASE);
    // 6.- desplaza todos lo numeros una posocion a la der.
    entrada /= BASE;

    // 8.- imprime ultimo numeo
    printf("%i\n", entrada % BASE);

    return EXIT_SUCCESS;

}
