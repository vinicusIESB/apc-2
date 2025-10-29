#include <stdio.h>

// Definição da união Pixel
typedef union {
    int valor;
    struct {
        unsigned char a;  // alpha
        unsigned char b;  // blue
        unsigned char g;  // green
        unsigned char r;  // red
    } componentes;
} Pixel;

// Função para desenhar a imagem
void desenha_imagem(int n, Pixel imagem[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Exibe formato compacto: [R,G,B,A]
            printf("[%02X,%02X,%02X,%02X] ",
                   imagem[i][j].componentes.r,
                   imagem[i][j].componentes.g,
                   imagem[i][j].componentes.b,
                   imagem[i][j].componentes.a);
        }
        printf("\n");
    }
}

// Função para copiar a imagem
void copiar_imagem(int n, Pixel origem[n][n], Pixel destino[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            destino[i][j].valor = origem[i][j].valor;
        }
    }
}

// Exercício 3: Remove o canal vermelho
void remover_vermelho(int n, Pixel imagem[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Define o canal vermelho como 0
            imagem[i][j].componentes.r = 0;
        }
    }
}

// Exercício 4: Converte para escala de cinza
void converter_para_cinza(int n, Pixel imagem[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Obtém os componentes originais
            unsigned char r = imagem[i][j].componentes.r;
            unsigned char g = imagem[i][j].componentes.g;
            unsigned char b = imagem[i][j].componentes.b;
            
            // Calcula a média (escala de cinza)
            unsigned char cinza = (r + g + b) / 3;
            
            // Atribui a média a todos os canais RGB
            imagem[i][j].componentes.r = cinza;
            imagem[i][j].componentes.g = cinza;
            imagem[i][j].componentes.b = cinza;
        }
    }
}

// Função para inicializar uma imagem de exemplo colorida
void inicializar_imagem_colorida(int n, Pixel imagem[n][n]) {
    // Cores vibrantes para demonstrar os efeitos
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Padrão de cores baseado na posição
            if (i < n/2 && j < n/2) {
                // Quadrante 1: Vermelho
                imagem[i][j].componentes.r = 0xFF;
                imagem[i][j].componentes.g = 0x00;
                imagem[i][j].componentes.b = 0x00;
            } else if (i < n/2 && j >= n/2) {
                // Quadrante 2: Verde
                imagem[i][j].componentes.r = 0x00;
                imagem[i][j].componentes.g = 0xFF;
                imagem[i][j].componentes.b = 0x00;
            } else if (i >= n/2 && j < n/2) {
                // Quadrante 3: Azul
                imagem[i][j].componentes.r = 0x00;
                imagem[i][j].componentes.g = 0x00;
                imagem[i][j].componentes.b = 0xFF;
            } else {
                // Quadrante 4: Amarelo (vermelho + verde)
                imagem[i][j].componentes.r = 0xFF;
                imagem[i][j].componentes.g = 0xFF;
                imagem[i][j].componentes.b = 0x00;
            }
            imagem[i][j].componentes.a = 0xFF; // Totalmente opaco
        }
    }
}

int main() {
    const int TAMANHO = 10;
    
    // Imagem original
    Pixel imagem_original[TAMANHO][TAMANHO];
    
    // Imagens para os exercícios
    Pixel imagem2[TAMANHO][TAMANHO]; // Sem vermelho
    Pixel imagem3[TAMANHO][TAMANHO]; // Escala de cinza
    
    printf("=== SISTEMA DE PROCESSAMENTO DE IMAGENS ===\n\n");
    
    // Inicializa a imagem original com cores vibrantes
    inicializar_imagem_colorida(TAMANHO, imagem_original);
    
    // Exercício 3: Remove canal vermelho
    printf("=== EXERCÍCIO 3 - REMOVER CANAL VERMELHO ===\n");
    copiar_imagem(TAMANHO, imagem_original, imagem2);
    remover_vermelho(TAMANHO, imagem2);
    printf("Imagem 2 - Sem canal vermelho:\n");
    desenha_imagem(TAMANHO, (Pixel (*)[TAMANHO])imagem2);
    printf("\n");
    
    // Exercício 4: Converte para escala de cinza
    printf("=== EXERCÍCIO 4 - ESCALA DE CINZA ===\n");
    copiar_imagem(TAMANHO, imagem_original, imagem3);
    converter_para_cinza(TAMANHO, imagem3);
    printf("Imagem 3 - Escala de cinza:\n");
    desenha_imagem(TAMANHO, (Pixel (*)[TAMANHO])imagem3);
    printf("\n");
    
    // Mostra a imagem original para comparação
    printf("=== IMAGEM ORIGINAL (para referência) ===\n");
    printf("Imagem Original:\n");
    desenha_imagem(TAMANHO, (Pixel (*)[TAMANHO])imagem_original);
    printf("\n");
    
    // Demonstração dos efeitos em pixels específicos
    printf("=== COMPARAÇÃO DE PIXELS ===\n");
    printf("Posição [0][0] (Originalmente Vermelho):\n");
    printf("  Original: [%02X,%02X,%02X,%02X]\n", 
           imagem_original[0][0].componentes.r,
           imagem_original[0][0].componentes.g,
           imagem_original[0][0].componentes.b,
           imagem_original[0][0].componentes.a);
    printf("  Sem Vermelho: [%02X,%02X,%02X,%02X]\n",
           imagem2[0][0].componentes.r,
           imagem2[0][0].componentes.g,
           imagem2[0][0].componentes.b,
           imagem2[0][0].componentes.a);
    printf("  Cinza: [%02X,%02X,%02X,%02X]\n",
           imagem3[0][0].componentes.r,
           imagem3[0][0].componentes.g,
           imagem3[0][0].componentes.b,
           imagem3[0][0].componentes.a);
    
    printf("\nPosição [0][5] (Originalmente Verde):\n");
    printf("  Original: [%02X,%02X,%02X,%02X]\n", 
           imagem_original[0][5].componentes.r,
           imagem_original[0][5].componentes.g,
           imagem_original[0][5].componentes.b,
           imagem_original[0][5].componentes.a);
    printf("  Sem Vermelho: [%02X,%02X,%02X,%02X]\n",
           imagem2[0][5].componentes.r,
           imagem2[0][5].componentes.g,
           imagem2[0][5].componentes.b,
           imagem2[0][5].componentes.a);
    printf("  Cinza: [%02X,%02X,%02X,%02X]\n",
           imagem3[0][5].componentes.r,
           imagem3[0][5].componentes.g,
           imagem3[0][5].componentes.b,
           imagem3[0][5].componentes.a);
    
    return 0;
}