#include <stdlib.h>
#include <stdio.h>

#define X 0
#define Y 1
#define Z 2
#define D 3

int main(){

    double vertice[D];

    //entrada de datos
    printf("(x, y, z): ");
    scanf(" ( %lf, %lf, %lf ) ", &vertice[X], &vertice[Y], &vertice[Z]);

    //salida de datos
    printf(" %.2lf, %.2lf, %.2lf => \t", vertice[X], vertice[Y], vertice[Z]);
    printf("( %.2lf, %.2lf )\n", vertice[X] / vertice[Z],
                               -vertice[Y] / vertice[Z]);


    return EXIT_SUCCESS;


}




