/** Uloha5_4.c Vymena ukazovatelov
*autor: Rastislav Pasek
*datum: 18.10.2022
*/

#include <stdio.h>

void vymen_ukazovatele(int **x,int **y)
{
    int *pom =*x;
    *x=*y;
    *y=pom;
}

int main(void)
{
    int a=10,b=14;
    int *p_a,*p_b;
    p_a=&a;
    p_b=&b;
    printf("p_a: %p %d\n",(void*)p_a,*p_a);
    printf("p_b: %p %d\n",(void*)p_b,*p_b);
    vymen_ukazovatele(&p_a,&p_b);
    printf("p_a: %p %d\n",(void*)p_a,*p_a);
    printf("p_b: %p %d\n",(void*)p_b,*p_b);
    return 0;
}