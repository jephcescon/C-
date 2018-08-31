// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
    int A, B, Auxiliar;
    
    printf("digite um numero para A: ");
    scanf("%d",&A);
    
    printf("digite um numero para B: ");
    scanf("%d",&B);
    
    //trocando valores de lugar com variavel auxiliar
    
    Auxiliar = A;
    A = B;
    B = Auxiliar;
    
    printf("Novo valor de A eh: %d \n", A);
    printf("Novo valor de B eh: %d \n", B);
}
