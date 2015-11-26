#include <stdio.h>
#include <stdlib.h>

int main(){
    //Adivina la adivinanza
    //
    //-Imprimo la adivinanza
    //-usuario responde
    //-correcto / incorrecto
    
    char respuesta[10];
    int correcta; 
    //ALGORITMO
    //
    //Entrada de datos
    //-Titulo
    system("toilet --gay -f pagga 'ADIVINANZA'");
    //-Imprimo la adivinanza
    printf("Oro parece plata no es el que no lo \n"
            "adivine bien tonto es\n");
    //-usuario introduce su respuesta
    printf("¿La respuesta es PLATA?(1=si, 0=no)");
    scanf(" %*i");

    printf("¿La respuesta es PLATANO?(1=si, 0=no)");
    scanf(" %i", &correcta);

    printf("¿La respuesta es ORO?(1=si, 0=no)");
    scanf(" %*i");


    //Procesado
    //-comprueba los datos
    //  - correcta = Bien
    if(correcta)
        printf("BIEN!!!!!");
    //  -Incorrecta = MAl
        else
            printf("Intentalo de nuevo");

    printf("\n");
    return EXIT_SUCCESS;

}
