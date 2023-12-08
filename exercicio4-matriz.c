#include <stdio.h>
#include <stdlib.h>

// Faça um programa que receba:
// - as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15 x 5;
// - os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
// O programa deverá calcular e mostrar:
// - para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
// ou exame);
// - a média da classe.

int main()
{
  int i, j;
  float nota[15][5], media[5], soma = 0;
  char nome[15][20];

  printf("\n\n---- Preenchendo os Dados\n");

  for (i = 0; i < 15; i++)
  {
    printf("\nAluno %d \n\n", i + 1);
    printf("Nome... ");
    scanf(" %s", nome[i]);
    fflush(stdin);

    for (j = 0; j < 5; j++)
    {
      printf("Nota %d: ", j + 1);
      scanf("%f", &nota[i][j]);

      soma += nota[i][j];

      if ((j + 1) % 5 == 0)
      {
        media[i] = soma / 5;
        soma = 0;
        
      }
    }
  }

  printf("\n\n---- Exibindo os Dados\n");

  for (i = 0; i < 15; i++)
  {
    printf("\n\n");
    printf("Aluno %d \nNome: %s", i + 1, nome[i]);
    printf("\nMedia: %.2f", media[i]);

    if (media[i] > 6.0)
    {
      printf("\n\nSituacao: Aprovado!");
    }
    else if (media[i] < 4.0)
    {
      printf("\n\nSituacao: Reprovado!");
    }
    else
    {
      printf("\n\nSituacao: Exame!");
    }
  }
}