#include <stdio.h>

int main (){
    int n1,n2,n3;
    float media;

    scanf("%d %d %d",&n1,&n2,&n3);

    media = (n1 + n2 +n3)/3.0;

    if (n1>100 || n1<0 || n2>100 || n2<0 || n3>100 || n3<0){
    printf("media invalida");
    }
    
    else if (media >70)
    {
    printf("A media do aluno foi %.2f e ele foi APROVADO",media);
    }
    else if (media < 40)
    {
    printf("A media do aluno foi %.2f e ele foi REPROVADO",media);   
    }
    else if (media>=40 && media <=70)
    {
    printf("A media do aluno foi %.2f e ele foi FINAL",media);
    }

    return 0;
    
    
}