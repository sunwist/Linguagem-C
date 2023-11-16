#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Uma pequena loja de artesanato possui apenas um vendedor e comercializa cinco tipos de objetos. O vendedor recebe
// mensalmente, salário de R$ 545,00, acrescido de 5% do valor total de suas vendas. O valor unitário dos objetos deve
// ser informado e armazenado em um vetor; a quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição.
// Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com
// tamanho dez). Depois, determine e mostre:

// Um relatório contendo: quantidade vendida, valor unitário e valor total de cada
// objeto. Ao final, deverão ser mostrados o valor geral das vendas e o valor da
// comissão que será paga ao vendedor; e
// O valor do objeto mais vendido e sua posição no vetor (não se preocupe com
// empates).

int main()
{
    float preco[10], total=0, geral=0, comissao=0;
    int i, qtd_vend[10], mais_vend=0, posicao=0;
    
    printf("------------- Loja de Artesanato");
    
    for(i=0; i<5; i++){
        printf("\n\nObjeto %d", i + 1);
        printf("\nValor Unitario: "); scanf(" %f", &preco[i]);
        fflush(stdin);
        printf("Quantidade Vendida: "); scanf(" %d", &qtd_vend[i]);
        fflush(stdin);
    }

    printf("\n\n------------- Relatorio");
    
    for(i=0; i<5; i++){
        printf("\n\nObjeto: %d", i + 5);
        printf("\nValor Unitario: %.2f", preco[i]);
        // valor todal de cada objeto
        total = preco[i] * qtd_vend[i];
        printf("\nValor Geral das Vendas: %.2f", total);
        // valor geral das vendas e comissao
        geral += preco[i] * qtd_vend[i];
        comissao = geral * 0.05;
        
        if(qtd_vend[i]>mais_vend){
            mais_vend = qtd_vend[i];
            posicao = i;
        }
    }
    
    printf("\n\nValor Geral das Vendas......... %.2f", geral);
    printf("\nValor da Comissao......... %.2f", comissao);
    printf("\nObjeto %d é o mais vendido", posicao);

    return 0;
}