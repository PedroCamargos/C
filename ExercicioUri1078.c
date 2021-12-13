//Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
//1 x N = N      2 x N = 2N        ...       10 x N = 10N

//Entrada
//A entrada contém um valor inteiro N (2 < N < 1000).

//Saída
//Imprima a tabuada de N, conforme o exemplo fornecido.

#include <stdio.h>

int main(){
    
    int cont=0, valor, tabuada;
    
    scanf("%d", &valor);
    
    while (cont<10){
        cont = cont+1;
        tabuada = valor*cont;
        printf("%d x %d = %d\n",cont, valor, tabuada);
    }
    
    return 0;
}