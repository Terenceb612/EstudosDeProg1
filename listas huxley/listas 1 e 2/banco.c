#include <stdio.h>

int main (){
    
    double salario,pendencia,parcela;
    //valor maximo mensal da parcela vai ser o salario menos as pendncias com outros emprestimos se as pendencias forem 30% do salario
    scanf("%lf%lf",&salario,&pendencia);

    if (pendencia >= salario * 0.3)
    {
        parcela = 0;
    }
    else
    {
        parcela = (salario * 0.3) - pendencia;
    }

    printf("%.2lf",parcela);

    return 0;




}
