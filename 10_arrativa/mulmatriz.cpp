#include <stdlib.h>
#include <stdio.h>

void verm1(double a[N][n]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<n; c++)
            printf("2%.lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void verm2(double b[P][p]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<n; c++)
            printf("2%.lf", b[f][c]);
        printf("\n");
    }
    printf("\n");
}


double scanear_a(){

    for(int f=0;f<N;f++)
        for(int c=0;c<n;c++){
            printf("Introduce el numero de la matriz %i, columna %i\n", f+1, c+1);
            scanf("%lf",&(a[f][c]));
        }
    }

double scanear_b(){

    for(int f=0;f<P;f++)
        for(int c=0;c<p;c++){
            printf("Introduce el numero de la matriz %i, columna %i\n", f+1, c+1);
            scanf("%lf",&(b[f][c]));
        }
    }



int main(){

    scanear_a();
    verm1();
    scanear_b();
    verm2();
    return EXIT_SUCCESS;
}




