#include <stdio.h>
#include <stdlib.h>

bool impar(int numero){

    if((numero%2) == 0)
        return false;
    return true;
}

int main(int argc, const char **argv){
    int multiplicador = 23;
    int multiplicando = 34;
    int resultado = 0;

    printf("A x B: ");
    scanf(" %i x %i", &multiplicador, &multiplicando);

    while(multiplicador >= 1){
        if(impar(multiplicador))
            resultado += multiplicando;
        multiplicando *= 2;
        multiplicador = multiplicador / 2;
    }

    printf("total: %i\n", resultado);

    return EXIT_SUCCESS;

}
