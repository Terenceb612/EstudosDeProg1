#include <stdio.h>

int main (){

    double pi,raio,area;

    pi = 3.14159;

    scanf("%lf",&raio);

    raio/=100;

    area = pi * raio * raio; 
    
    printf("Area = %.4lf\n",area);

    return 0;

}
