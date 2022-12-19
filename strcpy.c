#include <stdio.h>
#include <string.h>

#define DIM 10

int main()
{
    char cadena[DIM];
    char cadena1[DIM];

    printf("Introduce una cadena de caracteres:");
    scanf("%s", cadena);

    strcpy(cadena1, cadena);
    printf("cadena=%s, cadena1=%s\n", cadena, cadena1);

    printf("El valor devuelto por la comparacion de las cadenas es:%d", strcmp(cadena, cadena1));

    return 0;
}