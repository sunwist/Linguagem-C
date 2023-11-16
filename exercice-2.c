#include <stdio.h>
#include <stdlib.h>

// Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino). Fazer um algorítimo que calcule e escreva:
// A maior e a menor altura do grupo;
// A média de altura das mulheres;
// O número de homens;

int main(){
    float altura, maior, menor, soma, media;
    char sexo[10];
    int indv, i=1, countf, countm;
    printf("Digite a quantidade de individuos\n");
    scanf("%d", &indv);
    for(int j=0; j<indv; j++){
        printf("\nDigite a altura\n");
        scanf("%f", &altura);
        printf("\nDigite o sexo do individuo\n");
        scanf("%s", &sexo);
        if(strcmp(sexo,"feminino")==0){
            soma+=altura;
            countf++;
        }else if(strcmp(sexo,"masculino")==0){
            countm++;
        }
        if(altura>maior){
            maior=altura;
            menor=maior;
        }else if(altura<menor){
            menor=altura;
        }
    }
    media = soma/countf;
    printf("\nMaior altura %.2f", maior);
    printf("\nMenor altura %.2f", menor);
    printf("\nMedia de altura das mulheres e %.2f", media);
    printf("\nO numero de homens e %d", countm);
    return 0;                                 
}