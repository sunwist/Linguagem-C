#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada
// linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
// e mostrar:
// -- o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
// -- o total vendido em cada semana durante todo o ano;
// -- o total vendido pela loja no ano.

int main()
{
  int i, j, vendas[12][4], soma = 0, vt_mes[12] = {0}, vt_semana[4] = {0}, venda_total = 0;
  char meses[12][20];

  strcpy(meses[0], "Janeiro");
  strcpy(meses[1], "Fevereiro");
  strcpy(meses[2], "Marco");
  strcpy(meses[3], "Abril");
  strcpy(meses[4], "Maio");
  strcpy(meses[5], "Junho");
  strcpy(meses[6], "Julho");
  strcpy(meses[7], "Agosto");
  strcpy(meses[8], "Setembro");
  strcpy(meses[9], "Outubro");
  strcpy(meses[10], "Novembro");
  strcpy(meses[11], "Dezembro");

  printf("============================");
  printf("====== Loja de Vendas ======");
  printf("============================");
  printf("\n\n");
  printf("============================");
  printf("=== Preenchendo os Dados ===");
  printf("============================");
  printf("\n\n");

  for (i = 0; i < 12; i++)
  {
    printf("\n=========  %s =========\n", meses[i]);
    for (j = 0; j < 4; j++)
    {
      printf("\nSemana %d", j + 1);
      printf("\nVendas: ");
      scanf(" %d", &vendas[i][j]);
      fflush(stdin);

      soma += vendas[i][j]; 

      vt_mes[i] = soma;

      vt_semana[j] += vendas[i][j];

      venda_total += vendas[i][j];
    }
    soma = 0;
  }

  printf("\n\n");
  printf("============================");
  printf("======== Resultados ========");
  printf("============================");

  for (i = 0; i < 12; i++)
  {
    printf("\n\n%s\n", meses[i]);
    printf("Venda Total: %d", vt_mes[i]);
  }

  for (j = 0; j < 4; j++)
  {
    printf("\n\nSemana %d com o total de %d vendas no ano", j + 1, vt_semana[j]);
  }

  printf("\n");
  printf("\nVenda Total da Loja: %d", venda_total);
}