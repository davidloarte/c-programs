#include <stdlib.h>
#include <stdio.h>

#define N 0x10

typedef struct TEmpleado {
    char nombre[N];
    char puesto[N];
    double salario;
    struct TEmpleado *siguiente;
} Empleado;

void rellena(Empleado *nuevo){
    printf("Nombre: ");
    scanf(" %s", nuevo ->nombre);
    printf("puesto: ");
    scanf(" %s", nuevo ->puesto);
    printf("Salario: ");
    scanf(" %lf", &nuevo ->salario);

    nuevo->siguiente = NULL;
}

    void imprime(Empleado empleado){
        printf("------------------\n"
                "%s / %s [%2.lf$]\n", empleado.nombre, empleado.puesto, empleado.salario );
    }

int main(){

    Empleado *primer = NULL;
    primer = (Empleado *) malloc (sizeof(Empleado));
    rellena(primer);

    primer->siguiente = (Empleado *) malloc (sizeof(Empleado));
    rellena(primer -> siguiente);

    primer->siguiente->siguiente = (Empleado *) malloc (sizeof(Empleado));
    rellena(primer->siguiente -> siguiente);


    imprime(*primer);

    free(primer);
    free(primer->siguiente);
    free(primer->siguiente->siguiente);

    return EXIT_SUCCESS;
}
