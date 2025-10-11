#include <stdio.h>
#include <stdlib.h>


int maior(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int x,y;

    printf("digite dois numeros inteiros: ");
    scanf("%d %d" ,&x,&y);

    int resultado = maior(x,y);

    printf("o maior é: %d" ,resultado);


return 0;

}
