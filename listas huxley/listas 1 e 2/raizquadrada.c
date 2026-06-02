#include <stdio.h>
#include <math.h>

int main ()
{
    double a,b,c;

    double raiz1,raiz2,delta;

    scanf("%lf%lf%lf",&a,&b,&c);

    if (a == 0)
    {
        printf("NEESG\n");
        
       return 0;
    }

    delta = pow(b,2) - 4 * a * c;
    /*
    raiz1 = (-b + sqrt(delta))/ (2.0 * a);
    raiz2 = (-b - sqrt(delta))/ (2.0 * a);
    */
    if (delta < 0)
    {
        printf("NRR\n");
        
       return 0;
    }
    else if (delta == 0 )
    {
        raiz1 = -b/(2.0 *a);
        raiz2 = raiz1;
        
        printf("%.2lf\n%.2lf\n",raiz1,raiz2);
        
        //return 0;
    }
    else if(delta > 0)
    {
    raiz1 = (-b + sqrt(delta))/ (2.0 * a);
    raiz2 = (-b - sqrt(delta))/ (2.0 * a);

    printf ("%.2lf\n%.2lf\n",raiz1,raiz2);
    }

        return 0;
}


