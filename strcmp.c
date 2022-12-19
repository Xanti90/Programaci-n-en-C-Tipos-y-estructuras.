#include <stdio.h>
#include <string.h>

#define DIM 10

int main ()
{
    char cadena[DIM];
    char cadena1[DIM];

    printf("Introduce una cadena:");
    scanf("%s", cadena);

    printf("Introduce otra cadena:");
    scanf("%s", cadena1);

    printf("El valor devuelto por la comparacion de las cadenas es:%d", strcmp(cadena, cadena1));
}