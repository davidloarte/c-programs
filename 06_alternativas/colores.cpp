#include<stdio.h>
#include<stdlib.h>

int main(){
    int rojo;
    int azul;
    int amarillo;

    printf("¿Que colores quierers echar en el lienzo?\n");
    printf("Si quieres echar rojo pon un 1 si no un 0\n");
    scanf(" %i", &rojo);
    printf("Si quieres echar azul pon un 1 si no un 0\n");
    scanf(" %i", &azul);
    printf("Si quieres echar amarillo pon un 1 si no un 0\n");
    scanf(" %i", &amarillo);

    if (rojo==1)
        if (azul==1)
            if (amarillo==1)
                printf("Obtendras el color blanco\n");
            else
                printf("Obtendras el color morado\n");
        else
            printf("Obtendras el color rojo\n");
    else
        if (azul==1)
            if (amarillo==1)
                printf("Obtendras el color verde\n");
            else
                printf("Obtendras el color azul\n");
        else
            printf("Obtendras el color negro\n");
    else
        printf("Obtendras el color amarillo\n");
    return EXIT_SUCCESS;
}
}

// sin terminar falta naranja
