#include<stdio.h>
//d1 e v1 é clodes incrementador, começa
//d2 e v2 é bezaliel atacante
//flag: 0 é turno do clodes, 1 é turno do beza
void batalhapokemon(int v1,int v2, int d1, int d2,int flag)
{
    
    if (v1 <= 0)
    {
        printf("Bezaliel\n");
    }
    else if (v2 <= 0)
    {
        printf("Clodes\n");
    }
    else
    {
        if (flag == 0)
        {
            if (d1 < v2)
            {
                d1 += 50;
                return batalhapokemon(v1,v2,d1,d2,1);
            }
            else
            {
                v2 -= d1;
                return batalhapokemon(v1,v2,d1,d2,1);
            }
        }
        else 
        {
            v1 -= d2;
            return batalhapokemon(v1,v2,d1,d2,0);
        }
    }
}
/////////////////////////
void contador (int n)
{
    if (n == 0)
    {
        return;
    }
    else
    
    {
        int v1,v2,d1,d2;
        scanf("%d%d%d%d",&v1,&v2,&d1,&d2);
        batalhapokemon(v1,v2,d1,d2,0);
        return contador (n-1);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    
    contador (n);
}