#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0X100
int main(){
    char **l;
    char nombre[N];
    int len;

    printf("dime tu nombre\n");
    scanf(" %s", nombre);
    len = strlen(nombre);

    l = (char**) malloc(sizeof(char*));

    printf("La longitud es: %i\n", len);
    *l = (char*)malloc(len + 1);
    strncpy(*l, nombre, len + 1);

    printf("dime tu nombre\n");
    scanf(" %s", nombre);
    len = strlen(nombre);

    l = (char**) realloc(l, 2*sizeof(char*));

    *(l+1) = (char*)malloc(len + 1);
    strncpy(*(l+1), nombre, len + 1);
    printf(" HOLA, %s\n", *l);
    printf(" HOLA, %s\n", *(l+1));

    free(*(l+1));
    free(l);
    free(*l);
    return EXIT_SUCCESS;
}
//hacer una lista de 5 nombres y que lo almacene de esta manera y luego lo imprima.



