// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
    int altura, base, area;
    
    
    //Escrenvendo na tela com Printf
    printf("digite a altura do triangulo:");
    //recebendo o primeiro valor da variavel ALTURA usando Scanf
    scanf("%d",&altura);
    
	//Escrenvendo na tela com Printf
	printf("digite o valor para Base:");
    //recebendo o primeiro valor da variavel Base usando Scanf
	scanf("%d",&base);
	
	area = (base * altura)/ 2;
	
	
	//Escrenvendo na tela com Printf
	printf("O valor da area eh: %d", area);
	
}
