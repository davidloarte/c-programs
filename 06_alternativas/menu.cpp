#include<stdio.h>
#include<stdlib.h>

#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5

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
    scanf(" %u", &option);

    switch(option){
          case 1:
        printf("△"); // ctrl+mays+u y luego 25b3
        break;
          case 2:
        printf("☐"); // ctrl+mays+u y luego 2610
        break;
          case 3:
        printf("▱"); // ctrl+mays+u y luego 25B1
        break;
          case 4:
        printf("⬠"); // ctrl+mays+u y luego 2B20
        break;
          case 5:
        printf("○"); // ctrl+mays+u y luego 25c3
        break;

    }

    return EXIT_SUCCESS;
}
