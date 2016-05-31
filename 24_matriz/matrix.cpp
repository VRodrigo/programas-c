#include <stdio.h>
#include "gartin_garrix."

void rellenar(int *matriz, int filas, int col){

    int entrada;

    printf("Rellena los datos")

    for (int f=0; f<filas; f++)
        for(int c=0; c<col; c++){
            printf("(%i-%i)" f, c);
            scanf("%i", entrada);
            //*(matriz + f*4 +c) = 0; formula de direccionamiento de matriz
            *(matriz + f*col +c) = entrada;
        }
}
