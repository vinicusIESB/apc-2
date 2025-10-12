#include <stdio.h>
#include <stdlib.h>




int main(){


int a;
int *b,**c,***d;

puts("digite o numero que sera calculado: " );
scanf("%d" ,&a);

b=&a;

printf("seu dobro é: %d \n" ,(*b)*2);

c=&b;

printf("seu triplo é: %d \n" ,(**c)*3);

d=&c;

printf("seu quadruplo é: %d \n" ,(***d)*4);






    



return 0;   
}
