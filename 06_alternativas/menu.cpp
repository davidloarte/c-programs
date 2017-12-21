#include<stdio.h>
#include<stdlib.h>

#define TRI 1
#define CUA 1
#define PAR 1
#define PEN 1
#define CIR 1

int main(){

    unsigned option;
    system("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura:\n"
            "\n"
            "\t1. Triangulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentagono.\n"
            "\t5. Circulo.\n"
            "\n"
            "\tOpción: "
            );
    scanf(" %u", &opcion);

    switch(opcion){
          case TRI:
        printf("△"); // ctrl+mays+u y luego 25b3
          case CUA:
        printf("☐"); // ctrl+mays+u y luego 2610
          case PAr:
        printf("▱"); // ctrl+mays+u y luego 25B1
          case PEN:
        printf("⬠"); // ctrl+mays+u y luego 2B20
          case CIR:
        printf("○"); // ctrl+mays+u y luego 25c3

    }

    return EXIT_SUCCESS;
}
