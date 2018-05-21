#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *mi_tubo;

    mi_tubo = fopen("a.txt", "w");

    fprintf(mi_tubo, "Hola chache.\n");

    fclose(mi_tubo); // hay que cerrar los tubos
    return EXIT_SUCCESS;
}




