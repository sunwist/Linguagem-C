#include <stdio.h>
#include <stdlib.h>

// Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
// - a quantidade de elementos entre 12 e 20 em cada linha;
// - a média dos elementos pares da matriz.

int main()
{
  int i, j, matriz[2][4], qtd_linha1 = 0, qtd_linha2 = 0, qtd = 0, soma = 0;
  float media = 0;

  printf("\nMatriz 2x4\n\n");
  for (i = 0; i < 2; i++)
  {
    printf("\nLinha %d\n\n", i + 1);
    for (j = 0; j < 4; j++)
    {
      printf("Numero: ");
      scanf("%d", &matriz[i][j]);
      fflush(stdin);
      qtd++;

      if (i == 0)
      {
        if (matriz[i][j] > 12 && matriz[i][j] < 20)
        {
          qtd_linha1++;
        }
      }
      else
      {
        if (matriz[i][j] > 12 && matriz[i][j] < 20)
        {
          qtd_linha2++;
        }
      }

      if (matriz[i][j] % 2 == 0)
      {
        soma += matriz[i][j];
      }
    }
  }

  printf("\n\nMatriz Completa!\n\n");
  for (i = 0; i < 2; i++)
  {
    printf("\n");
    for (j = 0; j < 4; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
  }
  media = (float)soma / qtd;

  printf("\n\nResultados");
  printf("\n\nQuantidade de elementros entre 12 e 20 na linha 1: %d \nQuantidade de elementos entre 12 e 20 na linha 2: %d \nMedia dos numeros pares: %.2f", qtd_linha1, qtd_linha2, media);
}