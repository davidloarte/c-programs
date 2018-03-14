#include <stdlib.h>
#include <stdio.h>

int main(){

    double *reserva;

    reserva = (double *) malloc (sizeof (double));
    *reserva = 3.4;
    reserva = (double *) realloc (reserva, 2*sizeof(double));
    *(reserva + 1) = 7.8;

    free(reserva);
    free(reserva + 1);

    return EXIT_SUCCESS;
}




