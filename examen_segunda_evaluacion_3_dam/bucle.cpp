#include<stdlib.h>
#include<stdio.h>
//#include<string.h>

int main(){

    double numero;

    do {
        printf("Dime un numero del 1 al 5:\n");
        scanf(" %2.lf", &numero);
    }
    while( numero < 1 || numero > 5);
    return EXIT_SUCCESS;
}
