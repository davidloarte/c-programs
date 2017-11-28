#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

    const char *p = "The world is ";  // Constante tipo cadena

    char frase[N] = "a vampire.\n"; // Inicializaci�n
    char *d = frase;

    d = &frase[2];

    frase[2] == 'v';  // Notaci�n de matrices
    *d == 'v';        // Notaci�n de punteros
    *(d+2) == 'm';    // El 2 est� en aritm�tica de punteros.
    *d + 2 == 'x';    // El valor de lo que apunta d + 2.
    printf(" d ocupa %lu bytes.\n", sizeof(d));

    return EXIT_SUCCESS;
}





