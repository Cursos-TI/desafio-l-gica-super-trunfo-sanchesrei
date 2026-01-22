
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

    // 1. Definição dos Dados das Cidades
    char nomes[4][50] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Curitiba"};
    unsigned long int populacoes[4] = {12300000, 6748000, 2520000, 1960000};
    float areas[4] = {1521.11, 1182.3, 331.4, 435.0};
    float pibs[4] = {763.0, 301.0, 110.0, 90.0};
    int pontosTuristicos[4] = {15, 20, 10, 8};

    int escolhaJogador, escolhaPc;

    // 2. Seleção de Cartas
    printf("====================================================\n");
    printf("      BEM-VINDO AO SUPER TRUNFO - CIDADES           \n");
    printf("              --- ESCOLHA SUA CARTA ---             \n");
    printf("====================================================\n");
    printf("0. %s | 1. %s\n2. %s | 3. %s\n", nomes[0], nomes[1], nomes[2], nomes[3]);
    printf("Escolha sua carta (0-3): ");
    scanf("%d", &escolhaJogador);

    escolhaPc = rand() % 4;
    while(escolhaPc == escolhaJogador) {
        escolhaPc = rand() % 4;
    }

    // Cálculo dos atributos derivados
     float densidade_c1 = (float)populacoes[escolhaJogador] / areas[escolhaJogador];
    float pibPerCapita_c1 = (pibs[escolhaJogador] * 1e9) / populacoes[escolhaJogador];
    float inversoDens1 = 1.0 / densidade_c1;
    float densidade_c2 = (float)populacoes[escolhaPc] / areas[escolhaPc];
    float pibPerCapita_c2 = (pibs[escolhaPc] * 1e9) / populacoes[escolhaPc];
    float inversoDens2 = 1.0 / densidade_c2;

    // Exibição das cartas escolhidas
    printf("Carta Jogador 1: %s\n\n", nomes[escolhaJogador]);
    printf("População: %lu\n", populacoes[escolhaJogador]);
    printf("Área: %.2f km²\n", areas[escolhaJogador]);
    printf("PIB: %.2f bilhões\n", pibs[escolhaJogador]);
    printf("Pontos Turísticos: %d\n", pontosTuristicos[escolhaJogador]);
    printf("Densidade demográfica: %.2f hab/km²\n\n", densidade_c1);

    printf("Carta Computador: %s\n\n", nomes[escolhaPc]);
    printf("População: %lu\n", populacoes[escolhaPc]);  
    printf("Área: %.2f km²\n", areas[escolhaPc]);
    printf("PIB: %.2f bilhões\n", pibs[escolhaPc]);
    printf("Pontos Turísticos: %d\n", pontosTuristicos[escolhaPc]);
    printf("Densidade demográfica: %.2f hab/km²\n\n", densidade_c2);


    // 3. Escolha dos Dois Atributos Diferentes
    int escolha1, escolha2;

    printf("\n==================================\n");
    printf("       Comparação de cartas  \n");
    printf("Escolha o atributo para comparacao:\n");
    printf("==================================\n");
    
    printf("1. População\n2. Área\n3. PIB\n4. Número de pontos turísticos \n5. Densidade demográfica\n");
    printf("==================================\n");
    printf("Digite a opção desejada (1-5): ");
    scanf("%d", &escolha1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);

        if (escolha1 == escolha2) {
            printf("[ERRO] Voce ja escolheu este atributo!\n");
        } else if (escolha2 < 1 || escolha2 > 5) {
            printf("[ERRO] Opcao invalida! Escolha de 1 a 5.\n");
        }
    } while (escolha1 == escolha2 || (escolha2 < 1 || escolha2 > 5));

    // 4. Lógica de Comparação
    float v1_j, v1_pc, v2_j, v2_pc;

    // Atribuindo valores para o Atributo 1
    switch(escolha1) {
        case 1: v1_j = (float)populacoes[escolhaJogador]; v1_pc = (float)populacoes[escolhaPc]; break;
        case 2: v1_j = areas[escolhaJogador]; v1_pc = areas[escolhaPc]; break;
        case 3: v1_j = pibs[escolhaJogador]; v1_pc = pibs[escolhaPc]; break;
        case 4: v1_j = (float)pontosTuristicos[escolhaJogador]; v1_pc = (float)pontosTuristicos[escolhaPc]; break;
        case 5: v1_j = densidade_c1; v1_pc = densidade_c2; break;   
    }

    // Atribuindo valores para o Atributo 2
    switch(escolha2) {
        case 1: v2_j = (float)populacoes[escolhaJogador]; v2_pc = (float)populacoes[escolhaPc]; break;
        case 2: v2_j = areas[escolhaJogador]; v2_pc = areas[escolhaPc]; break;
        case 3: v2_j = pibs[escolhaJogador]; v2_pc = pibs[escolhaPc]; break;
        case 4: v2_j = (float)pontosTuristicos[escolhaJogador]; v2_pc = (float)pontosTuristicos[escolhaPc]; break;
        case 5: v2_j = densidade_c1; v2_pc = densidade_c2; break;
    }

    // 5. Exibição dos Resultados Individuais
    printf("\n--- RESULTADOS DAS RODADAS ---\n");
    
    // Comparação Atributo 1
    printf("Atributo 1: ");
    if (escolha1 == 5) { // Regra Densidade
        if (v1_j < v1_pc) printf("Jogador Venceu (%.2f vs %.2f)\n", v1_j, v1_pc);
        else if (v1_j > v1_pc) printf("Computador Venceu (%.2f vs %.2f)\n", v1_pc, v1_j);
        else printf("Empate!\n");
    } else {
        if (v1_j > v1_pc) printf("Jogador Venceu (%.2f vs %.2f)\n", v1_j, v1_pc);
        else if (v1_j < v1_pc) printf("Computador Venceu (%.2f vs %.2f)\n", v1_pc, v1_j);
        else printf("Empate!\n");
    }

    // Comparação Atributo 2
    printf("Atributo 2: ");
    if (escolha2 == 5) { // Regra Densidade
        if (v2_j < v2_pc) printf("Jogador Venceu (%.2f vs %.2f)\n", v2_j, v2_pc);
        else if (v2_j > v2_pc) printf("Computador Venceu (%.2f vs %.2f)\n", v2_pc, v2_j);
        else printf("Empate!\n");
    } else {
        if (v2_j > v2_pc) printf("Jogador Venceu (%.2f vs %.2f)\n", v2_j, v2_pc);
        else if (v2_j < v2_pc) printf("Computador Venceu (%.2f vs %.2f)\n", v2_pc, v2_j);
        else printf("Empate!\n");
    }

    // 6. Soma e Resultado Final
    float somaJ = v1_j + v2_j;
    float somaPc = v1_pc + v2_pc;

    printf("\n--- VENCEDOR FINAL ---\n");
    printf("Soma Jogador (%s): %.2f\n", nomes[escolhaJogador], somaJ);
    printf("Soma Computador (%s): %.2f\n", nomes[escolhaPc], somaPc);

    if (somaJ > somaPc) {
        printf("RESULTADO: VOCE VENCEU!\n");
    } else if (somaJ < somaPc) {
        printf("RESULTADO: O COMPUTADOR VENCEU!\n");
    } else {
        printf("RESULTADO: EMPATE!\n");
    }

    return 0;
}