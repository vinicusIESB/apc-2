#include <stdio.h>

// 1. Função de troca com ponteiros
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Função de divisão com ponteiro para resultado
void calcular_divisao(float num1, float num2, float *resultado) {
    if (num2 != 0 && resultado != NULL) {
        *resultado = num1 / num2;
    }
    // Se divisor for zero, não faz nada
}

int main() {
    // Teste da função de troca
    int x = 5, y = 8;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n\n", x, y);
    
    // Teste da função de divisão
    float a = 20.0, b = 4.0;
    float resultado;
    
    calcular_divisao(a, b, &resultado);
    printf("%.2f / %.2f = %.2f\n", a, b, resultado);
    
    // Teste com divisor zero
    float c = 15.0, d = 0.0;
    float resultado2 = -1.0; // Valor inicial
    
    calcular_divisao(c, d, &resultado2);
    printf("Divisão por zero mantém o valor: %.2f\n", resultado2);
    
    return 0;
}