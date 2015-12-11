#include <stdio.h>
#include <stdlib.h>

int main(){

    int input1, input2;
    int copia;

    printf("Numero 1: ");
    scanf(" %i", &input1);
    printf("Numero 2: ");
    scanf(" %i", &input2);

    if (input2 > input1){
        copia = input2;
        input2 = input1;
        input1 = copia;
    }

    printf("%i\n", input1);
    printf("%i\n", input2);


    return EXIT_SUCCESS;

}
