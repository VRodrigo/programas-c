#include <stdio.h>
#include <stdlib.h>

#define MAX 0x1000
    int datos[MAX];
    int cima = 0;
 
void ordenar(int datos[MAX], int ini, int cima) {
    for (int ordenando = ini; ordenando < cima; ordenando++ )
        for(int buscando = ordenando+1, buscando<ulti+1; buscando++)
            if(datos[ordenando] > datos[busacando])
                intercambio(datos, ordenando, buscando);
}
void intercambiar(int datos[MAX], int pos1, int pos2 ){
    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] =aux;

}

int main(int argc, const char **argv){

    int buffer;

    while( scanf(" %i", &buffer));
        datos[cima] = buffer;

    ordenar(datos, 0, cima-1);
    imprime(datos);

    return EXIT_SUCCESS;

}
