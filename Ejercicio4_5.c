#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTIDAS 3
#define MAX_JUGADORES 2

typedef struct {
	int asesinatos;
	int muertes;
	int asistencias;
} t_partida;

typedef struct {
	char nombre[20];
	t_partida partidas[MAX_PARTIDAS];
} t_jugador;


int main() {
	t_jugador jugadores[MAX_JUGADORES];
	int i, j;
	float kda;
	float media;
	
	for (i = 0; i < MAX_JUGADORES; i++) {
		printf("Introduce el nombre del jugador %d: ", i + 1);
		scanf("%s", jugadores[i].nombre);
		for (j = 0; j < MAX_PARTIDAS; j++) {
			printf("Introduce los asesinatos de la partida %d: ", j + 1);
			scanf("%d", &jugadores[i].partidas[j].asesinatos);
			printf("Introduce las muertes de la partida %d: ", j + 1);
			scanf("%d", &jugadores[i].partidas[j].muertes);
			printf("Introduce las asistencias de la partida %d: ", j + 1);
			scanf("%d", &jugadores[i].partidas[j].asistencias);
		}
	}
	
	for (i = 0; i < MAX_JUGADORES; i++) {
		media = 0;
		for (j = 0; j < MAX_PARTIDAS; j++) {
			kda = (float) (jugadores[i].partidas[j].asesinatos + jugadores[i].partidas[j].asistencias) / jugadores[i].partidas[j].muertes;
			media += kda;
		}
		media /= MAX_PARTIDAS;
		printf("El jugador %s tiene una media de KDA ratio de %.2f\n", jugadores[i].nombre, media);
	}
	
	return 0;
}