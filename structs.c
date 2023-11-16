#include <stdio.h>

int main()
{
    float media=0, soma=0;
    
    struct dados{
      char nome[20];
      float nota[4];
    };
    
    struct dados fatec;
    
    printf("\n-------------- Cadastro de Aluno\n\n");
    
    printf("Informe o nome do aluno: "); fflush(stdin); scanf(" %20[^\n]c", &fatec.nome);
    
    for(int i=0; i<4; i++){
        printf("Nota %d: ", i + 1); scanf(" %f", &fatec.nota[i]);
        soma+=fatec.nota[i];
    }
    
    media=soma/4;
    
    printf("\n-------------- Dados da Struct\n\n");
    printf("Nome..... %s", fatec.nome);
    
    for(int i=0; i<4; i++){
        printf("\nNota %d: %.2f", i + 1, fatec.nota[i]);
    }
    printf("\n\nMedia do Aluno: %.2f", media);
    
    return 0;
}