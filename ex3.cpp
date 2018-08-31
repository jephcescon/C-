// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
	int valor, auxiliar;
    float valores;
    
    for(int i=1; i<=10; i++){
    	printf("digite o valor para o num %d: ", i);
    	scanf("%d",&valor);
    	
    	if(valor >= 4){
    		valores += valor;
    		auxiliar++;
		}
	}
	
	printf("valor da media eh: %f", (valores) / auxiliar);
}
