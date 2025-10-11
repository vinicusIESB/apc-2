#include <stdio.h>
#include <stdlib.h>


struct atleta {
 char esporte[50];
 int idade;
 float altura;
};


int main(){

 struct atleta a[5];
 struct atleta velhote;
 struct atleta altao;

 for(int i=0;i<5;i++){
   printf("digite os dados do atleta %d: \n",i+1);

   printf("esporte: ");
   fgets(a[i].esporte,50,stdin);

   printf("idade: ");
   scanf("%d" ,&a[i].idade);

   printf("altura: ");
   scanf("%f", &a[i].altura);
   getchar();

 }

 velhote = a[0];

 for(int i=0;i<5;i++){

   if(a[i].idade>velhote.idade){
     velhote=a[i];
   }
 }

  printf("atleta mais velho: \n");
  printf("esporte: %s" ,velhote.esporte);
  printf("idade: %d\n" ,velhote.idade);
  printf("altura: %0.2f\n" ,velhote.altura);

  altao = a[0];


  for(int i=0;i<5;i++){

    if(a[i].altura>altao.altura){
     altao=a[i];
   }
 }

   printf("atleta mais alto: \n");
   printf("esporte: %s" ,altao.esporte);
   printf("idade: %d\n" ,altao.idade);
   printf("altura: %0.2f\n" ,altao.altura);









return 0;
}

