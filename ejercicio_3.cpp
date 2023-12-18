#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    fprintf(file, "prueba 4\n");


    fclose(file);


    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[100];
    fscanf(file, "%s", buffer);

    printf("Leido del archivo: %s\n", buffer);


    fclose(file);

    return 0;
}