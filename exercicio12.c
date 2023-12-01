#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int idade, mulheres=0, homens =0, idosa=0;
    float peso, soma=0;
    char sexo, resp;
    
    while(resp!='N'){
        printf("\n\nIdade: "); scanf(" %d", &idade);
        printf("Peso: "); scanf(" %f", &peso);
        printf("Sexo (F ou M): "); scanf(" %c", &sexo);
        sexo=toupper(sexo);
        
        if(sexo=='M'){
            homens++;
        }else{
            mulheres++;
            soma+=peso;
        }
        
        if(idade>idosa){
            idosa=idade;
        }
        
        printf("\n\nDeseja continuar no sistema.......... "); scanf(" %c", &resp);
        resp=toupper(resp);
    }
    
    printf("\n\nQuantidade de Mulheres: %d", mulheres);
    printf("\nQuantidade de Homens: %d", homens);
    printf("\nA pessoa mais idosa tem %d de idade", idosa);
    printf("\nA media dos pesos do sexo feminino e %.2f", soma/mulheres);
    
    
    return 0;
}