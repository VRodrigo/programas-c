#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){

    for(int vez=0; vez<80; vez++){
        printf ("8");
        for (int i=0; i<10; i++)
            printf ("=");
        printf("D");
        sleep(1);
    }
    return EXIT_SUCCESS;

}
