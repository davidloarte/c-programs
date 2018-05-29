#include <stdlib.h>
#include <stdio.h>

bool tiene_un_divisor(int dividendo, int posible_divisor){
    printf("El divisor actual es: %i\n", posible_divisor);
    if (dividendo % posible_divisor == 0 && posible_divisor > 1)
        return true;
    else
        printf("El numero %i no tiene divisor\n", dividendo);

    return tiene_un_divisor( dividendo, posible_divisor -1);
}

int main(){

    if (tiene_un_divisor(8, 7))
        printf("El numero 8 tiene, al menos, un divisor.\n");

    return EXIT_SUCCESS;
}




