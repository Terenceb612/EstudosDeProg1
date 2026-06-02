#include <stdio.h>

int main (){

    int n,h;
    double vh,s;

    scanf("%d %d %lf",&n,&h,&vh);

    s = h * vh;

    printf("NUMBER = %d\n",n);
    printf("SALARY = R$ %.2lf\n",s);

    return 0;

}