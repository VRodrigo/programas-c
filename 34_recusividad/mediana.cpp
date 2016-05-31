#include <stdio.h>
#include <stdlib.h>
#define N 7

int mediana(){
    return N/2;
}

int main(int argc, const char **argv){

    int posicion;
    int numeros[N] = {1, 1, 2, 3, 4, 7, 8};

    posicion = mediana();

    printf("Mediana: %i\n", numeros[posicion]);

    return EXIT_SUCCESS;

}
