// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>
    
//metodo inicial pra começar a rodar o codigo
int main()
{
    //Declarando variaveis
    int idade;
    float preco;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
 
 	if(idade >= 65){
 		printf("Voce tem desconto no preco do pronto de R$ %f por R$ %f", preco, preco * 0.85);	
	 }else{
	 	printf("Voce nao tem desconto no preco do pronto R$ %f", preco);	
	 }
}
