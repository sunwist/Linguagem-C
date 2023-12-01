#include <stdio.h>
#include <stdlib.h>

// Elabore um programa que preencha uma matriz 6  3, calcule e mostre:
// - o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
// - o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.

int main()
{
  int i, j, matriz[6][3], maior = 0, menor = 0, posicaoi_maior = 0, posicaoj_maior = 0, posicaoi_menor = 0, posicaoj_menor = 0;

  printf("______ Preenchendo a Matriz\n\n");

  for (i = 0; i < 6; i++)
  {
    printf("\n\nLinha %d\n", i + 1);
    for (j = 0; j < 3; j++)
    {
      printf("Insira ");
      scanf("%d", &matriz[i][j]);

      if (matriz[i][j] > maior)
      {
        maior = matriz[i][j];
        posicaoi_maior = i;
        posicaoj_maior = j;
      }

      if (i == 0)
      {
        menor = matriz[i][j];
        posicaoi_menor = i;
        posicaoj_menor = j;
      }else if(matriz[i][j] < menor){
        menor = matriz[i][j];
        posicaoi_menor = i;
        posicaoj_menor = j;
      }
    }
  }

  printf("\n\n______ Matriz Completa !\n");

  for (i = 0; i < 6; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
  }

  printf("\n\n______ Exibindo Resultados");
  printf("\n\nMaior: %d, na posicao: linha %d coluna %d", maior, posicaoi_maior, posicaoj_maior);
  printf("\nMenor: %d, na posicao: linha %d coluna %d", menor, posicaoi_menor, posicaoj_menor);
}