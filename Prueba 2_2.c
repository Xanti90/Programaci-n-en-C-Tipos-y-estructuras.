#include <stdio.h>

int main ()
{
    char    car1;
    char    car2;
    int     suma;

    printf("Por favor, introduce el primer caracter:");
    scanf("%c", &car1);

    printf("Por favor, introduce otro caracter:");
    scanf(" %c", &car2);

     suma = car1 + car2;
     printf("Si sumamos el código ASCII del carácter %c que es %i con el codigo ASCII del carácter %c que es %i obtenemos el número %i", car1, car1, car2, car2, suma);

     return (0);
}