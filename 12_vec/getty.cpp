#include <stdlib.h>
#include <stdio.h>

int main(){
    double *vec = NULL;
    double buffer;
    int dim=0;
    char end;

    printf("ej: (1.3 3 2.6).\tVector: ");
    scanf(" %*[()]");
    do{
        vec = (double *) realloc(vec, (dim+1) * sizeof(double));
        scanf(" lf", &buffer);
        vec[dim++] = buffer;
    }while (!scanf(" %1[)]", &end)); //! significa lo contrario

    printf("\n\t(");
    for (int componente=0; componente<dim; componente++)
        printf("%6.2lf", vec[componente]);
    printf(" )\n");

    return EXIT_SUCCESS;
}




