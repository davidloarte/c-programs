
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

#define N 0x26
int main(){
    char nombre[N];
    int lista[N];

    char no_[N] = {'p', 'e', 'p', 'e', '\0'}; // es lo mismo
    char nom[N] = "pepe";

    nom[3] = 'a'; // despues de inicializar hay que ir celda a celda (verso a verso)

    printf("Nombre ocupa: %lu bytes.\n", sizeof(nombre));
    printf("Nombre ocupa: %i bytes.\n",(int) sizeof(nombre));
    printf("Nombre ocupa: %xh bytes.\n",(int) sizeof(nombre));

    printf("Lista ocupa: %lu bytes.\n", sizeof(lista) / sizeof(int));

    printf("%c", nombre[0]);
    printf("%c", nombre[1]);
    printf("%c", nombre[2]);
    printf("%c", nombre[3]);
    printf("%c", nombre[4]);
    printf("%c", nombre[5]);

    printf("\n");
    printf("%s\n", nombre);

    bzero(lista, sizeof(lista)); // para llenar todos los espacios de memoria de ceros

    memset(lista + 1, 3, 3);  // que quieres llenar, de que bites, cuantos llenas que +2 celdas. se llama aritmetica de enteros
    printf("%x.", lista[0]);
    printf("%x.", lista[1]);
    printf("%x.", lista[2]);
    printf("%x.", lista[3]);
    printf("%x.", lista[4]);
    printf("%x.", lista[5]);

    printf("\n");

    printf("Dime tu nombre: ");
    fgets(nombre, N, stdin); // coge N caracteres del tubo del teclado stdin y lo guarda en nombre.  nombre a demás lo que contiene es la direccion de memoria
    sprinf(non, "Hola, %s", nombre) // en vez de imprimir en la pantalla lo imprime en una dirección de memoria
    printf("Hola, %s", nombre);


    //strpy (destino,src)
    //strcat(destino,src)
    return EXIT_SUCCESS;

// identificador - Direccion de memoria - tamaño - tipo -----> todo de las variables
}




