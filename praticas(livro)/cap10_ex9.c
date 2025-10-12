#include <stdio.h>
#include <stdlib.h>



void imprimevetor(int arr[],int tam){

    int *p = arr;

    for(int i=0;i<tam;i++)
        printf("elemento do vetor [%d]: %d\n" ,i ,*(p+i));

    
}

int main(){

    int arr[4]={1,2,3,4};

    imprimevetor(arr,4);
    

    



return 0;   
}
