#include <stdlib.h>
#include <stdio.h>

#define N 6
#define PLANTILLA 2

typedef struct TEmpleado {
    int id;
    int saldo;
    double sueldo;
    char name[N];
} Empleado;

void rellena(Empleado *nuevo){
    printf("Nombre:");
    scanf(" %s", nuevo ->name);
    printf("saldo:");
    scanf(" %i", &nuevo->saldo);
}
int main(){

    Empleado persona[PLANTILLA];
    void imprime(Empleado persona){
        printf("------------------\nNombre: %s\n Saldo: %i\n\n", persona.name, persona.saldo);
    } /*porque no quieres acceder a los campos solo a la dirección de memoria  (void *) */

    /*printf("jefe reside en %p", p);*/ // para que nos de la direccion
    for (int i=0; i<PLANTILLA; i++)
        rellena(&persona[i]);
    for (int i=0; i<PLANTILLA; i++)
        rellena(&persona[i]);
       /* printf(" %X", *((char *)p+i);*/ /*char es para indicar el bite no se usa int   esto es aritmetica de punteros */
    /*printf("\n");*/

    return EXIT_SUCCESS;
}




