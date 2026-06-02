#include <stdio.h>

 double coeficiente (double a, double b)
{
    return (a/b);
}

int main ()
{
    int alunos,livros;

    scanf("%d%d",&livros,&alunos);
    
    if (coeficiente(alunos,livros) <= 1.0/8.0)
    {
        printf("A\n");
    }
    else if (coeficiente( alunos,livros) >= (1.0/9.0) && coeficiente( alunos,livros) <=(1.0/12.0))
    {
        printf("B\n");
    }
     else if (coeficiente( alunos,livros) >= (1.0/13.0) && coeficiente( alunos,livros) <=(1.0/18.0))
    {
        printf("C\n");
    }
    else 
    {
        printf("D\n");
    }

    return 0;
}