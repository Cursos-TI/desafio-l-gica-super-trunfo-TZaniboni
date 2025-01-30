#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   unsigned int NPT1, populacao1, NPT2, populacao2, opcao1, opcao2; //NPT = Numero de pontos turisticos; SP = Super Poder
   int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8, resultado9, resultado10, resultado11, resultado12, resultado13, resultado14, total1, total2;
   float area1, PIB1, area2, PIB2, PIBpC1, PIBpC2, DP1, DP2; // PIBpC = PIB per capta; DP = Desnsidade Populacional
   double  SP1, SP2;
   char estado1[20], estado2[20], cidade1[20], cidade2[20], codigo1[4], codigo2[4];
   

   printf("Bem vindo ao Super Trunfo Países\n");
   printf("        MENU PRINCIPAL\n");
      printf("1. Jogadorr vs Jogador\n");
      printf("2. Jogador vs Computador\n");
      printf("3. Regras\n");

    printf("Qual a opção que deseja?\n");
    scanf("%d", &opcao1);


   switch (opcao1)
   {
   case 1:
    //Informacoes da carta do jogador numero 1
    printf("\nVoce escolheu a opção Jogador vs Jogador\n");
    printf("\nJogador número 1, qual o estado? (Ex. SaoPaulo, RioDeJaniero)\n");
    scanf("%s", &estado1);
    printf("Qual a cidade? (Ex. SaoPaulo, RioDeJaniero)\n");
    scanf("%s", &cidade1);
    printf("Qual o código de sua carta? (Ex.A01,B02..H04)\n");
    scanf("%s", &codigo1);
    printf("Qual o tamanho de sua população?\n");
    scanf("%d", &populacao1);
    printf("Qual o tamanho de sua área?\n");
    scanf("%f", &area1);
    printf("Qual o PIB?\n");
    scanf("%f", &PIB1);
    printf("Quantos pontos turístico?\n");
    scanf("%d", &NPT1);
    DP1 = populacao1 / area1;
    PIBpC1 = PIB1 / populacao1;
    SP1 = populacao1 + area1 + PIB1 + NPT1 + DP1 + PIBpC1;


    printf("\nCarta do jogador número 1, foi cadastrada com sucesso! \n");
    printf("\nPróximo jogador!\n");

    //Informacoes da carta do jogador numero 2
    printf("Jogador número 2, qual o estado? (Ex. SaoPaulo, RioDeJaniero)\n");
    scanf("%s", &estado2);
    printf("Qual a cidade? (Ex. SaoPaulo, RioDeJaniero)\n");
    scanf("%s", &cidade2);
    printf("Qual o código de sua carta? (Ex.A01,B02..H04)\n");
    scanf("%s", &codigo2);
    printf("Qual o tamanho de sua população?\n");
    scanf("%d", &populacao2);
    printf("Qual o tamanho de sua área?\n");
    scanf("%f", &area2);
    printf("Qual o PIB?\n");
    scanf("%f", &PIB2);
    printf("Quantos pontos turístico?\n");
    scanf("%d", &NPT2);
    DP2 = populacao2/ area2;
    PIBpC2 = PIB2 / populacao2;
    SP2 = populacao2 + area2 + PIB2 + NPT2 + DP2 + PIBpC2;

    printf("\nCarta do jogador número 2, foi cadastrada com sucesso! \n");

    // Menu de comparacao da cartas
    printf("\nEscolha o atributo da carta que deseja comparar \n");
    printf("4. População\n");
    printf("4. Área\n");
    printf("6. PIB\n");
    printf("7. Número de pontos turístico\n");
    printf("8. Densida Populacional\n"); // Densidade = populacao / area
    printf("9. PIB per capta\n"); // PIB per capta = PIB / populacao
    printf("10. Super Poder\n"); // Super Poder = a soma de todos atributos
    printf("11. Comparar todos os atributos\n");

    printf("Qual a opção que deseja?\n");
    scanf("%d", &opcao2);

    // Resultado e dado o codigo da carta a cidade e o estado respectivo de cada carta
    switch (opcao2)
    {
    case 4:
        if (populacao1 > populacao2) // Comparando a populacao
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n\n", codigo1, cidade1, estado1, populacao1);
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n", codigo2, cidade2, estado2, populacao2);
        } else if (populacao2 > populacao1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n\n", codigo2, cidade2, estado2, populacao2);
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n", codigo1, cidade1, estado1, populacao1);
        } else if ( populacao1 == populacao2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n\n", codigo1, cidade1, estado1, populacao1);
            printf("%s: Cidade de %s do estado de/o %s tem %d habitantes \n", codigo2, cidade2, estado2, populacao2);
        }
        
        
        break;
    case 5:
        if (area1 > area2) // Comparando a Area
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n\n", codigo1, cidade1, estado1, area1);
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n", codigo2, cidade2, estado2, area2);
        } else if (area2 > area1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n\n", codigo2, cidade2, estado2, area2);
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n", codigo1, cidade1, estado1, area1);
        } else if ( area1 == area2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n\n", codigo1, cidade1, estado1, area1);
            printf("%s: Cidade de %s do estado de/o %s tem %.2f Km² \n", codigo2, cidade2, estado2, area2);
        }
        
        break;
    case 6:
        if (PIB1 > PIB2) // Comparando o PIB
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n\n", codigo1, cidade1, estado1, PIB1);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n", codigo2, cidade2, estado2, PIB2);
        } else if (PIB2 > PIB1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n\n", codigo2, cidade2, estado2, PIB2);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n", codigo1, cidade1, estado1, PIB1);
        } else if (PIB1 == PIB2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n\n", codigo1, cidade1, estado1, PIB1);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB de %.2f\n", codigo2, cidade2, estado2, PIB2);
        }
        
        break;
    case 7:
        if (NPT1 > NPT2) // Comparando quantidade de pontos turisticos
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n\n", codigo1, cidade1, estado1, NPT1);
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n", codigo2, cidade2, estado2, NPT2);
        } else if (NPT2 > NPT1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n\n", codigo2, cidade2, estado2, NPT2);
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n", codigo1, cidade1, estado1, NPT1);
        } else if (NPT1 == NPT2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n\n", codigo1, cidade1, estado1, NPT1);
            printf("%s: Cidade de %s do estado de/o %s tem %d pontos turístico\n", codigo2, cidade2, estado2, NPT2);
        }
    case 8:
        if (DP1 < DP2) // Comparando densidade populacional
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n\n", codigo1, cidade1, estado1, DP1);
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n", codigo2, cidade2, estado2, DP2);
        } else if (DP2 < DP1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n\n", codigo2, cidade2, estado2, DP2);
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n", codigo1, cidade1, estado1, DP1);
        } else if (DP1 == DP2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n\n", codigo1, cidade1, estado1, DP1);
            printf("%s: Cidade de %s do estado de/o %s tem uma densidade demográfica de %.2f hab./km²\n", codigo2, cidade2, estado2, DP2);
        }
    case 9:
        if (PIBpC1 > PIBpC2) // Comparando PIB per capta 
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n\n", codigo1, cidade1, estado1, PIBpC1);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n", codigo2, cidade2, estado2, PIBpC2);
        } else if (PIBpC2 > PIBpC1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n\n", codigo2, cidade2, estado2, PIBpC2);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n", codigo1, cidade1, estado1, PIBpC1);
        } else if (PIBpC1 == PIBpC2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n\n", codigo1, cidade1, estado1, PIBpC1);
            printf("%s: Cidade de %s do estado de/o %s tem um PIB per capta de %.2f\n", codigo2, cidade2, estado2, PIBpC2);
        }
    case 10:
        if (SP1 > SP2) // Comparando o Super Poder 
        {  
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n\n", codigo1, cidade1, estado1, SP1);
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n", codigo2, cidade2, estado2, SP2);
        } else if (SP2 > SP1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n\n", codigo2, cidade2, estado2, SP2);
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n", codigo1, cidade1, estado1, SP1);
        } else if (SP1 == SP2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n\n", codigo1, cidade1, estado1, SP1);
            printf("%s: Cidade de %s do estado de/o %s tem um Super Poder de %.2f\n", codigo2, cidade2, estado2, SP2);
        }
        
        break;
    case 11:
    // usando operadores ternarios vou somar os resultados de cada comparacao dos atributos
    // usando resultados entre 0 e 1 para ver o total de pontos da carta e ver quam e o vencedor as comparando
    // da carta 1 sera os resultados de 1 a 7
        resultado1 = populacao1 >= populacao2 ? 1 : 0;
        resultado2 = area1 >= area2 ? 1 : 0;
        resultado3 = PIB1 >= PIB2 ? 1 : 0;
        resultado4 = NPT1 >= NPT2 ? 1 : 0;
        resultado5 = DP1 <= DP2 ? 1 : 0;
        resultado6 = PIBpC1 >= PIBpC2 ? 1 : 0;
        resultado7 = SP1 >= SP2 ? 1 : 0;
        total1 = (resultado1 + resultado2 + resultado3 + resultado4 + resultado5 + resultado6 + resultado7);
    // da carta 2 sera os resultados de 8 a 14
        resultado8 = populacao2 >= populacao1 ? 1 : 0;
        resultado9 = area2 >= area1 ? 1 : 0;
        resultado10 = PIB2 >= PIB1 ? 1 : 0;
        resultado11 = NPT2 >= NPT1 ? 1 : 0;
        resultado12 = DP2 <= DP1 ? 1 : 0;
        resultado13 = PIBpC2 >= PIBpC1 ? 1 : 0;
        resultado14 = SP2 >= SP1 ? 1 : 0;
        total2 = (resultado8 + resultado9 + resultado10 + resultado11 + resultado12 + resultado13 + resultado14);


        if (total1 > total2) // Comparando todos os atributos
        {
            printf("Jogador número 1, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s\n", codigo1, cidade1, estado1);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao1, area1, PIB1, NPT1, DP1, PIBpC1, SP1);
            printf("%s: Cidade de %s do estado de/o %s\n", codigo2, cidade2, estado2);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao2, area2, PIB2, NPT2, DP2, PIBpC2, SP2);

            //printf(" total1: %d e total2: %d", total1, total2);
        } else if (total2 > total1) 
        {
            printf("Jogador número 2, venceu!\n");
            printf("%s: Cidade de %s do estado de/o %s\n", codigo2, cidade2, estado2);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao2, area2, PIB2, NPT2, DP2, PIBpC2, SP2);
            printf("%s: Cidade de %s do estado de/o %s\n", codigo1, cidade1, estado1);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao1, area1, PIB1, NPT1, DP1, PIBpC1, SP1);
        } else if (total1 == total2)
        {
            printf("Empate!\n");
            printf("%s: Cidade de %s do estado de/o %s\n", codigo1, cidade1, estado1);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao1, area1, PIB1, NPT1, DP1, PIBpC1, SP1);
            printf("%s: Cidade de %s do estado de/o %s\n", codigo2, cidade2, estado2);
            printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Número de pontos turístico: %d\n - Densidade populacional: %.2f\n - PIB per capta: %.2f\n, Super Poder: %.2f\n\n", populacao2, area2, PIB2, NPT2, DP2, PIBpC2, SP2);
        }
        
        break;
        
    
    default:
       printf("Opção invalida");
        break;
    }

    









    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    break;
   
   default:
   printf("Opção invalida");
    break;
   }




return 0;
}