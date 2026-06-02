#include <stdio.h>

void verdadeiro(int resultado)
{
    printf ("%d\n",resultado);
}

int main(){
    
    int x,y;
    scanf("%d%d",&x,&y);

    
        verdadeiro (x > y);
        verdadeiro (x == y);
        verdadeiro (x < y);
        verdadeiro (x != y );
        verdadeiro (x >= y);
        verdadeiro (x <= y);
        //printf(" ");
    return 0;
}
    
