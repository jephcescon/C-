// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
    int num;
    
    printf("digite um numero inteiro positivo para fazermos uma contagem regresiva: ");
    scanf("%d",&num);
    
    for(int i = num; i >= 0; i--){
    	printf("%d \n", i);
	}
}
