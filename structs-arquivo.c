#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// NAO CONCLUIDO

typedef struct dados
{
    char nome[20];
    char sobrenome[20];
    char depto[15];
    float salario;
    int idade;
    int telefone;
} CLIENTE;

void relatorio()
{
    FILE *fptr;

    CLIENTE fatec;

    fptr = fopen("ARQUIVO", "rb"); // arquivo para leitura que deve existir

    if (fptr == NULL)
    {
        printf("\n Problemas com Abertura do Arquivo");
        system("pause");
    }
    else
    {

        system("cls");
        printf("\n ***********************************************");
        printf("\n ********* RELATORIO DE DADOS  *****************");
        printf("\n ********** FATEC AMERICANA ********************");
        printf("\n ***********************************************");
        printf("\n Nome \t Sobrenome \t Depto \t Salario \t idade \t Telefone");

        while (fread(&fatec, sizeof(fatec), 1, fptr))
        {
        }
    }

    void Alterar()
    {
        char xsobrenome[20];
        int c;
        FILE *fptr;

        CLIENTE fatec;

        fptr = fopen("ARQUIVO", "r+b"); // arquivo para escrita e leitura que deve existir -> alteracao

        if (fptr == NULL)
        {
            printf("\n Problemas com Abertura do Arquivo");
            system("pause");
        }
        else
        {

            system("cls");
            printf("\n ***********************************************");
            printf("\n ********* ALTERA��O DO REGISTRO ***************");
            printf("\n ********** FATEC AMERICANA ********************");
            printf("\n ***********************************************");

            c = 0;
            fflush(stdin);
            printf("\n Informe o Sobrenome do Cliente");
            gets(xsobrenome);
            
            // posicionamento do ponteiro no comeco do arquivo pra leitura
            // variavel que recebe os dados, tamanho de cada registro, numero de registros, apontador para a estrutura do arquivo
            fread(&fatec, sizeof(fatec), 1, fptr);

            // feof == NULL
            // se o arquivo e diferente de null o nome digitado
            // e o sobrenome armazenado sao diferentes
            while (!feof(fptr) && strcmp(xsobrenome, fatec.sobrenome) != 0)
            {
                // contagem dos registros que nao sao o sobrenome
                fread(&fatec, sizeof(fatec), 1, fptr);
                c++;
            }

            if (feof(fptr))
            {
                // ponteiro chegou no final do arquivo
                printf("\n Registro nao consta no Arquivo");
                printf("\n\n");
                system("pause");
            }
            else
            {
                // senao deslocamento do cursor para inicio do arquivo
                fseek(fptr, c * sizeof(fatec), SEEK_SET);

                printf("\n Nome......: %s Digite o nome \n", fatec.nome);
                gets(fatec.nome);

                printf("\n Sobrenome : %s ", fatec.sobrenome);
                printf("\n Depto ....: %s   Digite o Depto \n ", fatec.depto);
                gets(fatec.depto);

                printf("\n Salario ..: %2.f  Digite o Salario \n", fatec.salario);
                scanf("%f", &fatec.salario);

                printf("\n Idade ....: %d  Digite a Idade \n", fatec.idade);
                scanf("%d", &fatec.idade);

                printf("\n Telefone..: %d Digite o Telefone \n", fatec.telefone);
                scanf("%d", &fatec.telefone);

                fwrite(&fatec, sizeof(fatec), 1, fptr);
            }
        }
        fclose(fptr);
    }

    void Pesquisa()
    {
        char numstr[15];
        int achou;
        int c;

        FILE *fptr;

        CLIENTE fatec;

        fptr = fopen("ARQUIVO", "rb"); // arquivo para leitura que deve existir

        if (fptr == NULL)
        {
            printf("\n Problemas com Abertura do Arquivo");
            system("pause");
        }
        else
        {
            system("cls");

            printf("\n ***********************************************");
            printf("\n ************** PESQUISA PELO SOBRENOME*********");
            printf("\n ********** FATEC AMERICANA ********************");
            printf("\n ***********************************************");

            fflush(stdin);
            printf("\n Informe o Sobrenome a ser Pesquisado");
            gets(numstr);
            fflush(stdin);
            if (strcmp(numstr, fatec.sobrenome) == 0)
            {
                achou = 1;
                printf("\n Nome ...... :%s", fatec.nome);
                printf("\nIdade....... : %d", fatec.idade);
                printf("\n Telefone ...:%d", fatec.telefone);
                printf("\n\n");
                achou = 1;
            }
            
        }

        if (achou == 0)
        {
            printf("\n Registro nao encontrado no sistema");
            printf("\n\n");
            system("pause");
        }
    }
    fclose(fptr);
}

void Insere()
{
    char numstr[10];
    char resp;

    FILE *fptr;

    CLIENTE fatec;

    fptr = fopen("ARQUIVO", "ab"); // cria um arquivo para insercao de dados

    if (fptr == NULL)
    {
        printf("\n Problemas com Abertura do Arquivo");
        system("pause");
    }
    else
    {

        do
        {
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

            fwrite(&fatec, sizeof(fatec), 1, fptr);

            printf("\n Deseja continuar o cadastro [S]im ou [N]�o");
            resp = getchar();

            resp = toupper(resp);
        } while (resp == 'S');
    }
    fclose(fptr);
}

int main()
{
    int op;
    do
    {
        system("cls");
        printf("\n *********************************");
        printf("\n [ 1 ] - CADASTRO DE CLIENTE      ");
        printf("\n [ 2 ] - CONSULTA PELO SOBRENOME  ");
        printf("\n [ 3 ] - ALTERACAO                ");
        printf("\n [ 4 ] - RELATORIO                ");
        printf("\n [ 5 ] - REMOCAO                  ");
        printf("\n [ 5 ] - SAIR                     ");
        printf("\n *********************************");

        printf("\n Escolha a opcao ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            Insere();
            break;
        case 2:
            Pesquisa();
            break;
        case 3:
            Alterar();
            break;
        case 4:
            relatorio
                system("pause");
        case 5:
            printf("\n Funcao a ser Desenvolvida ");
            system("pause");
        case 6:
            exit(0);
        default:
            printf("\n Opcao Invalida.. tente novamente");
            system("pause");
        }
    } while (op != 6);
}