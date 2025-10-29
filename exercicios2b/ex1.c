#include <stdio.h>
#include <stdlib.h>


void escrever_txt(char *nome_arquivo, int n, int vet[n]) {
    FILE *arquivo = fopen(nome_arquivo, "w");
    
    if (arquivo == NULL) {
        printf("erro\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%d\n", vet[i]);
    }
    
    fclose(arquivo);
    printf("vetor escrito no arquivo '%s' com sucesso\n", nome_arquivo);
}

void exibir_txt(char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    
    if (arquivo == NULL) {
        printf("erro\n");
        return;
    }
    
    int numero;
    
    printf("conteudo do arquivo '%s':\n", nome_arquivo);

    

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }
    
    fclose(arquivo);
 }


int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    
    
    escrever_txt("dados.txt", 10, vetor);
    exibir_txt("dados.txt");
    
    return 0;
}