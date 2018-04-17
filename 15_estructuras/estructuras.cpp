#include <stdlib.h>
#include <stdio.h>

struct Coordenada{
    double x;//no se pueden cambiar el ; por ,
    double y;
};
//importante poner el punto y coma al final porque no es una funcion

int main(){
    int entero;
    struct Coordenada nave = {2., .5}; /* la variable es nave*/

    nave.x = 3.7;/*para acceder a un campo, y estamo redefiniendo su contenido*/ /*todo se copia por valor no por referencia*/


    return EXIT_SUCCESS;
}




