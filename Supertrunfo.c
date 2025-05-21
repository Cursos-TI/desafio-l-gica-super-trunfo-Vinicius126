#include <stdio.h>

int main() { 
//carta1
 int populaçao1=150000;
 int pontosturisticos1=10;
 float area1=150.200;
 float pib1=30000;
 char cidade1[50]="BH";
 char estado1[50]="MG";
 char codigo1[50]="01";

 //carta2
 int populaçao2=100000;
 int pontosturisticos2=5;
 float area2=75;
 float pib2=20000;
 char cidade2[50]="RJ";
 char estado2[50]="RJ";
 char codigo2[50]="02";

 //CALCULOS
 float calculoPib01=pib1/populaçao1;
 float calculoPib02=pib2/populaçao2;

 float calculoDensidade01=populaçao1/area1;
 float calculoDensidade02=populaçao2/area2;

printf("---------RESULTADO FINAL--------- \n");
printf(" A COMPARAÇÃO ENTRE AS CARTAS-PIB \n");
 

    if (calculoPib01>calculoPib02)
    {
    printf("A CARTA 01(%s) VENCEU\n",cidade1);
    } 

    else if(calculoPib02>calculoPib01)
    {
    printf("A CARTA 02(%s) VENCEU\n",cidade2);
    }
    
    else if(calculoPib01==calculoPib02)
    {
    printf ("A CARTA 01(%s) É IGUAL A CARTA 02 (%s)\n",cidade1,cidade2);
    }

    return 0;

} 