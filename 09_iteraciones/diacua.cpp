#include <stdlib.h>
#include <stdio.h>

#define l 4

int main(){

    for(int f=0; f<l;f++){
        for(int t=0; t<l; t++)
            for(int c=t?1:0; c<l; c++)
                if (f== c)
                    printf("*");
                else
                    printf(" ");
        printf("\n")
    }


    return EXIT_SUCCESS;
}




