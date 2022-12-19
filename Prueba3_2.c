#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];
    int i, j, k;
    char aux;

    printf("Introduce una cadena de caracteres: ");
    scanf("%s", cadena);

    printf("\nLa cadena original es: %s", cadena);
    printf("\nEl tamaño de la cadena es: %lu", strlen(cadena));

    i = 0;
    j = strlen(cadena) - 1;

    while (i < j)
    {
        aux = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = aux;
        i++;
        j--;
    }

    printf("\nLa cadena invertida es: %s\n", cadena);

    return 0;
}