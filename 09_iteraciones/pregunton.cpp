#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>

#define MAX 3
int main(){

    double numero;
    int oportunidades = MAX;

    do {
      __fpurge(stdin);
      printf("Dime un numero del 1 al 3:\n");
      scanf(" %lf", &numero);
      oportunidades--;
    }
    while((numero<1 || numero>3) && oportunidades);

    return EXIT_SUCCESS;

}

