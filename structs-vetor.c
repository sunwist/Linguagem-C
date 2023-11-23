#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Defina uma estrutura que irá representar bandas de música.
// Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes
// e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas.

// 01. Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado.
// Após criar e preencher, exiba todas as informações das bandas/estruturas.

// 02. Crie uma função que peça ao usuário um número de 1 até 5.
// Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking
// é a que foi solicitada pelo usuário.

// 03. Crie uma função em C que peça ao usuário um tipo de música e exiba as bandas com esse
// tipo de música no seu ranking. Que função da string.h você usaria para comparar as strings
// que representam o tipo de banda?

// 04. Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas
// bandas favoritas ou não.

typedef struct
{
  char nome[20];
  char estiloMusical[20];
  int integrantes;
  int ranking;
} banda;

banda b[5];
int i;

void cadastro()
{
  for (i = 0; i < 5; i++)
  {
    printf("\nBanda %d", i + 1);
    printf("\nNome: ");
    scanf(" %s", &b[i].nome);
    fflush(stdin);
    printf("Estilo Musical: ");
    scanf(" %s", &b[i].estiloMusical);
    fflush(stdin);
    printf("Integrantes: ");
    scanf(" %d", &b[i].integrantes);
    fflush(stdin);
    printf("Ranking: ");
    scanf(" %d", &b[i].ranking);
    fflush(stdin);
  }

  printf("\n\n------ Informações das Bandas");
  for (i = 0; i < 5; i++)
  {
    printf("\n\nBanda %d", i + 1);
    printf("\nNome: %s \nEstilo Musical: %s \nIntegrantes: %d \nRanking: %d", b[i].nome, b[i].estiloMusical, b[i].integrantes, b[i].ranking);
  }
}

void consulta()
{
  int num;
  printf("\nDigite um numero de um 1 a 5: ");
  scanf(" %d", &num);
  fflush(stdin);

  for (i = 0; i < 5; i++)
  {
    if (num == b[i].ranking)
    {
      printf("\n\nNome: %s \nEstilo Musical: %s \nIntegrantes: %d \nRanking: %d", b[i].nome, b[i].estiloMusical, b[i].integrantes, b[i].ranking);
    }
  }
}

void tipoMusica()
{
  char escolha_musica[20];
  printf("\nDigite um estilo musical: ");
  scanf(" %s", escolha_musica);
  fflush(stdin);

  for (i = 0; i < 5; i++)
  {
    if (strcmp(escolha_musica, b[i].estiloMusical) == 0)
    {
      printf("\n\nBanda Encontrada !");
      printf("\nNome: %s", b[i].nome);
    }
  }
}

void favoritas()
{
  int achou = 0;
  char nome_banda[20];
  printf("\nDigite o nome da banda: ");
  scanf(" %s", nome_banda);
  fflush(stdin);
  for (i = 0; i < 5; i++)
  {
    if (strcmp(nome_banda, b[i].nome) == 0)
    {
      achou = 1;
    }
  }

  if (achou = 1)
  {
    printf("\n\nBanda entre as favoritas !");
  }
  else
  {
    printf("Banda não se encontra entre as favoritas !");
  }
}

int main()
{
  int op;
  char resp;

  printf("\n------ Bandas de Música");

  while (resp != 'N')
  {
    printf("\n\n[1] Cadastro \n[2] Consulta \n[3] Estilo Musical \n[4] Ranking \nSua opcao: ");
    scanf(" %d", &op);

    switch (op)
    {
    case 1:
      cadastro();
      break;
    case 2:
      consulta();
      break;
    case 3:
      tipoMusica();
      break;
    case 4:
      favoritas();
      break;
    default:
      break;
    }

    printf("\n\nDeseja continuar no sistema...... [S] ou [N] ");
    scanf(" %c", &resp);
    fflush(stdin);
    resp = toupper(resp);
  }
  return 0;
}
