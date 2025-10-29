#include <stdio.h>
#include <stdlib.h>

// 1. Alocar n inteiros, onde n deve ser > 0.
int *criar_array(int n) {
    if (n <= 0) {
        printf("Erro: n deve ser maior que 0!\n");
        return NULL;
    }
    return (int*)malloc(n * sizeof(int));
}

// 2. Preencher array de n elementos positivos.
void preencher_array(int n, int vet[n]) {
    printf("Preencha o array com %d valores positivos:\n", n);
    for(int i = 0; i < n; i++) {
        do {
            printf("vet[%d] = ", i);
            scanf("%d", &vet[i]);
            if (vet[i] <= 0) {
                printf("Valor deve ser positivo! Tente novamente.\n");
            }
        } while(vet[i] <= 0);
    }
}

// 3. Exibir array.
void exibir_array(int n, int vet[n]) {
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

// Programa principal de teste
int main() {
    int n = 5;
    int *array = criar_array(n);
    
    if (array != NULL) {
        preencher_array(n, array);
        exibir_array(n, array);
        free(array);
    }
    
    return 0;
}