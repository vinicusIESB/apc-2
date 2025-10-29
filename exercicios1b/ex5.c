#include <stdio.h>
#include <string.h>

// Definição da estrutura pessoa
struct pessoa {
    char nome[100];
    int idade;
};

int main() {
    // Declaração do vetor de 3 pessoas
    struct pessoa pessoas[3];
    
    printf("=== CADASTRO DE PESSOAS ===\n\n");
    
    // Primeira estrutura de repetição para solicitar os dados
    for(int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        
        // Solicita o nome
        printf("Digite o nome: ");
        fgets(pessoas[i].nome, 100, stdin);
        
        // Remove o caractere de nova linha do final do nome
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
        
        // Solicita a idade
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        
        // Limpa o buffer do teclado
        while(getchar() != '\n');
        
        printf("\n");
    }
    
    printf("=== PESSOAS CADASTRADAS ===\n\n");
    
    // Segunda estrutura de repetição para exibir os dados
    for(int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("--------------------\n");
    }
    
    return 0;
}