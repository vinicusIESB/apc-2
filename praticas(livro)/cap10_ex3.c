#include <stdio.h>
#include <stdlib.h>



int main(){


    float arr[10]={1.0 ,2.0 ,3.0 ,4.0 ,5.0 ,6.0 ,7.0, 8.0, 9.0, 10.0};
    float *p1 = &arr[0];


    for(int i=0;i<10;i++){
        printf("endereço do elemento [%d]: %p\n" ,i,(p1+i));
    }







return 0;    
}