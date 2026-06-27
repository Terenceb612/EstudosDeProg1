#include <stdio.h>
#include <math.h>

int main ()
{
    double DistanciaFugitivo, VelocidadeFugitivo, VelocidadeGuardacosteira;

    while (scanf("%lf%lf%lf",&DistanciaFugitivo,&VelocidadeFugitivo,&VelocidadeGuardacosteira) != EOF && !(DistanciaFugitivo == -1 && VelocidadeFugitivo == -1 && VelocidadeGuardacosteira == -1 ))
    {
        // se a guarda nao for mais rapida que o fugitivo, nunca alcanca (catetos nao fecham o triangulo)
        if (VelocidadeGuardacosteira <= VelocidadeFugitivo)
        {
            printf("N\n");
            continue;
        }

        double TempoIntercepcao = DistanciaFugitivo / sqrt(VelocidadeGuardacosteira*VelocidadeGuardacosteira - VelocidadeFugitivo*VelocidadeFugitivo);
        double TempoLimite = 12.0/VelocidadeFugitivo;

        if (TempoIntercepcao <= TempoLimite)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
