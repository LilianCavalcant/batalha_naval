#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define NAVIO 3

// Função para inicializar o tabuleiro com água (0)
void Tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representando água
        }
    }
}

// Função para posicionar o navio horizontal
void NavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3; // 3 representando o navio
    }
}

// Função para posicionar o navio vertical
void NavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3; // 3 representando o navio
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água
    Tabuleiro(tabuleiro);

    // Posiciona os navios
    NavioHorizontal(tabuleiro, 3, 2);  
    NavioVertical(tabuleiro, 5, 7);    

    // Exibe o tabuleiro com os navios posicionados
    exibirTabuleiro(tabuleiro);

    return 0;
}

