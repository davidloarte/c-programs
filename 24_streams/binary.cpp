#include <stdlib.h>
#include <stdio.h>

int main(){
    int num = 0x1234;

    FILE *pf = fopen("b.int", "w");
    fwrite(&num, sizeof(int), 1, pf);

    fclose(pf);

    return EXIT_SUCCESS;
}




