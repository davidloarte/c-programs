
#include <stdlib.h>
#include <stdio.h>

int main(){

    int numero;
    printf("Número:");
    scanf(" %i", &numero);

    if(numero % 2 == 0){
        printf("El numero %i es par.\n", numero);
        printf("Y los pares me gustan. \n");
    }
    else
        printf ("El número %i es impar de mierda\n", numero);

    return EXIT_SUCCESS;


}




