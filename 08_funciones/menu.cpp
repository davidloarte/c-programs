#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define cok 1
#define agu 2
#define bco 3
#define bmc 4
#define pnr 5
#define pgj 6
#define mcf 7
#define san 8

int main(){

    unsigned opcion;
    system("toilet --gay -fpagga Menu");

    printf(
            "Elige la bebida:\n"
            "\n"
            "\t1. Cocacola.\n"
            "\t2. Agua.\n"
            "\n"
            "\tOpcion:"
          );
    scanf(" %u", &opcion);

    unsigned opcion2;

    printf(
            "Elige la comida:\n"
            "\n"
            "\t1. Chiken Bacon Onion.\n"
            "\t2. Big Mac.\n"
            "\n"
            "\tOpción:"
          );
    scanf(" %u", &opcion2);

    unsigned opcion3;

    printf(
            "Elige las patatas:\n"
            "\n"
            "\t1. Patatas normales.\n"
            "\t2. Patatas gajo.\n"
            "\n"
            "\tOpcion:"
          );
    scanf(" %u", &opcion3);

    unsigned opcion4;

    printf(
            "Elige el postre:\n"
            "\n"
            "\t1. McFurry.\n"
            "\t2. Sandy.\n"
            "\n"
            "\tOpcion:"
          );
    scanf(" %u", &opcion4);

    switch(opcion){
        case cok:
            printf("Escogiste cocacola.\n");
            break;
        case agu:
            printf("Escogiste agua.\n");
            break;
    }

    switch(opcion2){
        case cok:
            printf("Escogiste la Chiken Bacon Onion.\n");
            break;
        case agu:
            printf("Escogiste la Big Mac.\n");
            break;
    }

    switch(opcion3){
        case cok:
            printf("Escogiste patatas normales.\n");
            break;
        case agu:
            printf("Escogiste patatas gajo.\n");
            break;
    }

    switch(opcion4){
        case cok:
            printf("Escogiste McFurry.\n");
            break;
        case agu:
            printf("Escogiste el Sandy.\n");
            break;
    }

return EXIT_SUCCESS;

}

