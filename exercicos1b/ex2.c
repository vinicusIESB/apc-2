#include <stdio.h>
#include <stdlib.h>


int main(){

    char vet[15] = {1,2,3,4,5,6,7,8,9};

    //usando for
    for (int i=0;i<15;i++){
        printf("%d" ,vet[i]);
    }

    //usando artm de pont.

    for (int i=0;i<15;i++){
        printf("%d" ,*(v++));
    }





return 0;
}