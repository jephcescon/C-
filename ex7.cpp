// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
    int num;
    
    printf("digite um numero inteiro para mostrar a tabuada: ");
    scanf("%d",&num);
    
    for(int i = 1; i <= 10; i++){
    	//Poderia ter feito a conta aqui (variavelDeclarada = num * i) e guardar numa variavel para mostrar na linha de baixo
    	printf("%d x %d = %d \n", num, i, num * i);
	}
}
