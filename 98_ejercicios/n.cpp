#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100

int main(){

    int longitud;
    char *puntero = NULL;
    char array[N];

    printf("Dame el nombrete\n");
    scanf(" %s", array);
    longitud = strlen(array);
    printf("%i\n", longitud);
    puntero = (char*) malloc (longitud + 1); //un malloc devuelve un void*

    strncpy(puntero, array, longitud + 1);

    free(puntero);
    return EXIT_SUCCESS;
}




