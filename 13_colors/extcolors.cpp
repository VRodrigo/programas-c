#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//El programa pregunta colores
//preguntamos el usuario si su color tiene rojo
//preguntamos si su color tiene azul
//se le dice su color

int main(){

    char respuesta;
    int rojo = 0,
        azul = 0,
        amarillo = 0;

    //Preguntamos sio el color tiene rojo
    printf("¿Tiene el rojo su color?(s/n)");
    scanf(" %c", &respuesta);
    if (respuesta == 's')
        rojo += respuesta;
    //Preguntamos si el color tiene azul
    printf("¿Tiene el azul su color?(s/n):");
    //El usuario responde con si o no
    scanf(" %c", &respuesta);
    if (respuesta == 's')
       azul+= respuesta;
    printf("¿Tiene el amarillo su color?(s/n)");
    scanf(" %c", &respuesta);
    if (respuesta == 's')
       amarillo += respuesta;

    if(rojo)
        if(azul)
            if(amarillo)
                printf("Blanco");
            else
                printf("morado");

        else
            if(amarillo)
                printf("Naranja");
            else
                printf("Rojo");
    else
        if(azul)
            if(amarillo)
                printf("Verde");
            else
                printf("Azul");
        else
            if(amarillo)
                printf("Amarillo");
            else
                printf("Negro");

    printf("\n");

    return EXIT_SUCCESS;

}
