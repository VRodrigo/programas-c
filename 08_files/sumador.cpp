#include <stdio.h>
#include <stdlib.h>
//no variable globales o me quedo sin cojones
int main(){
    int resultado = 0;
    int numeros;
    FILE *pf;

    /*escanea el archivo*/
    pf = fopen ("hello.txt", "r");
    while (!feof(pf)){
       fscanf(pf, " %i", &numeros);
       resultado += numeros;
    }
    fclose(pf);

    printf("%i\n", resultado);

    return EXIT_SUCCESS;

}
