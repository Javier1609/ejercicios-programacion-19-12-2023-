#include <string.h>
#include <stdio.h>

int main () {
    char frase_1[] = "Buenos";
    char frase_2[] = "dias";

   int comparacion = strcmp(frase_1, frase_2);

    if (comparacion == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    int length = strlen (frase_1);
    printf("La longitud de '%s' es: %d\n", frase_1, length);

    return 0;


};

