#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct partida{
	char nombre[20];
	int nivel;
	int experiencia;
	char campeon[20];
	int asesinatos;
	int muertes;
	int asistencias;
};

int main(){
	struct partida partida1;
	float ratio;
	
	printf("Introduce tu nombre de usuario: ");
	scanf("%s", partida1.nombre);
	printf("Introduce tu nivel: ");
	scanf("%i", &partida1.nivel);
	printf("Introduce tu experiencia: ");
	scanf("%i", &partida1.experiencia);
	printf("Introduce el nombre del campeon: ");
	scanf("%s", partida1.campeon);
	printf("Introduce el numero de asesinatos: ");
	scanf("%i", &partida1.asesinatos);
	printf("Introduce el numero de muertes: ");
	scanf("%i", &partida1.muertes);
	printf("Introduce el numero de asistencia: ");
	scanf("%i", &partida1.asistencias);
	
	ratio = (partida1.asesinatos + partida1.asistencias) / (float)partida1.muertes;
	
	printf("\nTu ratio KDA es: %.2f", ratio);
	
	return 0;
}