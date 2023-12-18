#include <stdlib.h>
#include <stdio.h>
#include <time.h>

 int main () {
     srand(time(0));

    int numero_1 = -3;
    int numero_2 = -2;
    int numero_aleatorio = rand();


    int numero_1_absoluto = abs(numero_1);
    int numero_2_absoluto = abs(numero_2);
    int numero_aleatorio_absoluto = abs(numero_aleatorio);

    printf("El valor absoluto de %d es %d\n", numero_1, numero_1_absoluto);
    printf("El valor absoluto de %d es %d\n", numero_2, numero_2_absoluto);
    printf("El valor absoluto de %d es %d\n", numero_aleatorio, numero_aleatorio_absoluto);
};