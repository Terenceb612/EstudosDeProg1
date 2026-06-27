#include <stdio.h>

int main()
{
    double angulo1, angulo2;

    scanf("%lf%lf",&angulo1,&angulo2);

     double angulo3 = 180 - angulo1 - angulo2;

     printf("3o angulo=%.6lf",angulo3);

     return 0;

     
}