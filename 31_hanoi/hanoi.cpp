#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_PILA 10
#define MAX_DISCO MAX_PILA
#define PALOS 3

struct Pila {
    int cima;
    int data[MAX_PILA];
};

void inicializar(struct Pila *pila){
    bzero(pila, sizeof (struct Pila));
}

bool change(struct Pila *pila, int dato){

    /* Validación */
    if (dato > MAX_PILA)
        return false;
    if (pila->cima >= MAX_PILA)
        return false;
    if (pila->cima > 0 && dato > pila->data[pila->cima-1])
        return false;

    pila->data[pila->cima++] = dato;
    return true;
}

int pop(struct Pila* pila){
    return pila->data[--pila->cima];
}

bool pinta(int cuanto, char dibujo){
    if(cuanto == 0)
        return false;
    for (int i=0; i<cuanto; i++)
        printf("%c", dibujo);
    return true;
}

int main(int argc, const char **argv){

    int destino, origen;
    struct Pila palo[PALOS];
    int asteriscos, espacios;


    for (int p=0; p<PALOS; p++)
        inicializar(&palo[p]);

    for (int disco=5; disco>0; disco--)
        change(&palo[0], disco);

    while(1){

        system("clear");

        for (int fila=MAX_PILA-1; fila>=0; fila--) {
            for (int n_palo=0; n_palo<PALOS; n_palo++) {
                printf("\t");
                asteriscos = palo[n_palo].data[fila];
                espacios   = MAX_DISCO - asteriscos;
                if (fila >= palo[n_palo].cima){
                   espacios = MAX_DISCO;
                   asteriscos = 0;
                }
                pinta(espacios, ' ');
                pinta(asteriscos, '*');
                printf("|");
                pinta(asteriscos, '*');
                pinta(espacios, ' ');
            }
            printf("\n");
        }

        do {
            printf("\n  origen, destino: ");
            scanf(" %i, %i", &origen, &destino);
        } while(destino > PALOS || destino < 0 );
        change( &palo[--destino], pop(&palo[--origen]));
    }

    return EXIT_SUCCESS;
}
