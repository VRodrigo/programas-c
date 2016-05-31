#include <stdio.h>
#include <stdlib.h>
#define N 6

int mediana(){
    return N / 2 - 1;
}

int main(int argc, const char **argv){

    int posicion;
    int numeros[N] = {1, 1, 2, 3, 4, 7};

    posicion = mediana();

    printf("Mediana:  %.2lf\n", numeros[posicion] + 0.5);

    return EXIT_SUCCESS;

}
