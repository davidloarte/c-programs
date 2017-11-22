

#include <stdlib.h>
#include <stdio.h>

int main(){

    char nombre[16];
    int num;
    char hexadecimal[16];

    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf("Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);

    //conjunto de seleción inverso
    scanf(" %[^a-f]", hexadecimal);

    scanf(" %[^\n]", nombre);
    fgets(nombre, 16, stdin);

    scanf(" %i/%i/%i", &dia, &mes, &ano); // 23/3/1997
    // caracter de supresión de asignación

    return EXIT_SUCCESS;
}




