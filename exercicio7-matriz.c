#include <stdlib.h>
#include <stdio.h>

// Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma segunda matriz N de ordem 6 x 4,
// calcule e imprima a soma das linhas de M com as colunas de N.

// nao concluido

int main()
{
  int i, j, matrizM[2][4], matrizN[4][2], resultado[2][2], soma = 0;

  printf("Preencha a matriz M de ordem 2 x 4:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("\nInsira: ");
      scanf(" %d", &matrizM[i][j]);
      fflush(stdin);

      soma += matrizM[i][j];
    }
    soma = 0;
  }

  printf("Preencha a matriz N de ordem 4 x 2:\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("\nInsira: ");
      scanf(" %d", &matrizN[i][j]);
      fflush(stdin);
    }
  }

  printf("\n\n-------- Calculando ---------\n\n");

  

}