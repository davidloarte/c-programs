#include<stdlib.h>
#include<stdio.h>
//#include<string.h>

void recuerda_numeros( int *n1, int *n2){
	printf("damde tus dos numeros mas molones: \n");
	scanf(" %i %i", n1, n2);
}

int main(){
	
	recuerda_numeros();	

	return EXIT_SUCCESS;
}
