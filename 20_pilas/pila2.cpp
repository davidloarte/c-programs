#include <stdlib.h>
#include <stdio.h>

#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...)
#endif

#define N 0x100

typedef struct {
    int cima;
    int data[N];
} Pila;

void push(int dato, Pila *cual_pila){
    DEBUG("->%5.i\n", dato);
    cual_pila->data[cual_pila->cima] = dato;
    cual_pila->cima++;
}

int pop(Pila *cual_pila){
    DEBUG("<-%5.i\n", cual_pila->data[cual_pila->cima]);
    cual_pila->cima--;
    return cual_pila->data[cual_pila->cima];
}

int main(){
    Pila numeros;

    numeros.cima = 0;

    push(10, &numeros);
    push(10, &numeros);
    push(10, &numeros);
    push(10, &numeros);

    pop(&numeros);
    pop(&numeros);

    push(10, &numeros);


    return EXIT_SUCCESS;
}




