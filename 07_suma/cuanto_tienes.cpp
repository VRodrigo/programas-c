#include <stdio.h>
#include <stdlib.h>

int main(){
    int saldo;
    int mes, anio;

    const char *meses[12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    };

    printf("¿Cuanto dinero tienes?\n");
    printf("yo=<cantidad>\n");

    scanf("yo=%i", &saldo);
    printf ("saldo: %i\n", saldo);

    printf("Fecha de nacimento(dd/mm/aa):");
    scanf(" %*i/%i/%i", &mes, &anio);
    //El * es el caracter de supresion de asignacion.

    printf("Naciste en %s de %i.\n",meses[mes-1], anio);

    return EXIT_SUCCESS;

}
