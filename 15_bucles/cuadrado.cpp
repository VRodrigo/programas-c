#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado = 0;

    printf("Lado: ");
    scanf( " %i", &lado);
    for (int f=1; f<lado; f++){
        for(int c=0; c<lado; c++)
        if(f>c)
            printf("O ");
        else
            printf("* ");
            printf("\n");
    }

    return EXIT_SUCCESS;

}
