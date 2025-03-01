#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void compararCartas(int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, int turismo1, int turismo2, float pibCapita1, float pibCapita2, float densidade1, float densidade2, float superPoder1, float superPoder2) {
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparação de Área (Maior vence)
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparação de PIB (Maior vence)
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparação de Pontos Turísticos (Maior vence)
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);

    // Comparação de Densidade Populacional (Menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // Comparação de PIB per Capita (Maior vence)
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);

    // Comparação de Super Poder (Maior vence)
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
}

float calcularDensidade(int populacao, float area) {
    float densidade = populacao / area;
    return densidade;
}

float calcularPibPerCapta(float pib, int populacao) {
    float pibPerCapta = pib / populacao;
    return pibPerCapta;
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declarando variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float superPoder1, superPoder2;

    // Entrada para a Carta 1
    printf("Digite os dados para a Carta 1:\n");

    printf("Estado (de A a H): ");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    float pibcapita1 = calcularPibPerCapta(pib1, area1);
    float densidade1 = calcularDensidade(populacao1, area1);

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 - densidade1 ;

    // Entrada para a Carta 2
    printf("\nDigite os dados para a Carta 2:\n");

    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float pibcapita2 = calcularPibPerCapta(pib2, area2);
    float densidade2 = calcularDensidade(populacao2, area2);

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 - densidade2;

    // Exibindo os dados das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per Capita:: %.2f \n", pibcapita1);
    printf("Super Poder: %.2f \n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita:: %.2f \n", pibcapita2);
    printf("Super Poder: %.2f \n", superPoder2);

    compararCartas(populacao1, populacao2, area1, area2, pib1, pib2, pontosTuristicos1, pontosTuristicos2, pibcapita1, pibcapita2, densidade1, densidade2, superPoder1, superPoder2);


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
