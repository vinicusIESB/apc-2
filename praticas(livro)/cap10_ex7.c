#include <stdio.h>

int contemSubstring(const char *principal, const char *sub) {
    const char *p, *s, *temp;
    
    for (p = principal; *p != '\0'; p++) {
        temp = p;
        s = sub;
        
        // Compara enquanto os caracteres forem iguais
        while (*s != '\0' && *temp == *s) {
            temp++;
            s++;
        }
        
        // Se chegamos ao final da substring, encontramos
        if (*s == '\0') {
            return 1;  // Verdadeiro
        }
    }
    
    return 0;  // Falso
}

int main() {
    char str1[] = "programação em C";
    char str2[] = "grama";
    
    if (contemSubstring(str1, str2)) {
        printf("Encontrou!\n");
    } else {
        printf("Não encontrou!\n");
    }
    
    return 0;
}