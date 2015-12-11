#include <stdio.h>
#include <stdlib.h>

//El programa pregunta colores
//preguntamos el usuario si su color tiene rojo
//preguntamos si su color tiene azul
//se le dice su color

int main(){

    int rojo = 0,
        azul = 0;

    //Preguntamos sio el color tiene rojo
    printf("¿Tiene el rojo su color?(s/n):");
    //El usuario responde con si o no
    scanf(" %i", &rojo);
    //Preguntamos si el color tiene azul
    printf("¿Tiene el azul su color?(s/n):");
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
