#include <stdio.h>
#include <string.h>

// Definição da estrutura pessoa
struct pessoa {
    char nome[100];
    int idade;
};

// Função para obter entrada do usuário
void obterPessoas(struct pessoa pessoas[], int n) {
    printf("=== CADASTRO DE PESSOAS ===\n\n");
    
    for(int i = 0; i < n; i++) {
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
}

// Função para exibir as propriedades das pessoas
void exibirPessoas(struct pessoa pessoas[], int n) {
    printf("=== PESSOAS CADASTRADAS ===\n\n");
    
    for(int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("--------------------\n");
    }
}

int main() {
    // Declaração do vetor de 3 pessoas
    struct pessoa pessoas[3];
    int quantidade = 3;
    
    // Chama a função para obter os dados
    obterPessoas(pessoas, quantidade);
    
    // Chama a função para exibir os dados
    exibirPessoas(pessoas, quantidade);
    
    return 0;
}