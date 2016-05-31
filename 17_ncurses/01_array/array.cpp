#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define N 0x10

int sacar(int datos, int *cima){

    (*cima)--;
    return datos[*cima];
}

void meter(int nuevo_dato, int pila[N], int *cima){
    pila[*cima] = nuevo;
    (*cima)++;
}

void mostrar_estado(int pila[N],int cima, int bandeja){
    for(inc=0; inc<cima; inc++)
        printf("Fila  %i = %i\n ",i , pila[i]);
    printf("bandeja = %i\n", bandeja);

}

int main(){


    int pila[N];
    int sigui_pos_libre=0;
    int entrada, salida;

    while(1){

        entrada=-1;
        printf(": ");
        scanf("%i", &entrada);
        __fpurge(stdin);
        if(entrada<0)
            salida = sacar[pila [N], &sigui_pos_libre];
        else
            meter[entrada, pila, &sigui_pos_libre];

        mostrar_estado(pila, sigui_pos_libre, salida);
    }

    return EXIT_SUCCESS;

}
