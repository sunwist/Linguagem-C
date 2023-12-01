#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor, armazene a
// quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada dez locações, o cliente
// tem direito a uma locação grátis. Faça um programa que mostre o nome de todos os clientes, com a quantidade de
// locações grátis a que ele tem direito.

int main()
{
    char nomes[8][20];
    int i, qtd[8], qtd_loc[8];
    
    for(i=0; i<8; i++){
        
        printf("\n\n---------- Cliente %d", i + 1);
        printf("\nNome:\t"); scanf(" %s", nomes[i]);
        fflush(stdin);
        printf("Quantidade de DVDs Locados:\t"); scanf(" %d", &qtd[i]);
        fflush(stdin);
        
        qtd_loc[i] = qtd[i] / 10;
        
    }
    
    printf("\n\n---------- Relatorio");
    
    for(i=0; i<8; i++){
        
        printf("\n\n---------- Cliente ", i + 1);
        printf("\nNome: %s", nomes[i]);
        printf("\nQuantidade de Locacoes Gratis: %d", qtd_loc[i]);
    }
    
    return 0;
}