#include <stdlib.h>
#include <stdio.h>

#define N 3

int main(){

    int a[N][N] = {
        {1,4,6},
        {7,2,5},
        {9,8,3}
    };
    for (int desplaz=0; desplaz<N; desplaz++){
        for (int elemen=0; elemen<N; elemen++)
            printf("%4i", a[elemen%N][(desplaz+elemen)%N]);
                   printf("\n");
                    }
    return EXIT_SUCCESS;
}




