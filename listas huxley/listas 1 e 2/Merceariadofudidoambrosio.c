#include <stdio.h>

int main ()
{
    double a,b,c,d,valor;
    int item,quantidade;
    a = 5.30;
    b = 6.00;
    c = 3.20;
    d = 2.50;
    
   scanf("%d%d",&item,&quantidade);
   
   if (item == 1)
   {
    valor = (quantidade * a);
   }
   else if (item == 2)
   {
    valor = (quantidade * b);
   }
   else if (item == 3)
   {
    valor = (quantidade * c);
   }
   else 
   {
    valor = (quantidade * d);
   }
   if (quantidade >=15 || valor >=40)
   {
    valor*=0.85;
   }
   printf("R$ %.2lf",valor);
   return 0;
   
   

}