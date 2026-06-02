 #include <stdio.h>

int main ()
{
    int problemas,resolvidos;
    double porcfeitas,chance;

    scanf("%d%d",&problemas,&resolvidos);
    
    porcfeitas = (((double)resolvidos /(double)problemas));
    
    if (porcfeitas < 0.2)
    {
        printf("%.2lf%% 4.40%% Pessimo",porcfeitas*100);
    }
    else if (porcfeitas>=0.2 && porcfeitas <0.4)
    {
        printf("%.2lf%% 31.65%% Ruim",porcfeitas*100);
    }
    else if (porcfeitas>=0.4 && porcfeitas <0.6)
    {
        printf("%.2lf%% 56,82%% Bom",porcfeitas*100);
    }
    else if (porcfeitas>=0.6 && porcfeitas <0.8)
    {
        printf("%.2lf%% 80,00%% Muito Bom",porcfeitas*100);
    }
    else if (porcfeitas>=0.8 && porcfeitas <=1)
    {
        printf("%.2lf%% 94,00%% Excelente",porcfeitas*100);
    }
return 0;

}   
