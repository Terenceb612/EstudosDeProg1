#include <stdio.h>

int main (){

    int ano,dia,hora,idade,idadeems,minuto;

    ano = 365;
    dia = 24;
    hora = 60;
    minuto = 60;
    
    scanf ("%d",&idade);

    idadeems = idade * ano *dia * hora * minuto;

    printf ("%d",idadeems);

    return 0;
}