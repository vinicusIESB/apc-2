#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 5;
    int *ptr1;
    ptr1 = &i;

    printf("endereço de ptr = %p\n", &ptr1);
    printf("endereço de i = %p\n", ptr1);
    printf("valor de i = %d\n", *ptr1);  
    
    *ptr1 = 7;

    printf("endereço de ptr = %p\n", &ptr1);
    printf("endereço de i = %p\n", ptr1);
    printf("valor de i = %d\n", *ptr1);   

    int numero;
    int *ptr2;
    ptr2 = &numero;
    *ptr2 = 5;

    printf("%d\n", numero);
    
    
    int n1=3,n2=5;

    printf("n1=%d,n2=%d\n" ,n1,n2);

    int *p1,*p2,temp;

    p1=&n1;
    p2=&n2;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

     printf("n1=%d,n2=%d\n" ,n1,n2);








    return 0;
}