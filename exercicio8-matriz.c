#include <stdio.h>
#include <stdlib.h>

// Crie um programa que preencha uma matriz 5 x 5 com números inteiros, calcule e mostre a soma:
// -- dos elementos da linha 4;
// -- dos elementos da coluna 2;
// -- dos elementos da diagonal principal;
// -- dos elementos da diagonal secundária;
// -- de todos os elementos da matriz.

int main()
{
  int i, j, matriz[5][5], somaLinha4 = 0, somaLinha2 = 0, principal = 0, secundaria = 0, somaTotal = 0;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("\nInsira: ");
      scanf(" %d", &matriz[i][j]);
      fflush(stdin);

      somaTotal += matriz[i][j];

      if (i == 4)
      {
        somaLinha4 += matriz[i][j];
      }

      if (i == 2)
      {
        somaLinha2 += matriz[i][j];
      }

      if (i == j)
      {
        principal += matriz[i][j];
      }

      if (i + j == 5 - 1)
      {
        secundaria += matriz[i][j];
      }
    }
  }

  for (i = 0; i < 5; i++)
  {
    printf("\n\n");
    for (j = 0; j < 5; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
  }

  printf("\n\nSoma Linha 4: %d \nSoma Linha 2: %d \nSoma Diagonal Principal: %d \nSoma Diagonal Secundaria: %d \nSoma Total: %d", somaLinha4, somaLinha2, principal, secundaria, somaTotal);
}