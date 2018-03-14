#include<stdlib.h>
#include<stdio.h>
//#include<string.h>

#define N 3

int main(){

	double a[N] = {2, 1, 3};
	double b[N] = {4, 5, 6};

	double suma = 0;
	double multiplicacion = 0;

	for(int n=0; n<N; n++){
		multiplicacion = a[n] * b[n];
		suma += multiplicacion;

	}

	printf("La suma total es: %.2lf\n", suma);

	return EXIT_SUCCESS;
}
