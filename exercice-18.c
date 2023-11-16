#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Faça um programa que leia um vetor com 10 posições para números reais. Depois da leitura, divida todos
// os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

int main(){
    int i;
    float num[10], maior=0;
    
    printf("\n---------- Entrada\n");
    
    for(i=0; i<10; i++){
        printf("Numero: "); scanf(" %f", &num[i]);
        fflush(stdin);
        
        if(num[i]>maior){
            maior = num[i];
        }
    }
    
    printf("\n\n---------- Elementos do vetor depois dos calculos\n");
    
    for(i=0; i<10; i++){
        printf("[%.2f] ", num[i]/maior);
    }
    
    return 0;
}