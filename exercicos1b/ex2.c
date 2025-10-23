#include <stdio.h>
#include <stdlib.h>


int main(){

    char vet[15] = {1,2,3,4,5,6,7,8,9};

    //usando for
    for (int i=0;i<15;i++){
        printf("%d\n" ,vet[i]);
    }

    //usando artm de pont.
    
    char *p=vet;

    for (int i=0;i<15;i++){
        printf("%d\n" ,*(p++));
    }

    char str[] = "aula de apc\0";
    
    //usando comando while
    int i=0;
    while(str[i]!='\0'){
        printf("%c" ,str[i]);
        i++;
    }

    printf("\n");
    
    //usando artm de pont
    
    char *p1=str;
    
    
    while(*p1!='\0'){
        printf("%c" ,*p1);
        p1++;
    }
    
    char str2[12]="hello world";
    
    printf("\n");
    
    char *p2;
    p2=str2;
    int tamanho=0;
    
    while(*p2++){
        
        tamanho++;
    }
    
    printf("tamanho=%d\n" ,tamanho);
    
    
    int mat[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    int *p3 = (int*)mat;
    int soma=0;
    
    for (int i=0;i<3*4;i++){
        soma=soma+ *(p3+i);
        
        
    }
    
    float media = soma/12;
    printf("Média: %.2f\n", media);
    
    
    
return 0;
}