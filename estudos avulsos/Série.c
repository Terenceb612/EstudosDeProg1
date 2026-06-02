#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehprimo(int num, int i);
int proxprimo(int num);
int fatorial(int num,int cont,int resp);
double resp(int limite, double resposta, int cont);

int main(){
    int lim;
    scanf("%d", &lim);
    double respfinal = resp(lim, 0, 1);
    printf("\n%.2lf", respfinal);
    return 0;
}

double resp(int limite, double resposta, int cont){
    if(cont > limite){
        return resposta;
    }
    double fator = fatorial(cont, 1, 1);
    int div = proxprimo(cont);
    printf("%d!/%d", cont, div);
    if (cont < limite){
        printf(" + ");
    }
    double acumulo = fator / (double)div;
    return resp(limite, resposta + acumulo, cont + 1);
}

int ehprimo(int num, int i){
    if (num == 1){
        return 0;
    }
    if (i > num / 2){
        return 1;
    }
    if(num % i == 0){
        return 0;
    }
    return ehprimo(num, i + 1);
}

int proxprimo(int num){
    if (num < 3){
        return num;
    }
    if(ehprimo(num, 2)){
        return num;
    }
    return proxprimo(num + 1);
}

int fatorial(int num,int cont,int resp){
    if (cont > num){
        return resp;
    }
    else{
        return fatorial(num, cont + 1, resp * cont);
    }
}
