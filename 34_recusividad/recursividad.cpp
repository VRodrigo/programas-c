#include <stdio.h>
#include <stdlib.h>

#define N 10

void imprime(const char *palabra){
    if(*palabra == '\0'){
        printf("\n");
        return;
    }
    printf("%s", palabra);
    imprime(palabra-1);

}

int main(int argc, const char **argv){

    imprime(argv[1]);

    return EXIT_SUCCESS;

}
