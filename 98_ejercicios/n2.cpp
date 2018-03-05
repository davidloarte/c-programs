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

    free(l);
    free(*l);
    return EXIT_SUCCESS;
}




