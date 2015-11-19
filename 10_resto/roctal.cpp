#include <stdio.h>
#include <stdlib.h>



    // 1.-  Pregunta¿? a usuario un numero entre 0 - 999
    // 2.-  Introduce numero entre 0 - 999
    // 3.-  usuario mete 456 pej.
    // 4.-  imprimo numero 6 en octal
    // 5.-  imprimo numero 5 en octal
    // 6.-  imprimo numero 4 en octal
    // 7.-  guardo en variable
    // 8.-  imprimo numero 4 en cotal
    // 9.-  imprimo numero 5 en octal
    // 10.- imprimo numero 6 en octal
    // 11.- imprimo numero resltado

int main(){

    int entrada;

    //1.- preugunto el numero del usuario entre 0 - 999
    printf("Introduce un numero entre 0 - 500: ");
    //2.- Intoduce numero de ENTRADA el usuario
    scanf(" %i", &entrada);
    //    OCTAL
    //3.- imrpimo el ultimo digito
    printf("%i", entrada % 8);
    //4.- desplazo todos los numero una posicion a la der.
    entrada /= 8;
    //5.- imprimo el ultimo digito
    printf("%i", entrada % 8);
    //6.- desplazo todos los numero una posicion a la der.
    entrada /= 8;
    //7.- imprimo el ultimo digito
    printf("%i\n", entrada % 8);
    //8.- guardo resultado en la variable REVES
    //    REVES
    //9.- imrpimo utimo numero
    printf("%i", entrada % 10);
    //10.-desplazo todos los numero a la derecha 
    entrada /= 10;
    //11.-imrpimo umtimo numero
    printf("%i", entrada % 10);
    //12.-desplazo todos los numero a la derecha
    entrada /= 10;
    //13.-imprimo ultimo numero
    printf("%i\n", entrada % 10);
    
    return EXIT_SUCCESS;

}
