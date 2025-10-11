#include <stdio.h>
#include <stdlib.h>


struct hora{
  int hora;
  int minuto;
  int segundo;
};


int main(){

 struct hora h [5];
 struct hora maiorhora;


     for(int i=0;i<5;i++){
        printf("digite os respectivos horarios contendo:hora,minuto e segundo formato x:y:z: \n");
        scanf("%d" ,&h[i].hora);
        scanf("%d" ,&h[i].minuto);
        scanf("%d" ,&h[i].segundo);
     }

     maiorhora = h[0];

    for (int i = 1; i < 5; i++) {
        if (h[i].hora > maiorhora.hora) {
                maiorhora = h[i];
        }
        else if (h[i].hora == maiorhora.hora && h[i].minuto > maiorhora.minuto) {
                maiorhora = h[i];
        }
        else if (h[i].hora == maiorhora.hora && h[i].minuto == maiorhora.minuto && h[i].segundo > maiorhora.segundo) {
                maiorhora = h[i];
        }
    }


    printf("\nMaior hora: %02d:%02d:%02d\n", maiorhora.hora, maiorhora.minuto, maiorhora.segundo);

    return 0;
}
