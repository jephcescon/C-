// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>

//metodo inicial pra começar a rodar o codigo
int main()
{
	//Declarando variaveis
    int a, b, c;

	//Escrenvendo na tela com Printf
    printf("digite o valor para A:");
    //recebendo o primeiro valor da variavel A usando Scanf
    scanf("%d",&a);
    
	//Escrenvendo na tela com Printf
	printf("digite o valor para B:");
    //recebendo o primeiro valor da variavel B usando Scanf
	scanf("%d",&b);
	
	//Escrenvendo na tela com Printf
    printf("digite o valor para C:");
    //recebendo o primeiro valor da variavel C usando Scanf
	scanf("%d",&c);
	
	//verificando se A é menor que B 'e' C
    if(a < b && a < c){
    	//Sim A é menor
    	printf("A é o menor valor %d", a);
	}else{
		//Verificando se B é menor que A 'e' C
	    if(b <a && b<c){
	    	//Sim B é menor
		   printf("B é o menor valor %d", b);
	    }else{
	    	// restou essa opção então C é menor
	        printf("C é o menor valor %d", c);
	    }
    }
}
