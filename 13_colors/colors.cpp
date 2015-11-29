#include <stdio.h>
#include <stdlib.h>

//El programa pregunta colores
//preguntamos el usuario si su color tiene rojo
//preguntamos si su color tiene azul
//se le dice su color

int main(){

    int rojo,
        azul;

    //Preguntamos sio el color tiene rojo
    printf("¿Tiene el rojo su color?(si=1, no=0):");
    //El usuario responde con si o no
    scanf(" %i", &rojo);
    //Preguntamos si el color tiene azul
    printf("¿Tiene el azul su color?(si=1, no=0):");
    //El usuario responde con si o no
    scanf(" %i", &azul);

    if(rojo)
        if(azul)
            printf("morado");

        else
            printf("rojo");
    else

        if(azul)
            printf("azul");

        else 
            printf("negro");

    printf("\n");

    return EXIT_SUCCESS;

}
