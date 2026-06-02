#include <stdio.h>

void contagemdeprogramas(int diadasemana,int metalinhas,int metaprogramas, int linhasmax,int diaprodutivo)
{

   //o dia mais produtivo é aquele que teve o maior numero de linhas produzidas
   //preciso  atribuir o valor de produtividade ao valor de linhas produzidas naquele dia, e de diaprodutivo ao dia da semana
   
    if (diadasemana > 7)
    {
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",metaprogramas);
            printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n",metalinhas);
        switch (diaprodutivo)
        {
        case 1 : 
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
            break;
        case 2 : 
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
            break;
        case 3 : 
            printf("DIA QUE MAIS PRODUZIU: TERCA");
            break;
        case 4 : 
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
            break;
        case 5 : 
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
            break;
        case 6 : 
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
            break;
        
        default: 
            printf("DIA QUE MAIS PRODUZIU: SABADO");
            break;
        }
        return;
    }
    else
    {
        int ndeprogramas, quantdelinhas;
        scanf("%d%d",&ndeprogramas,&quantdelinhas);

        if(ndeprogramas >= 5)
        {
            metaprogramas += 1;
        }
       
        if (quantdelinhas >= 100 )
        {
            metalinhas += 1;
        }
    
        if (linhasmax < quantdelinhas)
        {
            linhasmax = quantdelinhas;
            diaprodutivo = diadasemana;
        }
        return contagemdeprogramas(diadasemana + 1, metalinhas, metaprogramas,linhasmax,diaprodutivo);
    } 
}
//////
int main ()
{
    contagemdeprogramas(1,0,0,-1,0);
    
    return 0;
}