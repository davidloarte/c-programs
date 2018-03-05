#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
int main () {

    char **l = NULL;
    char nombre[N] ;
    int len;
    int veces;

    printf("Cuantos nombres quieres?: \n");
    scanf(" %i", &veces);

    printf("dime tu nombre\n");
    scanf(" %s", nombre);
    len = strlen(nombre);

    l = (char**) malloc(sizeof(char*));

    printf("La longitud es: %i\n", len);
    *l = (char*)malloc(len + 1);
    strncpy(*l, nombre, len + 1);


    for( int c = 0 ; c< veces ; c++ ){
        printf("dime tu nombre\n");
        scanf(" %s", nombre);
        len = strlen(nombre);

        l = (char**) realloc(l, c*sizeof(char*));

        *(l+c) = (char*)malloc(len + 1);
        strncpy(*(l+c), nombre, len + 1);
        printf(" HOLA, %s\n", *l);
        printf(" HOLA, %s\n", *(l+1));


    }


    for (int c= 0 ; c < veces ; c++)
        free(*(l+c));

    free(l);
    return 0;
}


