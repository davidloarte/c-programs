#include <stdio.h>
#include <stdlib.h>

int main(){
    double lado, area, perimetro;

    system("toilet --gay -fpagga CUADRADO");

    printf("Lado: ");
    scanf(" %lf", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    printf("Area: %lf\n"
            "Perimetro %lf\n",
            area, perimetro );
    return EXIT_SUCCESS;
}
