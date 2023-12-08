#include <stdio.h>
#include <stdlib.h>

// Faça um programa que preencha uma matriz 10 x 5 com números inteiros, e some cada uma das colunas,
// armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
// matriz pela soma da coluna e mostrar a matriz resultante.

int main()
{
  int i, j, nums[4][5], soma[5], matriz_resultante[4][5];

  printf("\n------------------------------------------");
  printf("\n---------- Preenchendo a Matriz ----------");
  printf("\n------------------------------------------\n");

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("\nInsira: ");
      scanf(" %d", &nums[i][j]);
      fflush(stdin);
    }
  }

  for (j = 0; j < 5; j++)
  {
    soma[j] = 0;
    for (i = 0; i < 4; i++)
    {
      soma[j] += nums[i][j];
    }
    // printf("\n\nsoma coluna %d: %d", j, soma[j]);
  }

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 5; j++)
    {

      matriz_resultante[i][j] = nums[i][j] * soma[j];
    }
  }

  printf("\n\nMatriz Resultante !!\n");

  for (i = 0; i < 4; i++)
  {
    printf("\n\n");
    for (j = 0; j < 5; j++)
    {

      printf("%d\t", matriz_resultante[i][j]);
    }
  }
}