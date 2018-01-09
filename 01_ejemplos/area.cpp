#include <stdio.h>
#include <stdlib.h>

int main(){
    int lado, area, perimetro;

    system("toilet --gay -fpagga CUADRADO");

    //entrada de datos
    printf("Lado: ");
    scanf(" %i", &lado);

    // calculos       se lllaman expresiones    las expresiones tienen variables, constantes y operadores.
    area = lado * lado;
    perimetro = 4 * lado;
    // las expresiones se calculan por podas y funcionan de abajo a arriba. cuando empiza a "podar" se llama evaluar
    // si no guardamos los valores resultado con un igual =  no se guargan los resultados que ejecuta el microprocesador.
    // el igual asigna el valor de la derecha a lo que hay a la izquierda

    /*salida de datos*/
    printf("Area: %i\n"
           "Perimetro: %i\n",
            area, perimetro );
    return EXIT_SUCCESS;
}
