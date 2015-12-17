#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,
        num_veces = 0;
    double resultado=0;

    do{
        printf("numero: ");
        scanf(" %i", &num);
        if(num>=0){
            resultado += num;
            num_veces += 1;
        }
    }while(num>=0);

    resultado /= num_veces;

    printf("%.2lf\n", resultado);

    return EXIT_SUCCESS;

}
