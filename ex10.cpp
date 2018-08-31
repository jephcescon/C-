// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>
    
//metodo inicial pra começar a rodar o codigo
int main()
{
    //Declarando variaveis
    float NP1, NP2, PIM;
    
    printf("Digite a nota da NP1: ");
    scanf("%f", &NP1);
    
    printf("Digite a nota da NP2: ");
    scanf("%f", &NP2);
    
    printf("Digite a nota do PIM: ");
    scanf("%f", &PIM);
    
    printf("Sua media eh: %f", (NP1 * 0.4) + (NP2 * 0.4) + (PIM * 0.2));
    
}
