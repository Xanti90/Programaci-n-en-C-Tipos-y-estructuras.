#include <stdio.h>
#include <stdlib.h>

#define TAM 3
#define TAM2 2

struct Suma{
	int tabla[TAM];
	int suma;
};

struct Resto{
	struct Suma tabla[TAM2];
	int resto;
};

int main(){
	struct Resto resto;
	int i, j;
	
	for(i=0; i<TAM2; i++){
		for(j=0; j<TAM; j++){
			printf("Introduce un numero: ");
			scanf("%d", &resto.tabla[i].tabla[j]);
		}
	}
	
	for(i=0; i<TAM2; i++){
		resto.tabla[i].suma = 0;
		for(j=0; j<TAM; j++){
			resto.tabla[i].suma += resto.tabla[i].tabla[j];
		}
	}
	
	resto.resto = resto.tabla[0].suma % resto.tabla[1].suma;
	
	printf("\nLa suma de los numeros de la primera tabla es: %d", resto.tabla[0].suma);
	printf("\nLa suma de los numeros de la segunda tabla es: %d", resto.tabla[1].suma);
	printf("\nEl resto de la division de las dos sumas es: %d", resto.resto);
	
	printf("\n\n");
	system("pause");
	return 0;
}