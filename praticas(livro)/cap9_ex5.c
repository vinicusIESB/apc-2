#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793


float volume(float R){
    if (R==0){
        return 0;
    }else{
        return (4.0/3.0*PI)*pow(R,3);

    }
}

int main(){

    float x,y;

    printf("digite o raio da esfera: ");
    scanf("%f" ,&x);

    y = volume(x);

    printf("O volume da esfera é igual a: %.2f" ,y);


return 0;

}
