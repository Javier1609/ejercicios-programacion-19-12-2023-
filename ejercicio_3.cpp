#include <stdio.h>

int main() {

    FILE *archivo;
    archivo = fopen("archivo.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }


    fprintf(archivo, "Hola, este es un ejemplo.\n");



    fclose(archivo);

    archivo = fopen("archivo.txt", "r");


    if (archivo == NULL) {
        printf("Error al abrir el archivo para lectura.\n");
        return 1;
    }

    char buffer[100];

    while (fscanf(archivo, "%99[^\n]\n", buffer) != EOF) {
        printf("%s\n", buffer);
    }

    fclose(archivo);

}
