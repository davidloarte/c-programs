#include<stdlib.h>
#include<stdio.h>

int main(){

    char nombre[16];

    printf("Dime tu nombre:");
    scanf(" %s", nombre);

    printf("Hola %s.\n", nombre);

    return EXIT_SUCCESS;
}
