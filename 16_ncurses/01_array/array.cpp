#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define N 0x10

int sacar (int datos, int *cima){

    *cima--;
    return datos[*cima];
}

int meter (int datos, int *cima){

    *cima++;
    return datos[*cima];

}

int main(){


    int pila[N];
    int sigui_pos_libre;
    int entrada, salida;

    while(1){

        entrada=-1;
        printf(": ");
        scanf("%i", entrada);
        __fpurge(stdin);
        if(entrada<0)
            salida = sacar[pila, &sigui_pos_libre];
        else
            pila[N] = meter[pila, sigui_pos_libre];
    }

    return EXIT_SUCCESS;

}
