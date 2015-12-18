#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num;

    const char *list[3] ={
        "bread",
        "toast",
        "bacon"
    };

    printf("Posicion en la lista: ");
    scanf("%i", &num);

    printf("%s\n", list[num-1]);


    return EXIT_SUCCESS;

}
