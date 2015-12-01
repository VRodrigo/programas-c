#include <stdio.h>
#include <stdlib.h>

//como resultado el progrma combia los numeros introducidos de operador

//Realiza la operacion logica xor 3 veces
//-introduce 2 numeros
//-haz las 3 operaciones
//-muiestra por pantalla el resultado




int main(){

    int operando1,
        operando2;
    //ALOGORITMO
    //
    //- Introduce el OPERANDO1
    printf("operando 1: ");
    //- El usario itroduce el numero
    scanf(" %i", &operando1);
    //- Introduce el OPERANDO2
    printf("operando 2: ");
    //- El usuario introduce el numero
    scanf(" %i", &operando2);
    //- realizamos la operacion xor del OPERANDO1 y el OPERANDO2 y la guardamos en OPERANDO1
    operando1 = operando1 ^ operando2;
    //- realizamos la operacion xor del OPERANDO1 y el OPERANDO2 y la guardamos en OPERANDO2
    operando2 = operando1 ^ operando2;
    //- realizamos la operacion xor del OPERANDO1 y el OPERANDO2 y la guardamos en OPERANDO1
    operando1 = operando1 ^ operando2;
    //- mostrar por pantalla el OPERANDO1
    printf("%i\n", operando1);
    //- mostrar por pantalla el OPERANDO2
    printf("%i\n", operando2);

    return EXIT_SUCCESS;

}
