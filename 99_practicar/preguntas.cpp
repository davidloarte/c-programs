#include<stdlib.h>
#include<stdio.h>

int main(){

    int edad;
    char nombre[16];
    char apellido1[16];
    char apellido2[16];

    printf("Hola buenos días soy Paco. .\n ¿Me puedes indicar tu nombre? ");
    scanf(" %s", nombre);
    printf("No te olvides de los apellidos ");
    scanf(" %s %s", apellido1, apellido2);

    printf("Y ¿cual es tú edad? ");
    scanf(" %i",&edad);

    printf("Bienbenido al programa, %s %s .\n", nombre, apellido1);






    return EXIT_SUCCESS;
}
