#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    const int num_op = 4;
    int num_pecas, i, maiorOp, m, f, pecaM, pecaF, tPecas, mediaM, mediaF; 
    float salarioMin, salario, comissao, maiorSalario = 0, folha;
    char sexo[2];
    i = 1;
    while(i<=num_op){
        printf("\nNumero de Peças:\t"); scanf("%d", &num_pecas);
        printf("Sexo [M ou F]:\t"); scanf("%s", &sexo);
        
        salarioMin = 1302;
        

        if(num_pecas<=30){
            printf("%f", salario);
            
        }else if(num_pecas>=31 && num_pecas<35){
            comissao = (salarioMin*0.03) * (num_pecas - 30);
            salario = salarioMin +  comissao;
        }
        else{
            comissao = (salarioMin*0.05) * (num_pecas - 30);
            salario = salarioMin +  comissao;
        }
        if(salario >maiorSalario){
            maiorSalario = salario;
            maiorOp = i;
        }
        
        if(strcmp(sexo,"F") == 0){
            f++;
            pecaF+=num_pecas;
        }else{
            m++;
            pecaM+=num_pecas;
        }
        
        printf("O funcionario %d produziu %d pecas e recebera RS%.2f \n", i, num_pecas, salario);
        i++;
        folha+=salario;
        tPecas+=num_pecas;
    }

        mediaF = pecaF/f;
        mediaM = pecaM/m;
        printf("\nO total da folha de pagamento é: RS %.2f \n", folha);
        printf("%d foram fabricadas esse mes. \n", tPecas);
        printf("A media de peças produzidas pelas mulheres é: %d \nA media de peças produzidas pelos homens é: %d \n", pecaF, pecaM);
        printf("O operario que mais recebeu foi %d, ele recebeu %.2f", maiorOp, maiorSalario);
    return 0;
}