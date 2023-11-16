#include<stdio.h>
#include<string.h>

// Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. A última linha,
// que não entrara nos cálculos, contem o valor da idade igual a zero.
// Calcule e escreva a idade média deste grupo de indivíduos.

int main() {
    int indv, idade, soma;
    float media;
    printf("Digite quantos individuos sao\n");
    scanf("%d", &indv);
    for(int i=0; i<indv;i++){
        printf("\nDigite a idade\n");
        scanf("%d", &idade);
        soma+=idade;
    }
    media = (float)soma/(float)indv;
    printf("A idade media e %.2f", media);
    return 0;
}