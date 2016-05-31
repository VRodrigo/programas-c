#include <stdio.h>
#include <stdlib.h>

struct Pila {
    int *data;
    int primera_posicion_libre;
    int n;
};

bool push(struct Pila* pila, int numero){
    printf("PUSH %i\n", numero);
    if (pila->primera_posicion_libre >= pila->n){
        pila->data = (int *) realloc(
                pila->data,
                (pila->primera_posicion_libre + 1) * sizeof(int)
                );
        pila->n = pila->primera_posicion_libre;
    }
    pila->data[pila->primera_posicion_libre++] = numero;
    return true;
}

int pop(struct Pila* pila) {
    printf("POP\n");
    if (pila->primera_posicion_libre <= 0)
        return 0;
    return pila->data[--(pila->primera_posicion_libre)];
}

void iniciar(struct Pila *pila){

    pila->data = NULL;
    pila->n = 0;
    pila->primera_posicion_libre = 0;
}

int main(int argc, const char **argv){

    int resultado;
    char e;

    struct Pila palo[3];
    for(int i=0; i<3; i++)
        iniciar(&palo[i]);

    printf("Elige un palo(1-2-3): ");
    scanf("%c", &e);

    switch(e){
       case '1':
           push(&palo[0], 5);
           push(&palo[0], 7);
           resultado = pop(&palo[0]);
           push(&palo[0], 3);
           printf("Resultado = %i\n", resultado);
           for (int i=0; i<palo[0].primera_posicion_libre; i++)
               printf(" %i", palo[0].data[i]);
           printf("\n");
           break;
       case '2':
           push(&palo[1], 4);
           resultado = pop(&palo[1]);
           push(&palo[1], 3);
           push(&palo[1], 8);
           printf("Resultado = %i\n", resultado);
           for (int i=0; i<palo[1].primera_posicion_libre; i++)
               printf(" %i", palo[1].data[i]);
           printf("\n");
           break;
       case '3':
           push(&palo[2], 5);
           push(&palo[2], 9);
           push(&palo[2], 3);
           for (int i=0; i<palo[2].primera_posicion_libre; i++)
               printf(" %i", palo[2].data[i]);
           printf("\n");
           break;
    }
    free(pila);
    return EXIT_SUCCESS;
}
