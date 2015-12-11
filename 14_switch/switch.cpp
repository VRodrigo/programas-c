#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 1;

    switch(numero){
        case 1:
            numero += 2;
        case 2:
            printf("%i\n", numero);
            break;
    }

    return EXIT_SUCCESS;

}
