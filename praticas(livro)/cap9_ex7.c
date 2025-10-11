#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int converte_hora(int h,int m,int s){
    return h*3600+m*60+s;
}

int main(){


    int horas,minutos,segundos;
    char c;

    inicio:

    printf("digite as horas no formato xx:yy:zz : ");
    scanf("%d:%d:%d" ,&horas,&minutos,&segundos);

    printf("%d:%d:%d tem %d segundos\n" ,horas,minutos,segundos,converte_hora(horas,minutos,segundos));

    getchar();


    printf("deseja repetir? (s/n)\n");
    c=getchar();

    if (c=='s'){
        goto inicio;
    }


return 0;

}
