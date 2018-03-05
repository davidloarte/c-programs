#include <stdlib.h>
#include <stdio.h>

#define M 3
#define N 4

int main(){

    int a[M][N];
    for(int f=0; f<M; f++)
        for(int c=0; c<N; c++){
            printf("valor: ");
            scanf(" %i", &a[f][c]);
        }


    return EXIT_SUCCESS;
}




