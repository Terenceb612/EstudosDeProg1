#include <stdio.h>
//se a pessoa a for mais baixa que a segunda, e 
    void peoplesorting(double a, double b, double c, double d, double aux)
{
    double pessoas[4];
    pessoas[0] = a;
    pessoas[1] = b;
    pessoas[2] = c;
    pessoas[3] = d;
    
    if (pessoas[0] > pessoas[1]) { aux = pessoas[0]; pessoas[0] = pessoas[1]; pessoas[1] = aux; }
    if (pessoas[0] > pessoas[2]) { aux = pessoas[0]; pessoas[0] = pessoas[2]; pessoas[2] = aux; }
    if (pessoas[0] > pessoas[3]) { aux = pessoas [0]; pessoas[0] = pessoas [3]; pessoas [3] = aux;}
    if (pessoas[1] > pessoas[2]) { aux = pessoas [1]; pessoas[1] = pessoas[ 2]; pessoas [2] = aux ;}
    if (pessoas[1] > pessoas[3]) {  aux = pessoas [1]; pessoas[1] = pessoas[ 3]; pessoas [3] = aux ; }
    if (pessoas[2] > pessoas[3]) {  aux = pessoas [2]; pessoas[2] = pessoas[ 3]; pessoas [3] = aux ; }  

   printf("%.2f\n", pessoas[0]);
   printf("%.2f\n", pessoas[2]);
   printf("%.2f\n", pessoas[3]);
   printf("%.2f\n", pessoas[1]);
}
int main ()
{
    double a,b,c,d;

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    peoplesorting(a,b,c,d,0);

    return 0;
   
}