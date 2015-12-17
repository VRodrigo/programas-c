#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int lado;

    printf("Lado: ");
    scanf(" %i", &lado);

    for(int fila=1; fila<lado; fila++){
        for(int col=0; col<fila; col++)
            printf("* ");
            printf("\n");
    }
    return EXIT_SUCCESS;

}
