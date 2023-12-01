#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int i=0, n=20, idade, qtd_idade_peso=0, qtd_altura=0, qtd_ruivas=0, soma_idade=0, olhos_azuis=0;
    float peso, altura, media_altura=0;
    char olhos, cabelos;
    
    for(i=0; i<n; i++){
        printf("\nIdade:\t"); scanf("%d", &idade);
        printf("Peso:\t"); scanf("%f", &peso);
        printf("Altura:\t"); scanf("%f", &altura);
        printf("Cor dos Olhos[A, P, V, C]\t"); scanf(" %c", &olhos);
        printf("Cor dos Cabelos[P, C, L, R]\t"); scanf(" %c", &cabelos);
        olhos=toupper(olhos);
        cabelos=toupper(cabelos);
        
        if(idade>50 && peso<60){
            qtd_idade_peso++;
        }
        
        if(altura<1.50){
            qtd_altura++;
            soma_idade+=idade;
        }
        
        if(cabelos == 'R' && olhos != 'A'){
            qtd_ruivas++;
        }
        
        if(olhos== 'A'){
            olhos_azuis++;
        }
        
    }
    media_altura=(float)soma_idade/qtd_altura;
    printf("\n\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos e %d", qtd_idade_peso);
    printf("\n\nA media das idades das pessoas com altura inferior a 1.50 e %2.f", media_altura);
    printf("\n\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas e de %.2f", ((float)(olhos_azuis*100)/n));
    printf("\n\nQuantidade de pessoas ruivas que nao possuem olhos azuis e %d", qtd_ruivas);
    
    return 0;
}