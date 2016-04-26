#include <stdio.h>
#include <stdlib.h>

int calculador_factorial(int n){
    if(n == 0){
        return 1;
    }else
        return n * calculador_factorial(n - 1);
}

int main(){

    int factorial;

    printf("Dime un factorial: ");
    scanf(" %i", &factorial);

    printf("El factiral es: %i\n", calculador_factorial(factorial));

    return EXIT_SUCCESS;

}
