
// carta 1: Piauí
int main (){
    char nome1 [30];
    char codigo1 [20];
    int populacao1;
    float area1;
    int pib1;
    int turistico1;
   
    printf("Carta1: \n")
    printf("Nome do Estado: \n");
    scanf("%s", nome1 );
  
     printf("Codigo do Estado: \n")
     scanf("%s", codigo1 );
  
     printf("População: \n");
     scanf("%d", &populacao1 );
  
     printf("area: \n");
     scanf("%f", &area1);
  
     printf("Produto Interno Bruto: \n");
     scanf("%d", &pib1);
      
     printf("Quantidade de pontos turísticos: \n");
     scanf("%d", &turistico1);
  
  
    printf("Nome do Estado: %s - Codigo: %s", nome1, codigo1);
    printf("Populacao: %d - PIB: %d - Quantidade de pontos turisticos: %d", populacao1 , pib1, turistico1);
    prinf("Area: %f", area);
  
    //carta2: 
    char nome2 [30];
    char codigo2 [10];
    int populacao2;
    float area2;
    int pib2;
    int turistico2;
  
    printf("Nome do Estado: \n");
    scanf("%s", nome2 );
  
     printf("Codigo do Estado: \n")
     scanf("%s", codigo2);
  
     printf("População: \n");
     scanf("%d", &populacao2 );
  
     printf("area: \n");
     scanf("%f", &area2);
  
     printf("Produto Interno Bruto: \n");
     scanf("%d", &pib2);
      
     printf("Quantidade de pontos turísticos: \n");
     scanf("%d", turistico2);
  
  
    printf("Nome do Estado: %s - Codigo: %s", nome2, codigo2);
    printf("Populacao: %d - PIB: %d - Quantidade de pontos turisticos: %d", populacao2 , pib2 , turistico2);
    prinf("Area: %f", area2);
  
  
  
  return 0;
  
  
     }