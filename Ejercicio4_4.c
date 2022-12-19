#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nombre[5][10];
	char campeon[5][10];
	int asesinatos[5];
	int muertes[5];
	int asistencias[5];
	float kda[5];
	int i;
	int asesinatos_total=0;
	int muertes_total=0;
	int asistencias_total=0;
	float kda_total;
	
	for(i=0;i<5;i++){
		printf("DATOS JUGADOR %i\n",i+1);
		printf("¿Cuál es tu nombre de invocador? ");
		scanf("%s",nombre[i]);
		printf("¿Con qué campeón has jugado tu última partida? ");
		scanf("%s",campeon[i]);
		printf("¿Cuántos asesinatos has hecho? ");
		scanf("%i",&asesinatos[i]);
		printf("¿Cuántas veces has muerto? ");
		scanf("%i",&muertes[i]);
		printf("¿Y cuántas asistencias has hecho? ");
		scanf("%i",&asistencias[i]);
		kda[i]=(float)(asesinatos[i]+asistencias[i])/(float)muertes[i];
		printf("%s, tu KDA ratio con %s ha sido %.2f.\n\n",nombre[i],campeon[i],kda[i]);
		asesinatos_total+=asesinatos[i];
		muertes_total+=muertes[i];
		asistencias_total+=asistencias[i];
	}
	
	kda_total=(float)(asesinatos_total+asistencias_total)/(float)muertes_total;
	
	printf("Usuarios %s, %s, %s, %s y %s, el KDA de vuestra partida ha sido %i/%i/%i y su ratio %.2f.\n",nombre[0],nombre[1],nombre[2],nombre[3],nombre[4],asesinatos_total,muertes_total,asistencias_total,kda_total);
	
	return 0;
}