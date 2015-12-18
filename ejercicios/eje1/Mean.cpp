#include <stdio.h>
#include <stdlib.h>
/* MEDIA
 * introducir los numeros
 * hacer la media
 * mostrarla*/

int main(){
    double num;
    double suma;
    double resultado;


    //pegunto nuemro 1
    printf("Numero 1: ");
    scanf(" %lf", &num);
    suma = num;
    num = 0;

    //pegunto nuemro 2
    printf("Numero 2: ");
    scanf(" %lf", &num);
    suma +=num;
    num = 0;

    //pegunto nuemro 3
    printf("Numero 3: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 4
    printf("Numero 4: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 5
    printf("Numero 5: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 6
    printf("Numero 6: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 7
    printf("Numero 1: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 8
    printf("Numero 8: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 9
    printf("Numero 9: ");
    scanf(" %lf", &num);
    suma += num;
    num = 0;

    //pegunto nuemro 10
    printf("Numero 10: ");
    scanf(" %lf", &num);
    suma += num;

    resultado = suma / 10;

    printf("Media: %f\n", resultado);

    return EXIT_SUCCESS;

}
