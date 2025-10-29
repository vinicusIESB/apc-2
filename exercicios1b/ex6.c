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

// Função 1: Desenha a imagem
void desenha_imagem(int n, Pixel imagem[n][n]) {
    printf("=== IMAGEM %dx%d ===\n", n, n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Acessa os componentes de cor através da união
            printf("Pixel[%d][%d]: RGBA(%3u, %3u, %3u, %3u) | Valor: 0x%08X\n",
                   i, j,
                   imagem[i][j].componentes.r,
                   imagem[i][j].componentes.g, 
                   imagem[i][j].componentes.b,
                   imagem[i][j].componentes.a,
                   imagem[i][j].valor);
        }
        printf("\n");
    }
}

// Função 2: Copia a imagem
void copiar_imagem(int n, int origem[n][n], Pixel destino[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Copia o valor inteiro diretamente para a união Pixel
            destino[i][j].valor = origem[i][j];
        }
    }
    printf("Imagem copiada com sucesso! (%dx%d pixels)\n", n, n);
}

// Exemplo de uso das funções
int main() {
    const int TAMANHO = 3;
    
    // Matriz de inteiros original (valores em hexadecimal representando RGBA)
    int imagem_origem[3][3] = {
        {0xFF0000FF, 0x00FF00FF, 0x0000FFFF},
        {0xFFFF00FF, 0xFF00FFFF, 0x00FFFFFF},
        {0x000000FF, 0x888888FF, 0xFFFFFFFF}
    };
    
    // Matriz de destino (união Pixel)
    Pixel imagem_destino[3][3];
    
    printf("=== EXEMPLO DE USO DAS FUNÇÕES ===\n\n");
    
    // Copia a imagem de inteiros para a matriz de Pixel
    copiar_imagem(TAMANHO, imagem_origem, imagem_destino);
    printf("\n");
    
    // Desenha a imagem (usando o casting especificado)
    desenha_imagem(TAMANHO, (Pixel (*)[3])imagem_destino);
    
    return 0;
}