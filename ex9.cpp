// incluindo as bibliotecas necessarias
#include <stdio.h>
#include <stdlib.h>
    
//metodo inicial pra começar a rodar o codigo
int main()
{
    //Declarando variaveis
    int idade, faixaA, faixaB, faixaC, faixaD;
    
    for(int i = 1; i <= 15; i++){
    	printf("Digite a idade da pessoa num %d: ", i);
    	scanf("%d",&idade);
    	
    	if(idade < 12){
    		faixaA++;
		}
		
		if(idade >= 12 && idade < 18){
    		faixaB++;
		}
		
		if(idade >= 18 && idade < 30){
    		faixaC++;
		}
		
		if(idade >= 30){
    		faixaD++;
		}
	}
	
	printf("Existem %d pessoa(s) menor que 12 anos \n", faixaA);
	printf("Existem %d pessoa(s) maior que 12 e menor que 18 anos \n", faixaB);
	printf("Existem %d pessoa(s) maior que 18 e menor que 30 anos \n", faixaC);
	printf("Existem %d pessoa(s) maior que 30 anos \n", faixaD);
}
