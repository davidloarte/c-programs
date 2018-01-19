#include <stdlib.h>
#include <stdio.h>

int main(){

    int i, l;

    printf("Indicame el lado del triangulo: ");
    scanf(" %i", &l);

    for(int i=1; i<=l; i++){
        for(int c=0;c < l-i; c++ )
            printf("*");
        printf("\n");

    }
    return EXIT_SUCCESS;
}




