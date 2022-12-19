#include <stdio.h>

#define DIM 6

int main ()
{
    int tabla[DIM];
    int resto;

    double media1;
    double media2;

    printf("Introduce el primer número:");
    scanf("%d", &tabla[0]);

    printf("Introduce el segundo número:");
    scanf("%d", &tabla[1]);

    printf("Introduce el tercer número:");
    scanf("%d", &tabla[2]);

    printf("Introduce el cuarto número:");
    scanf("%d", &tabla[3]);

    printf("Introduce el quinto número:");
    scanf("%d", &tabla[4]);

    printf("Introduce el sexto número:");
    scanf("%d", &tabla[5]);

    media1 = (tabla[0] + tabla[2] + tabla[4]) / 3;
    printf("La media de los números %d, %d y %d es %lf\n", tabla[0] ,tabla[2], tabla[4], media1);

     media2 = (tabla[1] + tabla[3] + tabla[5]) / 3;
    printf("La media de los números %d, %d y %d es %lf\n", tabla[1], tabla[3], tabla[5], media2);

    resto = (tabla[5] % tabla[0]);
    printf("El resto de la división de %d y %d es %d\n", tabla[5], tabla[0], resto);

    return (0);
}
