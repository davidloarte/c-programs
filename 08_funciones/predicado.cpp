#include <stdlib.h>
#include <stdio.h>

int es_par(int op1){
    return op1%2;     //tambien se pude usar una negacion logica !(op1 % 2);

}

int main(){

    //int a = es_par(2)? 2 : 3; operador condicional
    //seria : return prueba % 2 ? 0:1;
    //las funciones recursivas son las que se llaman así mismas
    if (es_par(7) == 0){    // con la negación logica no hace falta el ==0
        printf("Es par.\n");}
    else
        printf("Es impar.\n");

    return EXIT_SUCCESS;
}
