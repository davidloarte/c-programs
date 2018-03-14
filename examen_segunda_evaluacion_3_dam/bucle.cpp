#include<stdlib.h>
#include<stdio.h>
//#include<string.h>


int main(){

	int numero;
	
	do {
	printf("Dime un numero del 1 al 5:\n");
	scanf(" %i", &numero);
	}
	while( numero < 1 || numero > 5);
	return EXIT_SUCCESS;
}
