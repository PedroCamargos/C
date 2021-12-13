//Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
//Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

//Entrada
//Leia três valores de ponto flutuante (double) A, B e C.

//Saída
//Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". 
//Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
//Imprima sempre o final de linha após cada mensagem.

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, raiz1, raiz2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = ((b*b)-(4*a*c));
    if (a>0.0 && b>0.0 && c>0.0 && delta>0.0){
        raiz1 = ((-1*b)+sqrt(delta))/(2*a);
        raiz2 = ((-1*b)-sqrt(delta))/(2*a);
            printf("R1 = %.5lf\n",raiz1);
            printf("R2 = %.5lf\n",raiz2);
    }else{
        printf("Impossivel calcular\n");
    }
    return 0;
}