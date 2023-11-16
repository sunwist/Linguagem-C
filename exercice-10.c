#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Faça um programa que receba o total de vendas de cada vendedor e armazene-as em um vetor. Receba também o percentual de
// comissão de cada vendedor e armazene-as em outro vetor. Receba os nomes dos vendedores e armezene-os em outro vetor. Existem
// apenas 10 vendedores. Calcule e mostre:

// Um relatório com os nomes dos vendedores e os valores a receber;
// O total de vendas de todos os vendedores;
// O maior valor a receber e quem receberá;
// O menor valor a receber e quem receberá.

int main()
{
    int vendas[10];
    int i, soma=0, vend_maior=0, vend_menor=0;
    float comissao[10], valores[10];
    float maior=0, menor=0, valor=0;
    char nomes[10][20];
    
    for(i=0;i<10;i++){
        printf("\n------------ Vendedor %d", i + 1); 
        printf("\nNome do Vendedor:\t"); scanf(" %s", nomes[i]);
        fflush(stdin);
        
        printf("Total de Vendas:\t"); scanf(" %d", &vendas[i]);
        fflush(stdin);
        soma=soma+vendas[i];
        
        printf("Percentual da Comissão:\t"); scanf(" %f", &comissao[i]);
        fflush(stdin);
        
        valor = vendas[i] + (vendas[i] * comissao[i] / 100);
        
        valores[i]=valor;
        
        if(valor>maior){
            maior=valor;
            vend_maior= i + 1;
        }
        
        if(i==0){
            menor=valor;
        }else if(valor<menor){
            menor=valor;
            vend_menor= i + 1;
        }
        
    }
    
    printf("\n------------ Fim do Cadastro");
    
    printf("\n\n------------ Relatorio");
    
    for(i=0; i<10; i++){
        printf("\n\nVendedor: %d", i + 1);
        printf("\nNome do Vendedor: %s", nomes[i]);
        printf("\nValor a receber: %.2f", valores[i]);
        
    }
    printf("\n\n------------");
    printf("\nTotal de Vendas: %d", soma);
    printf("\nO maior valor é de %.2f referente ao vendedor %d", maior, vend_maior);
    printf("\nO menor valor é de %.2f referente ao vendedor %d", menor, vend_maior);

    return 0;
}