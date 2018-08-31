// incluindo as bibliotecas necessarias
#include <stdio.h>
#include<stdlib.h>
    
//metodo inicial pra começar a rodar o codigo
int main()
{
    //Declarando variaveis
    int finalPlaca;
    
    printf("Digite o ultimo numero da sua placa: ");
    scanf("%d", &finalPlaca);
    
    
    if(finalPlaca == 1 || finalPlaca == 2){
        printf("Segunda");
    }
    if(finalPlaca == 3 || finalPlaca == 4){
        printf("Terca");
    }
    if(finalPlaca == 5 || finalPlaca == 6){
        printf("Quarta");
    }
    if(finalPlaca == 7 || finalPlaca == 8){
        printf("Quinta");
    }
    if(finalPlaca == 9 || finalPlaca == 0){
        printf("Sexta");
    }
    
}
