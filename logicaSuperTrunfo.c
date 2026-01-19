#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_c1[50], Estado_c2[50],CodigoDaCarta_c1[10], CodigoDaCarta_c2[10],nomeDaCidade_c1[50], nomeDaCidade_c2[50];
  int pontosDeTurismo_c1, pontosDeTurismo_c2;
  float Area_c1, Area_c2,pip_c1, pip_c2;
  float densidadePopulacional_c1, densidadePopulacional_c2,pibPerCapita_c1, pibPerCapita_c2;
  const float fatorDeConversao = 1e9; 
  unsigned long int populacao_c1, populacao_c2;
  int resultadoAreaC1, resultadoAreaC2, resultadoPibC1, resultadoPibC2, resultadoPontosTurismoC1, resultadoPontosTurismoC2, resultadoDensidadeC1, resultadoDensidadeC2, resultadoPibPerCapitaC1, resultadoPibPerCapitaC2,resultadoSuperpoderC1, resultadoSuperpoderC2;
  


  // Área para entrada de dados
  printf("\n=======================================================================\n");
  printf("     Ola Bem vindo ao cadastro de cartas do Super Trunfo - Cidades!");
  printf("\n=======================================================================\n");

  printf("Digite a sigla do Estado  ");
  scanf("%s", Estado_c1);

  printf("Digite o codigo da carta:\nO código da carta deve ser a união da Letra do Estado (A a H) com o Número da Cidade (01 a 04)(ex: A01, B03).\n");
  scanf("%s", CodigoDaCarta_c1);

  printf("Digite o nome da cidade:  ");
  scanf("%s", nomeDaCidade_c1);

  printf("Digite a pupulação da cidade:  ");
  scanf("%d", &populacao_c1);

  printf("Digite a área da cidade:  ");
  scanf("%f", &Area_c1);

  printf("digite o PIB da cidade:  ");
  scanf("%f", &pip_c1);

  printf("Digite os pontos turisticos da cidade:  ");
  scanf("%d", &pontosDeTurismo_c1);

  printf("\nCadastro realizado com sucesso!\n\n");
  printf("Cadastre outra carta\n");

  printf("Digite a sigla do Estado  ");
  scanf("%s", &Estado_c2);

  printf("Digite o codigo da carta:\nO código da carta deve ser a união da Letra do Estado (A a H) com o Número da Cidade (01 a 04)(ex: A01, B03).\n");
  scanf("%s", &CodigoDaCarta_c2);

  printf("Digite o nome da cidade:  ");
  scanf("%s", &nomeDaCidade_c2);

  printf("Digite a pupulação da cidade:  ");
  scanf("%d", &populacao_c2);

  printf("Digite a área da cidade:  ");
  scanf("%f", &Area_c2);

  printf("digite o PIB da cidade:  ");
  scanf("%f", &pip_c2);

  printf("Digite os pontos turisticos da cidade:  ");
  scanf("%d", &pontosDeTurismo_c2);
  printf("\nCadastro realizado com sucesso!\n\n");


  densidadePopulacional_c1 = (float)populacao_c1 / Area_c1;
  densidadePopulacional_c2 = (float)populacao_c2 / Area_c2;
  pibPerCapita_c1 = (pip_c1 * 1000000000.0f) / (float)populacao_c1;
  pibPerCapita_c2 = (pip_c2 * 1000000000.0f) / (float)populacao_c2;



  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", Estado_c1);
  printf("Código: %s\n", CodigoDaCarta_c1);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c1); 
  printf("População: %d\n", populacao_c1);
  printf("Área: %.2fkm²\n", Area_c1);
  printf("PIB: %.2f bilhões de reais\n", pip_c1);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional_c1);
  printf("Pib Per Capita: %.2f Reais\n", pibPerCapita_c1);
  printf("\n");

  printf("carta 2:\n");
  printf("Estado: %s\n", Estado_c2);
  printf("Código: %s\n", CodigoDaCarta_c2);
  printf("Nome da Cidade: %s\n", nomeDaCidade_c2); 
  printf("População: %d\n", populacao_c2);
  printf("Área: %.2fkm²\n", Area_c2);
  printf("PIB: %.2f bilhões de reais\n", pip_c2);
  printf("Pontos de Turismo: %d\n", pontosDeTurismo_c2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional_c2);
  printf("Pib Per Capita: %.2f Reais\n", pibPerCapita_c2);
  printf("\n");

  float inversoDens1 = 1.0f / densidadePopulacional_c1;
  float inversoDens2 = 1.0f / densidadePopulacional_c2; 
  float SuperpoderC1 = populacao_c1 + Area_c1 + pip_c1 + pontosDeTurismo_c1 +  pibPerCapita_c1 + inversoDens1;
  float SuperpoderC2 = populacao_c2 + Area_c2 + pip_c2 + pontosDeTurismo_c2 + pibPerCapita_c2 + inversoDens2;

  printf("\n==================================\n");
  printf("       Comparação de cartas  \n");
  printf("      (Atributo: População) \n");
  printf("==================================\n");

  printf("Carta 1- %s (%s) %d \n", nomeDaCidade_c1, Estado_c1, populacao_c1);
  printf("Carta 2- %s (%s) %d\n", nomeDaCidade_c2, Estado_c2, populacao_c2);
  if(populacao_c1 > populacao_c2){
    printf("Carta 1 %s Venceu! \n", nomeDaCidade_c1);
  }
  else{
    printf("Carta 2 %s Venceu! \n", nomeDaCidade_c2);
  }


  


return 0;
}
