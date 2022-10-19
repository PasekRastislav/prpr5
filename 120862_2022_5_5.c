/** Uloha5_5.c Delitele cisla z pola
*autor: Rastislav Pasek
*datum: 18.10.2022
*/

#include <stdio.h>
int delitele(int x[],int pocetx,int y[],int k)
{
    int pom=0;
    for (int i=0;i<pocetx;i++)
    {
        if (x[i]>0 && k%x[i]==0)
        y[pom++]=x[i];
    }
    return pom;
}
int main(void)
{
    int x[10]={4,7,10,2,3,9,6,5,8,12};
    int pocetx=10;
    int y[10];
    int i,pocety=delitele(x,pocetx,y,24);
    printf("pocety: %d\ny: {",pocety);
    for(i=0;i<pocety;i++)
    {
        if(i>0)
         printf(", ");
        printf("%d",y[i]);
        
    }
    printf("}");
    return 0;
}