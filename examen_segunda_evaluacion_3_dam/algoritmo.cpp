#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100

char palabra[N];
int longi = 0;
char **l;
int num;

int main(){

	printf("cuantas palabras quiere?: \n");
	scanf(" %i", &num);
	printf("Dame una palabra: \n");
	scanf(" %[^\n]", palabra);
	longi = strlen(palabra);

	l=(char **) malloc (sizeof(char*));
	*l = (char*) malloc (longi+1);
	strncpy(*l, palabra, N);

	for (int n=1; n<num; n++){
		printf("Dame otra palabra: \n");
		scanf(" %[^\n]", palabra);
		longi = strlen(palabra);
		l = (char **) realloc(l, (n+1)*sizeof(char *));
		*(l + n) = (char *) malloc (longi + 1);
		strncpy(*(l+n), palabra, N);

		printf("Hola, %s\n", *l);
		printf("Hola, %s\n", *(l+n));
	}

	free(l);
	free(*l);
	for(int c=1; c<num; c++){
		free(*(l+c));
	}
	return EXIT_SUCCESS;
}




