#include <stdlib.h>
#include <stdio.h>

int a=0;
int b=1;
int c;

int suma(){
    c=a+b;
    a = b;
    b = c;
    return c;
}

int main(){

    for (int d=0; d<10; d++)
        printf("%i\n", suma());


    return EXIT_SUCCESS;
}




