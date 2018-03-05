#include <stdlib.h>
#include <stdio.h>

//Leer la matriz
//Leer cada fila
//leer cada columna
//si estoy en la fila 1 voy contando el total de columnas
//pero si no rellenar con ceros o descartar los de demás
//pasar a la fila siguiente cuando haya un intro y terminar si hay dos

int main(){
    int filas=0, columnas=0;//las colunas totales de la matriz
    int columna = 0; //el numero de col de esta fila
    int last_char = '\0';
    int miradita; //Miro con adelanto si viene '\n'
    bool fin= false;
    int nuevo_num;
    double *matriz = NULL;

    do{

        //pedir un numero y alojarlo en la matriz dinamica
        scanf(" %lf", &nuevo_num);
        if (filas ==0)
            columnas++;
        columna++;
        matriz = (double *) realloc(matriz,
                (filas *columnas + columna) * sizeof(double));
        *(matriz+filas*columnas+columna-1) = nuevo_num;
        //distinguir si estamos cambiando de linea o se ha terminado la matriz
        miradita = getc(stdin);
        if (miradita == '\n'){
            last_char = '\n';
            miradita = getc(stdin);
            if (miradita == '\n'){
                fin = true;
                filas--;
            } else{
                columna = 0;
                for (int c=columna+1; c<columnas;c++)
                    matriz =(double*) realloc(matriz,
                            (filas * columnas +c)*sizeof(double));
                *(matriz + filas *columnas+c-1) = 0;
              }
          
        }
        ungetc(miradita, stdin);

    } while(!fin);

    filas ++;
    for (int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            printf("4.2lf", *(matriz+c+f*columnas));
                //formula de direccionamiento de una matriz
            printf("\n");
    }
    return EXIT_SUCCESS;
}




