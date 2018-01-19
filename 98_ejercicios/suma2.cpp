
#include <stdlib.h>
#include <stdio.h>

double suma(double op1, double op2){
    return op1 + op2;
}

int main(){

    double op1, op2;
    printf("Dime tu number: \n");
    scanf(" %2.lf", &op1);
    printf("Dime tu otro number: \n");
    scanf(" %2.lf", &op2);
    printf(" La suma da: %2.lf+%2.lf=%2.lf\n", op1, op2, suma( op1, op2));
    return EXIT_SUCCESS;

}

