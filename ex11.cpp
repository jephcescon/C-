// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>
    
//metodo inicial pra começar a rodar o codigo
int main()
{
    //Declarando variaveis
    int num, qtdDivisores;
    
    printf("Digite um numero para saber se ele eh primo ou nao: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
    	if(num % i == 0){
    		qtdDivisores++;
		}
    }

	if (qtdDivisores == 2){
		printf("eh um numero primo");
	}else{
		printf("nao eh um numero primo");
	}

}
