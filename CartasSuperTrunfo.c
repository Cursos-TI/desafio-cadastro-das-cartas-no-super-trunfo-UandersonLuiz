#include <stdio.h>
#include <string.h>

// Definição da estrutura para representar uma cidade
typedef struct {
    char estado;           // Letra do estado (A a H)
    char codigo[4];        // Código da carta (ex: A01, B02, etc.)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade (em km²)
    float pib;             // PIB da cidade (em bilhões)
    int pontos_turisticos; // Número de pontos turísticos
} Cidade;

// Função para cadastrar uma cidade
void cadastrarCidade(Cidade *cidade) {
    printf("\nCadastro de Carta:\n");

    // Solicita e armazena o estado
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &cidade->estado);

    // Solicita e armazena o código da carta
    printf("Digite o código da carta (ex: %c01, %c02, etc.): ", cidade->estado, cidade->estado);
    scanf("%s", cidade->codigo);

    // Solicita e armazena o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade->nome); // Lê uma string com espaços

    // Solicita e armazena a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade->populacao);

    // Solicita e armazena a área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade->area);

    // Solicita e armazena o PIB da cidade
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade->pib);

    // Solicita e armazena o número de pontos turísticos
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função para exibir os dados de uma cidade
void exibirCidade(Cidade cidade) {
    printf("\nDados da Carta %s:\n", cidade.codigo);
    printf("Estado: %c\n", cidade.estado);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("--------------------------\n");
}

int main() {
    int numCartas;
    printf("Bem-vindo ao Super Trunfo - Países!\n");
    printf("Quantas cartas de cidades deseja cadastrar? ");
    scanf("%d", &numCartas);

    // Array para armazenar as cartas
    Cidade cartas[numCartas];

    // Cadastro das cartas
    for (int i = 0; i < numCartas; i++) {
        printf("\nCadastro da Carta %d:\n", i + 1);
        cadastrarCidade(&cartas[i]);
        printf("\nCarta cadastrada com sucesso!\n");
    }

    // Exibição dos dados das cartas cadastradas
    printf("\nCartas Cadastradas:\n");
    for (int i = 0; i < numCartas; i++) {
        exibirCidade(cartas[i]);
    }

    return 0;
}
