#include <stdio.h>

int main (){
   char nome1 [30];
   char codigo1 [20];
   int populacao1;
   float area1;
   float pib1;
   int turistico1;
   float densidade1;
   float percapta1;
   long unsigned int poder1;
  
   printf("Carta1: \n");
   printf("Nome do Estado: \n");
   scanf("%s", nome1 );
 
    printf("Codigo do Estado: \n");
    scanf("%s", codigo1 );
 
    printf("População: \n");
    scanf("%d", &populacao1 );
 
    printf("area: \n");
    scanf("%f", &area1);
 
    printf("Produto Interno Bruto: \n");
    scanf("%f", &pib1);
     
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turistico1);

//media da densidade populacional 
    densidade1= (pib1 + area1)/ 2;
    percapta1= (float) (pib1 +populacao1) / 2; //pib por cabeça

 
 
   printf("Nome do Estado: %s - Codigo: %s", nome1, codigo1);
   printf("Populacao: %d   - PIB: %.1f   - Quantidade de pontos turisticos: %d", populacao1 , pib1, turistico1);
   printf("Area: %.2f\n", area1 );
   printf("Densidade Populacional:%.2f\n", densidade1);
   printf("Produto Interno Bruto por pessoa: %.2f\n", percapta1); 

   //somar todos os atributos
   poder1= (float) populacao1 + pib1 + area1 + (float) turistico1 + densidade1 + percapta1;
   printf("O poder da carta1 é: %lu \n"), poder1;
    

   

   //carta2: 
   char nome2 [30];
   char codigo2 [10];
   int populacao2;
   float area2;
   float pib2;
   int turistico2;
   float densidade2;
   float percapta2;
   int resultadopopu, resultadoarea, resultadopib, resultadotur, resultadoden, resultadoper;
   long unsigned int superpoder, poder2;

   printf("Carta2:\n");
   printf("Nome do Estado: \n");
   scanf("%s", nome2 );
 
    printf("Codigo do Estado: \n");
    scanf("%s", codigo2);
 
    printf("População: \n");
    scanf("%d", &populacao2 );
 
    printf("area: \n");
    scanf("%f", &area2);
 
    printf("Produto Interno Bruto: \n");
    scanf("%f", &pib2);
     
    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turistico2);
 
    densidade2= (pib2 + area2)/ 2;// densidade populacional
   percapta2= (float) (pib2 +populacao2) / 2; // pib por cabeça
  
   //exibição das informações
   printf("Nome do Estado: %s - Codigo: %s", nome2, codigo2);
   printf("Populacao: %d - PIB: %.2f - Quantidade de pontos turisticos: %d", populacao2 , pib2 , turistico2);
   printf("Area: %.2f \n", area2);
   printf("Densidade:%.2f \n",densidade2);
   printf("Pib percapta: %.2f \n", percapta2); 

   //some todos os atributos
   poder2= (float) populacao2 + pib2 + area2+ (float) turistico2 + densidade2 + percapta2;
   printf("O poder da carta1 é: %lu \n"), poder2;


 //  comparação entre cartas
 resultadopopu= populacao1 < populacao2;
 resultadoarea= area1 < area2;
 resultadoden= densidade1 > densidade2;
 resultadopib= pib1 < pib2;
 resultadoper= percapta1 < percapta2;
 resultadotur= turistico1 < turistico2;
 superpoder= poder1 < poder2;
  //exibição de qual carta ganhará
   printf("****Comparação entre cartas****\n");
   printf("População: A carta 1 venceu (%d) \n ", resultadopopu);
   printf("Area: A carta 1 venceu (%d)\n",resultadoarea);
   printf("Densidade Populacional: A carta 1 venceu(%d)\n",resultadoden);
   printf("Produto interno Bruto: A carta 2 venceu(%d)\n ",resultadopib);
   printf("Pontos turísticos: A carta 2 venceu (%d)\n",resultadotur);
   printf("PIB per capta: A carta 2 venceu(%d)\n",resultadoper);
   printf("Super poder: A carta 2 venceu(%lu)\n", superpoder);


   return 0; 
    }
    