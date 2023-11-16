#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Faça um programa que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre
// a quantidade de elementos entre 15 e 20.

int main(){
    int i, j, matriz[3][5], qtd=0;
    
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("\nInforme os dados da matriz ");
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    for(i=0; i<3; i++){
        printf("\n\n");
        for(j=0; j<5; j++){
            printf(" %d", matriz[i][j]);
            if( matriz[i][j] > 15 && matriz[i][j] <20) {
                qtd++;
            }
        }
    }
    
    printf("\n\nQuantidade de Elementos entre 15 e 20: %d", qtd);
    
}