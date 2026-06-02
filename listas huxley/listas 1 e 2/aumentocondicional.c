#include <stdio.h>

int main()
{
    double salario,salarioaument, aumentoper,valoraument;

    scanf("%lf",&salario);
    
    if (salario <=280)
    {
        aumentoper = 20;
        valoraument = salario *0.2;
        salarioaument = salario * 1.2;  
    }
    else if (salario >280 && salario <700)
    {
        aumentoper = 15;
        valoraument = salario *0.15;
        salarioaument = salario * 1.15;  
    }
    else if (salario >700 && salario <1500)
    {
        aumentoper = 10;
        valoraument = salario *0.10;
        salarioaument = salario * 1.10;  
    }
    else 
    {
        aumentoper = 5;
        valoraument = salario *0.05;
        salarioaument = salario * 1.05;  
    }
    printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n",salario,aumentoper,valoraument,salarioaument);
    return 0;

}