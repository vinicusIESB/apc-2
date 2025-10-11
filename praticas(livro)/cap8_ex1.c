#include <stdio.h>
#include <stdlib.h>
struct Endereco{
char rua[50];
int numero;
};
struct cadastro{
char nome[50];
int idade;
struct Endereco endereco;
};
int main(){
struct cadastro c;

 printf("digite seu nome: ");
 fgets(c.nome,50,stdin);

 printf("digite sua idade: ");
 scanf("%d" ,&c.idade);
 getchar();

 printf("digite o nome e o numero da sua rua: ");
 fgets(c.endereco.rua,50,stdin);
 scanf("%d",&c.endereco.numero);

 printf("\nDados cadastrados:\n");
    printf("Nome: %s", c.nome);
    printf("Idade: %d\n", c.idade);
    printf("Endereco: %s,%d" ,c.endereco.rua ,c.endereco.numero);

return 0;
}
