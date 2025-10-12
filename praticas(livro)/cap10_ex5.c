#include <stdio.h>
#include <stdlib.h>



int main(){


   int arr[5];
   int *p1 = &arr[0];


    for(int i=0;i<5;i++){
        printf("digite o [%d]-esimo elemento :" ,i);
        scanf("%d",p1+i);
        
    }

    printf("o dobro de cada valor é: \n");
    
    for(int i=0;i<5;i++){
        int dobro = *(p1+i)*2;
        printf("arr[%d] * 2 = %d\n", i, dobro);
        
    }






return 0;    
}