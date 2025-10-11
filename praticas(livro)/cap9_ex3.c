#include <stdio.h>
#include <stdlib.h>


float conversor(float F){
    float C;
    if (F==0){
        return F;
    }else{
        return C=(F-32.0)*(5.0/9.0);

    }
}

int main(){

    float x,y;

    printf("digite a temperatura em Fahrenheit: ");
    scanf("%f" ,&x);

    y = conversor(x);

    printf("A temperatura equivalente em Celsius é igual a: %.2f" ,y);


return 0;

}
