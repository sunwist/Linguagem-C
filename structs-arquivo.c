#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
typedef struct dados
{
    char nome[20];
    char sobrenome [20];
    char depto [15];
    float salario;
    int idade;
    int telefone;
} CLIENTE;
 
void Insere()
{
   char numstr[10];
   char resp;
 
   FILE *fptr;
 
   CLIENTE fatec;
 
   fptr=fopen("ARQUIVO","ab");
 
   if(fptr == NULL)
   {
      printf("\n Problemas com Abertura do Arquivo");
      system("pause");
 
   }else {
 
        do{
 
         system("cls");
 
         printf("\n ***********************************************");
         printf("\n ************** CADASTRO ***********************");
         printf("\n ********** FATEC AMERICANA ********************");
         printf("\n ***********************************************");
 
         fflush(stdin);
 
         printf("\n Informe o nome do Cliente :");
         gets(fatec.nome);
         fflush(stdin);
 
         printf("\n Informe o Sobrenome do Cliente");
         gets(fatec.sobrenome);
         fflush(stdin);
 
         printf("\n Informe o Depto do Cliente");
         gets(fatec.depto);
         fflush(stdin);
 
         printf("\n Informe o Salario do Cliente");
         gets(numstr);
         fatec.salario = atof(numstr);
         fflush(stdin);
 
         printf("\n Informe a Idade do Cliente");
         gets(numstr);
         fatec.idade = atoi(numstr);
         fflush(stdin);
 
 
         printf("\n Informe o Celular do Cliente");
         gets(numstr);
         fatec.telefone = atoi(numstr);
         fflush(stdin);
 
         fwrite(&fatec,sizeof(fatec),1,fptr);
 
         printf("\n Deseja continuar o cadastro [S]im ou [N]ão");
         resp = getchar();
 
         resp = toupper(resp);
 
 
 
 
        }while (resp == 'S');
 
 
 
 
   }
   fclose(fptr);
 
 
}
 
 
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int op;
    do{
    printf("\n *********************************");
    printf("\n [ 1 ] - CADASTRO DE CLIENTE      ");
    printf("\n [ 2 ] - CONSULTA PELO SOBRENOME  ");
    printf("\n [ 3 ] - RELATORIO                ");
    printf("\n [ 4 ] - ALTERAÇÃO                ");
    printf("\n [ 5 ] - REMOÇÃO                  ");
    printf("\n *********************************");
 
    printf("\n EScolha a OPção ");
    scanf("%d",&op);
 
    switch (op)
    {
    case 1:
        Insere();
        break;
    case 2:
        printf("\n Função a ser Desenvolvida ");
        system("pause");
    case 3:
        printf("\n Função a ser Desenvolvida ");
        system("pause");
    case 4:
        printf("\n Função a ser Desenvolvida ");
        system("pause");
    case 5:
        printf("\n Função a ser Desenvolvida ");
        system("pause");
    case 6:
        exit(0);
        default :
        printf("\n Opção Invalida.. tente novamente");
        system("pause");
 
 
    }
 
} while (op != 6);
}
 
