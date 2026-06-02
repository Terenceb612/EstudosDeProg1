#include <stdio.h>


int main()
{
   int idade, genero;
   
   scanf("%d%d",&genero,&idade);

   if (idade == 1 && genero == 0) //condição pra ser barato
   {
    printf ("1");
   }
   else 
   {
    printf("0");
   }
return 0;
}