#include <stdio.h>
int main (){

float pi,r1,r2,ac1,ac2;

scanf("%f %f",&r1,&r2);

pi = 3.14;
ac1 = pi * r1;
ac2 = pi * r2;

if (ac1 > ac2) {

 printf("Primeiro círculo");

}

else if (ac2 > ac1){

    printf("Segundo círculo");
}

else if (ac1 = ac2) {

    printf("Iguais");
}

return 0;
}