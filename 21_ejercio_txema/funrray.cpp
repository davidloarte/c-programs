#include <stdlib.h>
#include <stdio.h>

typedef struct{
    double x;
    double y;
}Coordenada;

typedef struct{
    Coordenada vel;
    Coordenada pos;
    Coordenada ace;
    double (*haz) (double, double);
}Barco;

/*double mover_barco(double, double){//declarate dos pos (x,y) porque sino queda cojo y le pones a uno pos.y, pos.x
    Barco *barco;

    barco->pos.x = 2;
    barco->pos.y = 2;
    barco->vel.x = 2;
    barco->vel.y = 1;
    barco->ace.x = 1;
    barco->ace.y = 8;
*/
}

int main(){

    return EXIT_SUCCESS;
}




