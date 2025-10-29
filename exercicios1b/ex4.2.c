#include <stdio.h>

// Função para zerar diagonais principal e secundária
void zerar_diagonais(int m, int n, int matriz[m][n]) {
    // Zerar diagonal principal (elementos onde i == j)
    for (int i = 0; i < m && i < n; i++) {
        matriz[i][i] = 0;
    }
    
    // Zerar diagonal secundária (elementos onde i + j == n - 1)
    for (int i = 0; i < m && i < n; i++) {
        matriz[i][n - 1 - i] = 0;
    }
}

// Função para zerar apenas as bordas da matriz
void zerar_bordas(int m, int n, int matriz[m][n]) {
    // Verifica se a matriz tem pelo menos 1 linha e 1 coluna
    if (m == 0 || n == 0) return;
    
    // Zerar primeira linha (borda superior)
    for (int j = 0; j < n; j++) {
        matriz[0][j] = 0;
    }
    
    // Zerar última linha (borda inferior)
    for (int j = 0; j < n; j++) {
        matriz[m - 1][j] = 0;
    }
    
    // Zerar primeira coluna (borda esquerda)
    for (int i = 1; i < m - 1; i++) {
        matriz[i][0] = 0;
    }
    
    // Zerar última coluna (borda direita)
    for (int i = 1; i < m - 1; i++) {
        matriz[i][n - 1] = 0;
    }
}

// Função auxiliar para imprimir matriz
void imprimir_matriz(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para preencher matriz com valores sequenciais
void preencher_matriz(int m, int n, int matriz[m][n]) {
    int contador = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = contador++;
        }
    }
}

int main() {
    printf("=== FUNÇÃO 1 - ZERAR DIAGONAIS ===\n");
    
    // Teste com matriz quadrada
    int matriz1[4][4];
    preencher_matriz(4, 4, matriz1);
    
    printf("Matriz 4x4 original:\n");
    imprimir_matriz(4, 4, matriz1);
    
    zerar_diagonais(4, 4, matriz1);
    
    printf("\nMatriz após zerar diagonais:\n");
    imprimir_matriz(4, 4, matriz1);
    
    // Teste com matriz retangular
    printf("\n--- Teste com matriz 3x5 ---\n");
    int matriz2[3][5];
    preencher_matriz(3, 5, matriz2);
    
    printf("Matriz 3x5 original:\n");
    imprimir_matriz(3, 5, matriz2);
    
    zerar_diagonais(3, 5, matriz2);
    
    printf("\nMatriz após zerar diagonais:\n");
    imprimir_matriz(3, 5, matriz2);
    
    printf("\n=== FUNÇÃO 2 - ZERAR BORDAS ===\n");
    
    // Teste com matriz quadrada
    int matriz3[5][5];
    preencher_matriz(5, 5, matriz3);
    
    printf("Matriz 5x5 original:\n");
    imprimir_matriz(5, 5, matriz3);
    
    zerar_bordas(5, 5, matriz3);
    
    printf("\nMatriz após zerar bordas:\n");
    imprimir_matriz(5, 5, matriz3);
    
    // Teste com matriz retangular
    printf("\n--- Teste com matriz 4x6 ---\n");
    int matriz4[4][6];
    preencher_matriz(4, 6, matriz4);
    
    printf("Matriz 4x6 original:\n");
    imprimir_matriz(4, 6, matriz4);
    
    zerar_bordas(4, 6, matriz4);
    
    printf("\nMatriz após zerar bordas:\n");
    imprimir_matriz(4, 6, matriz4);
    
    return 0;
}