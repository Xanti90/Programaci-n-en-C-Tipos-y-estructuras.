#include <stdio.h>

int main()		//calcular cuantos euros la hora.
{
  double precio1, precio2, precio3, precio4, precio5;
  double tiempo1, tiempo2, tiempo3, tiempo4, tiempo5;
  double eur_hor;
  double nu_jue;
  

  printf ("Piensa en los últimos juegos que has jugado\n");
  printf ("¿A cuantos juegos has jugado?:");
  scanf ("%lf", &nu_jue);
  
  printf ("¿Cuántas horas le has echado al primero de ellos?:");
  scanf ("%lf", &tiempo1);
  
   printf ("¿Y cuánto te costó?:");
  scanf ("%lf", &precio1);

 printf ("¿Cuántas horas le has echado al segundo de ellos?:");
  scanf ("%lf", &tiempo2);
  
   printf ("¿Y cuánto te costó?:");
  scanf ("%lf", &precio2);

 printf ("¿Cuántas horas le has echado al tercero de ellos?:");
  scanf ("%lf", &tiempo3);
  
   printf ("¿Y cuánto te costó?:");
  scanf ("%lf", &precio3);

 printf ("¿Cuántas horas le has echado al cuarto de ellos?:");
  scanf ("%lf", &tiempo4);
  
   printf ("¿Y cuánto te costó?:");
  scanf ("%lf", &precio4);

 printf ("¿Cuántas horas le has echado al quinto de ellos?:");
  scanf ("%lf", &tiempo5);
  
   printf ("¿Y cuánto te costó?:");
  scanf ("%lf", &precio5);

 
 eur_hor = (precio1/tiempo1 + precio2/tiempo2 + precio3/tiempo3 + precio4/tiempo4 + precio5/tiempo5) / 5;
  printf ("Los últimos %lf juegos te han salido a %lf euros la hora",nu_jue, eur_hor);

  return 0;
}

