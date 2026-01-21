
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

  /*  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_c1[50], Estado_c2[50],CodigoDaCarta_c1[10], CodigoDaCarta_c2[10],nomeDaCidade_c1[50], nomeDaCidade_c2[50];
  int pontosDeTurismo_c1, pontosDeTurismo_c2;
  float Area_c1, Area_c2,pip_c1, pip_c2;
  float densidadePopulacional_c1, densidadePopulacional_c2,pibPerCapita_c1, pibPerCapita_c2;
  const float fatorDeConversao = 1e9; 
  unsigned long int populacao_c1, populacao_c2;
  int resultadoAreaC1, resultadoAreaC2, resultadoPibC1, resultadoPibC2, resultadoPontosTurismoC1, resultadoPontosTurismoC2, resultadoDensidadeC1, resultadoDensidadeC2, resultadoPibPerCapitaC1, resultadoPibPerCapitaC2,resultadoSuperpoderC1, resultadoSuperpoderC2;
  
      // Área de cadastro comentada para facilitar testes

  // Área para entrada de dados
  printf("\n=======================================================================\n");
  printf("     Ola Bem vindo ao cadastro de cartas do Super Trunfo - Cidades!");
  printf("\n=======================================================================\n");

 /* printf("Digite a sigla do Estado  ");
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
  printf("\nCadastro realizado com sucesso!\n\n");*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
// Dados das cidades pré-definidos para facilitar os testes
  char nomes [4][50] = {"SaoPaulo", "RiodeJaneiro", "BeloHorizonte", "Curitiba"};
  unsigned long int populacoes [4] = {12300000, 6748000, 2520000, 1960000};
  float areas [4] = {1521.11, 1182.3, 331.4, 435.0};
  float pibs [4] = {763.0, 301.0, 110.0, 90.0};
  int pontosTuristicos [4] = {15, 20, 10, 8};

  float somaDensidades = 0;

  int escolhaJogador1, escolhaPc;
  printf("\n=======================================================================\n");
  printf("         Ola Bem vindo ao jogo Super Trunfo - Cidades!");
  printf("                   \n--- ESCOLHA SUA CARTA ---                            \n");
  printf("0. Sao Paulo\n1. Rio de Janeiro\n2. Belo Horizonte\n3. Curitiba     \n");
  printf("\n=======================================================================\n");
  printf("Escolha a carta que deseja jogar (0-3): ");
  scanf("%d", &escolhaJogador1);
  // Escolha aleatória da carta do computador
  escolhaPc = rand() % 4;
// Garante que o computador escolha uma carta diferente da do jogador 1
  while(escolhaPc == escolhaJogador1){
    escolhaPc = rand() % 4;
  }

  printf("\nJogador 1 escolheu a carta %d\n", escolhaJogador1);
  printf("Computador escolheu a carta %d\n\n", escolhaPc);
// Cálculo dos atributos derivados
  float densidade_c1 = (float)populacoes[escolhaJogador1] / areas[escolhaJogador1];\
  float pibPerCapita_c1 = (pibs[escolhaJogador1] * 1e9) / populacoes[escolhaJogador1];
  float inversoDens1 = 1.0 / densidade_c1;
  
  float densidade_c2 = (float)populacoes[escolhaPc] / areas[escolhaPc];
  float pibPerCapita_c2 = (pibs[escolhaPc] * 1e9) / populacoes[escolhaPc];
  float inversoDens2 = 1.0 / densidade_c2; 
// Exibição das cartas escolhidas
  printf("Carta Jogador 1: %s\n\n", nomes[escolhaJogador1]);
  printf("População: %lu\n", populacoes[escolhaJogador1]);
  printf("Área: %.2f km²\n", areas[escolhaJogador1]);
  printf("PIB: %.2f bilhões\n", pibs[escolhaJogador1]);
  printf("Pontos Turísticos: %d\n", pontosTuristicos[escolhaJogador1]);
  printf("Densidade demográfica: %.2f hab/km²\n\n", densidade_c1);

  printf("Carta Computador: %s\n\n", nomes[escolhaPc]);
  printf("População: %lu\n", populacoes[escolhaPc]);  
  printf("Área: %.2f km²\n", areas[escolhaPc]);
  printf("PIB: %.2f bilhões\n", pibs[escolhaPc]);
  printf("Pontos Turísticos: %d\n", pontosTuristicos[escolhaPc]);
  printf("Densidade demográfica: %.2f hab/km²\n\n", densidade_c2);
  

 int opcao;
  printf("\n==================================\n");
  printf("       Comparação de cartas  \n");
  printf("Escolha o atributo para comparacao:\n");
  printf("==================================\n");
  
  printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos \n5. Densidade demográfica\n");
  printf("==================================\n");
  printf("Digite a opção desejada (1-5): ");
  scanf("%d", &opcao);
// Lógica de comparação baseada na escolha do jogador
  switch(opcao) {
    case 1:
      printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
        printf("Atributo: População\n");
        printf("%s: %lu habitantes\n", nomes[escolhaJogador1], populacoes[escolhaJogador1]);
        printf("%s: %lu habitantes\n", nomes[escolhaPc], populacoes[escolhaPc]);
        printf("-------------------------------\n");

        if (populacoes[escolhaJogador1] > populacoes[escolhaPc]) {
            printf("Vencedor: %s!\n", nomes[escolhaJogador1]);
        } else if (populacoes[escolhaJogador1] < populacoes[escolhaPc]) {
            printf("Vencedor: %s!\n", nomes[escolhaPc]);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 2:
      printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
      printf("Atributo area\n");
      printf("%s: %.2f km²\n", nomes[escolhaJogador1], areas[escolhaJogador1]);
      printf("%s: %.2f km²\n", nomes[escolhaPc], areas[escolhaPc]);
      printf("-------------------------------\n");  

      if (areas[escolhaJogador1] > areas[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaJogador1]);
      } else if (areas[escolhaJogador1] < areas[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaPc]);
      } else {
        printf("Empate!\n");
      }
      break;
      
    case 3:
      printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
      printf("Atributo pib\n"); 
      printf("%s: %.2f bilhões\n", nomes[escolhaJogador1], pibs[escolhaJogador1]);
      printf("%s: %.2f bilhões\n", nomes[escolhaPc], pibs[escolhaPc]);
      printf("-------------------------------\n");  

      if (pibs[escolhaJogador1] > pibs[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaJogador1]);
      } else if (pibs[escolhaJogador1] < pibs[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaPc]);
      } else {
        printf("Empate!\n");
      }
      break;

    case 4: 
      printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
      printf("Atributo pontos turisticos\n");
      printf("%s: %d pontos turísticos\n", nomes[escolhaJogador1], pontosTuristicos[escolhaJogador1]);
      printf("%s: %d pontos turísticos\n", nomes[escolhaPc], pontosTuristicos[escolhaPc]);
      printf("-------------------------------\n");  

      if (pontosTuristicos[escolhaJogador1] > pontosTuristicos[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaJogador1]);
      } else if (pontosTuristicos[escolhaJogador1] < pontosTuristicos[escolhaPc]) {
        printf("Vencedor: %s\n", nomes[escolhaPc]);
      } else {
        printf("Empate!\n");
      }
      break;

    case 5:
      printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
      printf("Atributo densidade demografica\n"); 
      printf("%s: %.2f hab/km²\n", nomes[escolhaJogador1], densidade_c1);
      printf("%s: %.2f hab/km²\n", nomes[escolhaPc], densidade_c2);
      printf("-------------------------------\n");

      if (densidade_c1 < densidade_c2) {
        printf("Vencedor: %s\n", nomes[escolhaJogador1]);
      } else if (densidade_c1 > densidade_c2) {
        printf("Vencedor: %s\n", nomes[escolhaPc]);
      } else {
        printf("Empate!\n");
      }
      break;

    default:
        printf("\n[ERRO] A opção %d é inválida. Escolha um número de 1 a 5.\n", opcao);
        break;
  }

return 0;
}
