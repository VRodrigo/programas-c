#include <stdio.h>
#include <stdlib.h>
#define REPETIR 80

int main(){
    char nombre[20];
    int contador=0;

    printf("Cual es tu nombre: ");
    scanf("%s", &nombre);

    do{
        printf("%s\n", nombre);
        contador += 1;
    }while(contador<REPETIR);
    return EXIT_SUCCESS;

}
