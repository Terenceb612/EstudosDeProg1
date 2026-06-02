#include <stdio.h>
 
int main(){

    double salario;

    scanf("%lf",&salario);

    if (salario > 500)
    {
        salario *= 1.1;
    }
    else if (salario >300 && salario < 500)
    {
        salario *= 1.07;
    }
    else 
    {
        salario *= 1.05;
    }

    printf ("%.2lf",salario);

    return 0;

}