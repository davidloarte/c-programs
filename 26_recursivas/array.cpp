#include <stdlib.h>
#include <stdio.h>

#define N 0x10

void leer_frase(char *chars){

    printf("dame una frase:\n");
    fgets(chars, N, stdin);
}

char imprimir(){

    printf("%c", letra);
    if (letra == '\0');
    return EXIT_SUCCESS;

    return letra - 1;
}


int main(){

    char *frase[N];

    leer_frase( *frase);
    char *letra = frase;
    imprimir(letra);

    return EXIT_SUCCESS;
}




