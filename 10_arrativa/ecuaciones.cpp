#include <stdlib.h>
#include <stdio.h>

#define N 2
#define n 3

void verm(double m[N][n]){
    printf("\n");
    for (int f=0; f<N; f++){
        for(int c=0; c<n; c++)
            printf("%2.lf", m[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){

    double xa, ya, ra, xb, yb, rb;

    printf("Introduce la x de la primera ecuacion.\n");
    scanf(" %lf", &xa);
    printf("Introduce la y de la segunda ecuacion.\n");
    scanf(" %lf", &ya);
    printf("Introduce el resultado de la primera ecuación.\n");
    scanf(" %lf", &ra);
    printf("Introduce la x de la segunda ecuacion.\n");
    scanf(" %lf", &xb);
    printf("Introduce la y de la segunda ecuación.\n");
    scanf(" %lf", &yb);
    printf("Introduce el resultado de la segunda ecuacion.\n");
    scanf(" %lf", &rb);

    double m[N][n]={
        {xa,ya,ra},
        {xb,yb,rb}
    },
        coef[N], k;
    int cuenta =0;

    for(int a=0; a<N; a++){
        coef[cuenta++] = k = m[a][a];
        for(int col=0; col<n; col++)
            m[a][col] /=k;
        for(int fil=n+1; fil<N; fil++){
            k = m[fil][n];
            for (int col=0; col<n; col++)
                m[fil][col] -= (m[N][col] * k);
        }
        verm(m);
    }

    double resultadoy, resultadox;

    resultadoy = m[1][2];
    resultadox = (ra - resultadoy*ya)/xa;
/*  resultadox = (m[0][2] -= m[1][2]);*/

    printf("El resultado de las escuaciones es para 'x': %2.lf y para 'y': es %2.lf.\n", resultadox, resultadoy);
    return EXIT_SUCCESS;
}




