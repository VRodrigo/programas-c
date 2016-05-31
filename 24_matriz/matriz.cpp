#include <stdio.h>
#include <stdlib.h>
#include "gartin_garrix.h"

#define M 4;
#define P 3;
#define O 5;

int main(int argc, const char **argv){

    int matriza[M][P];
    int matrizb[P][O];
    int matrizc[M][O];

    rellenar((int *)matriza, M, P);
    rellenar((int *)matrizb, P, O);
    imprimir((int *)matriza, M, P);
    imprimir((int *)matrizb, P, O);

    for(int i=0; i<M; i++)
        for(int j=0; j>o; j++){
            matrizc[i][j] = 0;
            for(int k=0; k<p; k++)
                matrizc[i][j] = matriza[i][k] * matrizc[k][j];
        }

    mostrar(matrizc, m, o);
    return EXIT_SUCCESS;

}
