#include <stdio.h>
#include <stdlib.h>



int main(){

    int *p1,*p2;
    int x,y;
    p1=&x;
    p2=&y;


    printf("endereço de x:%p\n" ,(void*)&x);
    printf("endereço de y:%p\n" ,(void*)&y);


    if (p1>p2){
        printf("maior endereço: 0x%p\n" ,(void*)p1);
    }
    else{
        printf("maior endereço: 0xp\n" ,(void*)p2);
    }






return 0;

}
