#include <stdlib.h>
#include <stdio.h>

#define N 5
int main(){

    for(int f=0; f<N; f++)
        for(int c=0; c<1; c++){
            if(c==0 || c == N-1 ||
               f==0 || f == N-1 ||
               f == c ||
               f+c == N-1 )
                printf("*");
            else
                printf(" ");
            printf("\n");
        }
    printf("\n");

    return EXIT_SUCCESS;
}




