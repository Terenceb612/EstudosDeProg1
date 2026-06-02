#include <stdio.h>

int main (){

    float num1, num2, num3, media;
    
    scanf ("%f %f %f",&num1,&num2,&num3);

     media = (num1+num2+num3)/3;

    if (num1 && num2 &&num3 > media)
     printf ("3");

    else if (num1 && num2 > media)
    printf ("2");
    
    else if (num2 && num3 > media)
    printf ("2");

    else if (num1 && num3 > media)
    printf ("2");
    
    else if (num1 > media)
    printf ("1");
    
      else if (num2 > media)
    printf ("1");

      else if (num3 > media)
    printf ("1");



return 0;
}