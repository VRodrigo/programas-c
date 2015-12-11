#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numero, pensado;

    printf("Estoy pensado un numero\n");
    printf("Adivinalo\n");

    srand (time (NULL));
    pensado = rand() % 10 + 1;

    do{
        printf("numero: ");
        scanf(" %i", &numero);
    }while( numero != pensado);

    printf("POR FINNNNNNNNNNNNNNNNNNNNNN!!!!!!!!!!!!!!!!!!!!\n");

    return EXIT_SUCCESS;

}
