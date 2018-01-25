#include <stdlib.h>
#include <stdio.h>

#define N 3

int a[N][N] = {
    {1,4,6},
    {7,2,5},
    {9,8,3}
};

int derecha(){
    for (int y=0; y<N; y++){
        for (int x=0; x<N; x++)
            return printf("%4i", a[x%N][(y+x)%N]);
                   printf("\n");
        }
}

int main(){

   derecha();

   printf("\n");
   return EXIT_SUCCESS;
}







