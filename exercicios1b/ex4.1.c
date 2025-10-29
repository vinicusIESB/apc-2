#include <stdio.h>
#include <string.h>

// 1. Função para contar pares e ímpares
void contar_pares_impares(int vetor[], int n, int resultado[2]) {
    resultado[0] = 0; // pares
    resultado[1] = 0; // ímpares
    
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            resultado[0]++; // incrementa pares
        } else {
            resultado[1]++; // incrementa ímpares
        }
    }
}

// 2. Função para zerar números ímpares
void zerar_impares(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 != 0) {
            vetor[i] = 0;
        }
    }
}

// 3. Função para substituir caracteres em string
void substituir_caracteres(char string[], char busca, char substituicao) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == busca) {
            string[i] = substituicao;
        }
        i++;
    }
}

// Função auxiliar para imprimir vetor
void imprimir_vetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    // Teste da função 1 - Contar pares e ímpares
    printf("=== FUNÇÃO 1 - CONTAR PARES E ÍMPARES ===\n");
    int numeros1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho1 = 10;
    int contagem[2];
    
    contar_pares_impares(numeros1, tamanho1, contagem);
    printf("Vetor: ");
    imprimir_vetor(numeros1, tamanho1);
    printf("Pares: %d, Ímpares: %d\n\n", contagem[0], contagem[1]);
    
    // Teste da função 2 - Zerar ímpares
    printf("=== FUNÇÃO 2 - ZERAR ÍMPARES ===\n");
    int numeros2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho2 = 10;
    
    printf("Vetor original: ");
    imprimir_vetor(numeros2, tamanho2);
    
    zerar_impares(numeros2, tamanho2);
    
    printf("Vetor após zerar ímpares: ");
    imprimir_vetor(numeros2, tamanho2);
    printf("\n");
    
    // Teste da função 3 - Substituir caracteres
    printf("=== FUNÇÃO 3 - SUBSTITUIR CARACTERES ===\n");
    char texto[100] = "A aranha arranha a ra. A ra arranha a aranha.";
    char busca = 'a';
    char substituir = '*';
    
    printf("String original: %s\n", texto);
    
    substituir_caracteres(texto, busca, substituir);
    
    printf("String após substituição: %s\n", texto);
    
    return 0;
}