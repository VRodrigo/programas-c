#include <stdio.h>
#include <stdlib.h>

#define MAX 0X100

void fraccion(int numeros[MAX], double *resultado, int cima){
    while(cima !=0){
        *resultado = 1. / *resultado;
        --cima;
        *resultado += numeros[cima];
    }
}

int main(){
    int numeros[MAX];
    int cima = 0;
    double resultado = 0;
    int buffer;

    do{
        printf("Numeros: ");
        scanf(" %i", &buffer);
        numeros[cima++] = buffer;
    }while(buffer != 0);

    cima -= 2;

    resultado = 1. / numeros[--cima];
    resultado += numeros[cima];

    fraccion(numeros, &resultado, cima);

    printf("Resultado: %.2lf\n", resultado);

    return EXIT_SUCCESS;
}
