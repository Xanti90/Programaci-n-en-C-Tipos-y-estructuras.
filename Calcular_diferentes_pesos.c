#include <stdio.h>

#define PESO_EN_LA_LUNA 0.1655
#define PESO_EN_MARTE 0.3895
#define PESO_EN_JUPITER 2.640
#define PESO_EN_MILLER 1.3
#define PESO_EN_PANDORA 0.8
#define PESO_EN_VULCANO 1.4

int main() 
{
    double peso;
    double peso_luna;
    double peso_marte;
    double peso_jupiter;
    double peso_miller;
    double peso_pandora;
    double peso_vulcano;
    
    printf ("Introduce tu peso:");
    scanf ("%lf", &peso);
    printf("Tu peso en la Tierra es %.2lf Kg.\n", peso);
    
    
    peso_luna = peso * PESO_EN_LA_LUNA;
    printf("Tu peso en la luna es %.2lf Kg.\n", peso_luna);
    
    peso_marte = peso * PESO_EN_MARTE;
    printf("Tu peso en Marte es %.2lf Kg.\n", peso_marte);
   
    peso_jupiter = peso * PESO_EN_JUPITER;
    printf("Tu peso en la Júpiter es %.2lf Kg.\n", peso_jupiter);
   
    peso_miller = peso * PESO_EN_MILLER;
    printf("Tu peso en Miller es %.2lf Kg.\n", peso_miller);
   
    peso_pandora = peso * PESO_EN_PANDORA;
    printf("Tu peso en Pandora es %.2lf Kg.\n", peso_pandora);
   
    peso_vulcano = peso * PESO_EN_VULCANO;
    printf("Tu peso en Vulcano es %.2lf Kg.\n", peso_vulcano);
   

    return 0;
}
