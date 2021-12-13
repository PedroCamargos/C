//Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
//A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
//As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
//A seguir mostre a relação de notas necessárias.

//Entrada
//O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

//Saída
//Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

//Obs: Utilize ponto (.) para separar a parte decimal.
#include <stdio.h>

int main(){
    
    float valor, cem, cinquenta, vinte, dez, cinco, dois, moedaum, moedacinquenta, moedavintecinco, moedadez, moedacinco, moedazeroum;
    int x100, x50, x20, x10, x5, x2, x0100, x050, x025, x010, x005, x001;
    
    scanf("%f", &valor);
    
    printf("NOTAS:\n");
    
        cem=valor/100.00;
            x100=cem;
                printf("%d nota(s) de R$ 100.00\n", x100);
        
        cinquenta=(valor-(x100*100.00))/50.00;
            x50=cinquenta;
                printf("%d nota(s) de R$ 50.00\n", x50);
        
        vinte=(valor-((x100*100.00)+(x50*50.00)))/20.00;
            x20=vinte;
                printf("%d nota(s) de R$ 20.00\n", x20);
        
        dez=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)))/10.00;
            x10=dez;
                printf("%d nota(s) de R$ 10.00\n", x10);
                
        cinco=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)))/5.00;
            x5=cinco;
                printf("%d nota(s) de R$ 5.00\n", x5);
        
        dois=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)))/2.00;
            x2=dois;
                printf("%d nota(s) de R$ 2.00\n", x2);
        
    printf("MOEDAS:\n");
    
        moedaum=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)))/1.00;
            x0100=moedaum;
                printf("%d moeda(s) de R$ 1.00\n", x0100);
                
        moedacinquenta=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)+(x0100*1.00)))/0.50;
            x050=moedacinquenta;
                printf("%d moeda(s) de R$ 0.50\n", x050);
                
        moedavintecinco=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)+(x0100*1.00)+(x050*0.50)))/0.25;
            x025=moedavintecinco;
                printf("%d moeda(s) de R$ 0.25\n", x025);
                
        moedadez=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)+(x0100*1.00)+(x050*0.50)+(x025*0.25)))/0.10;
            x010=moedadez;
                printf("%d moeda(s) de R$ 0.10\n", x010);
                
        moedacinco=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)+(x0100*1.00)+(x050*0.50)+(x025*0.25)+(x010*0.10)))/0.05;
            x005=moedacinco;
                printf("%d moeda(s) de R$ 0.05\n", x005);
                
        moedazeroum=(valor-((x100*100.00)+(x50*50.00)+(x20*20.00)+(x10*10.00)+(x5*5.00)+(x2*2.00)+(x0100*1.00)+(x050*0.50)+(x025*0.25)+(x010*0.10)+(x005*0.05)))/0.01;
            x001=moedazeroum;
                printf("%.0f moeda(s) de R$ 0.01\n", moedazeroum);
        
    return 0;
}