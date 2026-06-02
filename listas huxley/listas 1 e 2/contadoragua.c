#include <stdio.h>

int main (){
    
    int consumo,preco;
    scanf("%d",&consumo);
    

    if (consumo <=10)
    {
        preco = 7;
    }
    else if (consumo >10 && consumo <= 30)
    {
        preco = (consumo-10)+7;
    }
    else if (consumo > 30 && consumo <= 100)
    {
        preco = ((consumo-30)*2) + 27; 
    }
    else if (consumo > 100)
    {
        preco = ((consumo-100)*5)+167;
    }
    printf ("%d",preco);
    

    return 0;
    
}