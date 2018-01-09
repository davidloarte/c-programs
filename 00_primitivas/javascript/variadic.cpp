#include <stdio.h>
#include <stdlib.h>  // # directiva de preproceso

int main(){

    int op1 = 7;
    int op2;

    printf("Operando 2: ");
    scanf(" %i", &op2);

    printf("%i + %i = %i\n", op1, op2, op1 + op2);
    return EXIT_SUCCESS;
}

// un programa
// 1 preprecesados que quita todos los espacios
// 2.1 la funcion main es llamada por el sistema operativo
// 2.2 El return devuelve un 0 en caso de que todo ha ido bien y un numero diferente si no ha ido bien
// %i especificador de formato
// scanf lee del teclado que es el tubo 0 o tubo stdinput
// & direccion de 
