#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;

    FILE *pf = fopen("b.int", "rb");
    fread(&num, sizeof(int), 1, pf);
    fclose(pf);

    printf("He leido: %i (%Xh)\n", num, num);


    return EXIT_SUCCESS;
}




