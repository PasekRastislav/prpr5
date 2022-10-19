/** Uloha5_1.c Vypocet obsahu a obvodu obdlznika
*autor: Rastislav Pasek
*datum: 18.10.2022
*/

#include <stdio.h>

void nacitaj(double *a,double *b)
{
    scanf("%lf %lf",a,b);
}
void vypocitaj(double a,double b, double *O, double *S)
{
    *S=a*b;
    *O=2*(a+b);
}
int main (void)
{
    double a,b,O,S;
    nacitaj(&a,&b);
    vypocitaj(a,b,&O,&S);
    printf("Obsah: %.3lf\n",S);
    printf("Obvod: %.3lf\n",O);
    return 0;
}