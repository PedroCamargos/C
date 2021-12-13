//Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, 
//deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

//Entrada
//A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

//Saída
//O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

#include <stdio.h>

int main(){
    
    float a, media;
    int cont=0, positivos=0;
    
    media = 0;
    
    while (cont<6){
        scanf("%f", &a);
        if (a>0){
            media = media+a;
            positivos++;
        }
        cont = cont+1;
    }
    media = media/positivos;
    
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);
    
    return 0;
}