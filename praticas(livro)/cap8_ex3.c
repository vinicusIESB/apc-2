#include <stdio.h>
#include <stdlib.h>


struct ponto{
  int x;
  int y;

};

int main(){

struct ponto p1 ; struct ponto p2;

printf("digite as coordenadas do primeiro ponto: \n");
scanf("%d" ,&p1.x);
scanf("%d" ,&p1.y);

printf("digite as coordenadas do segundo ponto: \n");
scanf("%d" ,&p2.x);
scanf("%d" ,&p2.y);

int dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

printf("a distancia entre os dois pontos = %d" ,dist);








return 0;
}
