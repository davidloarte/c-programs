
// Este programa no funciona de estamanera pero si se sustituyen los ([1-0]) por i si que funciona

#include <stdlib.h>
#include <stdio.h>

int main(){

    int bit1;
    int bit2;

    printf("Me puedes indicar el primer bit?(solo valen ceros y unos)\n");
    scanf(" %[0-1]", &bit1);
    printf("Indicame tambien el valor del segundo bit (acuerdate de en 0 y 1)\n");
    scanf(" %[0-1]", &bit2);

    if (bit1 == 0 ){
        if (bit2 == 0){
            printf("El valor en 0\n");
        }
          else
          printf("El valor es 1\n");
    } else
        if (bit2 == 0){
             printf("El valor es 2\n");
        } else
           printf("El valor es 3\n");

          return EXIT_SUCCESS;
}


