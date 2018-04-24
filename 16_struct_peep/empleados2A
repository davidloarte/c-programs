#include <stdlib.h>
#include <stdio.h>

#define N 0x10

typedef struct TEmpleado {
    char nombre[N];
    char puesto[N];
    double salario;
} Empleado;

void rellena(Empleado *nuevo){
    printf("Nombre: ");
    scanf(" %s", nuevo ->nombre);
    printf("puesto: ");
    scanf(" %s", nuevo ->puesto);
    printf("Salario: ");
    scanf(" %lf", &nuevo ->salario);
}

    void imprime(Empleado empleado){
        printf("------------------\n"
                "%s / %s [%2.lf$]\n", empleado.nombre, empleado.puesto, empleado.salario );
    }

int main(){

    Empleado *primer = NULL;
    primer = (Empleado *) malloc (sizeof(Empleado));
    rellena(primer);

    primer = (Empleado *) realloc(primer, 2*sizeof(Empleado));
    rellena(primer+1);
    imprime(*primer);
    imprime(*(primer+1));

    free(primer);

    return EXIT_SUCCESS;
}




