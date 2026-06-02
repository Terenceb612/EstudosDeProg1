
#include <stdio.h>
#include <math.h>

int main (){
    float pi,A,B,C,atri,aret,atrap,acirc,aquad;
    scanf("%f %f %f",&A,&B,&C);
    pi = 3.14159;
    atri = (A*C)/2;
    aret = A*B;
    acirc = pi * C * C;
    atrap = (A+B)*C/2;
    aquad = B * B;

    printf("%.4f TRIANGULO\n",atri);
    printf("%.4f CIRCULO\n",aret);
    printf("%.4f TRAPEZIO\n",atrap);
    printf("%.4f QUADRADO\n",aquad);
    printf("%.4f RETANGULO\n",aret);
    
     
return 0;
}


