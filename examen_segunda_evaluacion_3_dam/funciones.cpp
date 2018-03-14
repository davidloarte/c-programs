#include<stdlib.h>
#include<stdio.h>
//#include<string.h>

void recuerda_numeros( int *n1, int *n2){
    printf("damde tus dos numeros mas molones: \n");
    scanf(" %i %i", n1, n2);
}

int main(){

    int v1, v2;

    recuerda_numeros(&v1, &v2);

    return EXIT_SUCCESS;
}
