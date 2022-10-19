/** Uloha5_2.c Vypisanie vacsieho cisla
*autor: Rastislav Pasek
*datum: 18.10.2022
*/

#include <stdio.h>

int maximum(int *a,int *b)
{
    if(*a==*b) scanf("%d %d",a,b);
    if(*a<*b) return *b; 
    else return *a;
}
int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=maximum(&a,&b);
    printf("Cislo %d je vacsie.",max);
    return 0;
}