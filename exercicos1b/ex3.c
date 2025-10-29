#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

const float PI = 3.14159;


void data_extenso(const char *data) {
    int dia, mes, ano;
    
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);
    
    const char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    if (mes < 1 || mes > 12) {
        printf("Mês inválido!\n");
        return;
    }
    
    if (dia < 1 || dia > 31) {
        printf("Dia inválido!\n");
        return;
    }

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}


float calculo_esfera(int r){
    return (3.0/4.0)*PI*pow(r,3);
    
}

int converter_horas(int horas, int minutos, int segundos) {
    return horas * 3600 + minutos * 60 + segundos;
}

int divisivel_por_6_v2(int numero) {
    return (numero % 6 == 0);
}

long long fatorial_recursivo(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * fatorial_recursivo(n - 1);
}



int main() {
    // Testes das funçãos
    printf("Datas em formato extenso:\n");
    
    data_extenso("01/01/2000");
    data_extenso("25/12/2023");
    
    float raio = 2.0;
    
    printf("volume da esfera = %.2f\n" ,calculo_esfera(raio));
    
    int horas, minutos, segundos;
    
    printf("Digite horas, minutos e segundos (ex: 1 30 45): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    
    int total_segundos = converter_horas(horas,minutos,segundos);
    
    printf("hora convertida = %d segundos" ,total_segundos);
    
    
return 0;
}