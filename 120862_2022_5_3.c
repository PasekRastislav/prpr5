/** Uloha5_3.c Vypocet kvadratickej rovnice
*autor: Rastislav Pasek
*datum: 18.10.2022
*/

#include <stdio.h>
#include <math.h>

void kvadraticka_rovnica(int a,int b,int c,int *k,double *k1,double *k2)
{
    double D;
    D=(b*b)-4*a*c;
    if(D==0)
    {
        *k=1;
        *k1=-b/(2*a);
        *k2=0;
    }
    if(D>0)
    {
        *k=2;
        *k1=(-b+sqrt(D))/(2*a);
        *k2=(-b-sqrt(D))/(2*a);
    }
}
int main()
{
    int a,b,c,k;
    double k1,k2;
    scanf("%d %d %d",&a,&b,&c);
    kvadraticka_rovnica(a,b,c,&k,&k1,&k2);
    printf("Pocet korenov kvadratickej rovnice je: %d\n",k);
    printf("Prvy koren ma hodnotu: %lf\n",k1);
    printf("Druhy koren ma hodnotu: %lf\n",k2); 
    return 0;
}