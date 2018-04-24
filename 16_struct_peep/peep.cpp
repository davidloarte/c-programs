#include <stdlib.h>
#include <stdio.h>

#define N 6

typedef struct TEmpleado {
    int id;
    int saldo;
    double sueldo;
    char name[N];
} Empleado;

int main(){

    Empleado jefe = { 27, -13, 23.5, "Ramon" };
    void *p = (void *) &jefe; /*porque no quieres acceder a los campos solo a la dirección de memoria  (void *) */

    printf("jefe reside en %p", p); // para que nos de la direccion
    for (int i=0; i<sizeof(jefe); i++)
        printf(" %X", *((char *)p+i); /*char es para indicar el bite no se usa int   esto es aritmetica de punteros */
    printf("\n");

    return EXIT_SUCCESS;
}




