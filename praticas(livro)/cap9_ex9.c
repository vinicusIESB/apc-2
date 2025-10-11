#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float media(float a,float b,float c,char x){
    if(x=='a'){
        return (a+b+c)/3.0;
        }else if(x=='p'){
        return (a*5.0+b*3.0+c*2.0)/(5.0+3.0+2.0);
        }
        return 0;
}

int main(){


    float nota1,nota2,nota3;
    char c;

    printf("digite as três notas: ");
    scanf("%f %f %f" ,&nota1,&nota2,&nota3);

    getchar();

    printf("ok, agora se oce quiser calcular a média aritmética digite 'a' ,se quiser a média ponderada digite 'p':\n");
    c=getchar();

    if(c=='a'){
            printf("oce escolheu (média aritmética) : %.2f" ,media(nota1,nota2,nota3,c));
    }else if(c=='p'){
            printf("oce escolheu (média ponderada) : %.2f" ,media(nota1,nota2,nota3,c));
    }else {
            printf("algo deu xabu!tenta dnv ai");
    }


return 0;

}
