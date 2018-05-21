#include <stdlib.h>
#include <stdio.h>

#pragma pack(1)

typedef struct{

    char signature[2];
    unsigned int size;
    char reserved1[2];
    char reserved2[2];
    unsigned int data_offset;

} BMPHeader;

void show(BMPHeader header) {
    printf("Signature:            %c%c\n", header.signature[0], header.signature[1]);
    printf("Tamaño:               %i\n", header.size);
    printf("Datos de la imagen:   %i (%Xh)\n", header.data_offset, header.data_offset);


}

int main(){
    const char *filename= "a.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n" );
        return EXIT_FAILURE;
    }

    fread(&header, sizeof(BMPHeader), 1, pbmp);

    fclose(pbmp);

    show(header);

    return EXIT_SUCCESS;
}




