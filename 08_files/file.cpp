#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;

    /* creo archivo indicado*/
    pf = fopen ("dragon.txt", "w");

    /*escribe en el archivo creado*/
    fprintf(pf, "hello world");

    fclose(pf)

    return EXIT_SUCCESS;

}
