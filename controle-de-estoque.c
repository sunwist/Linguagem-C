#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//variaveis globais
    int i=0, k=0, j=0, l=0, p=0, codigo[10], qtd[10], qtdx;
    float custo[10], custox[10];
    char sair, prod[10][20], prodx[10][20], cliente[10][20];
    
void cadastro(){
    
    while(sair!='N'){
        i++;
        printf("\n\nCodigo %d", i);
        printf("\nProduto: "); scanf(" %s", prod[i]);
        fflush(stdin);
        printf("Valor Unitario: "); scanf(" %f", &custo);
        fflush(stdin);
        printf("Quantidade no Estoque: "); scanf(" %d", &qtd[i]);
        fflush(stdin);
        printf("\nDeseja continuar cadastrando [S]im ou [N]ao............ "); scanf(" %c", &sair);
        sair=toupper(sair);
    }
    
}

void pesquisa(){
    int achou=0;
    
    do{
        printf("\n\nProduto: "); scanf(" %s", prodx);
        fflush(stdin);
        
        for(k=0; k<=i; k++){
            
            if(strcmp(prodx,prod[k]) ==0){
                achou=1;
                j=qtd[k];
            }
            
        }
        
        if(achou==1){
            printf("\nProduto em Estoque !!");
            printf("\nQuantidade em Estoque: %d", j);
        }else{
            printf("\nProduto Nao Consta em Estoque !!");
        }
        
        printf("\n\nDeseja continuar pesquisando [S]im ou [N]ao............ "); scanf(" %c", &sair);
        sair=toupper(sair);
        
    }while(sair!='N');
    
}

void baixa(){
    int achou=0;
    
    do{
        printf("\n\nCliente: "); scanf(" %s", cliente);
        printf("Produto: "); scanf(" %s", prodx);
        fflush(stdin);
        printf("Quantidade Desejada: "); scanf(" %d", &qtdx);
        fflush(stdin);
        
        achou=0;
        
        for(k=0; k<=i; k++){
            
            if(strcmp(prodx,prod[k]) == 0){
                achou=1;
                j= qtd[k];
                qtd[k]= qtd[k] - qtdx;
                l= qtd[k];
                custox[k]=custo[k] * qtdx;
            }
            
        }
        
        if(achou==1){
            printf("\nProduto em Estoque !!");
            printf("\nEfetuando a baixa...");
            
            if(l < 0){
                printf("\n\nEstoque Insuficiente... Quantidade: %d", j);
            }else{
                printf("\n\nEstoque Atualizado... Quantidade Atual: %d", l);
                
                printf("\n\n********************************");
                printf("\n********** Relatorio ***********");
                printf("\n********************************");
                printf("\n\nCliente: ", cliente[p]);
                printf("\nQuantidade Comprada: ", qtdx);
                printf("\nValor Total: ", custo);
            }
            
        }else{
            printf("\nProduto Nao Consta em Estoque !!");
        }
        
        printf("\n\nDeseja continuar [S]im ou [N]ao............ "); scanf(" %c", &sair);
        sair=toupper(sair);
        p++;
        
    }while(sair!='N');
}

int main(){
    int op;
    char resp;
    
    do{
        printf("\n *******************************************");
        printf("\n             CONTROLE DE ESTOQUE            ");
        printf("\n *******************************************\n");
        printf("\n [1] Cadastro de Produtos\n [2] Pesquisa de Produtos\n [3] Baixa/Venda\n [4] Relatorio\n\n Opcao: ");
        scanf(" %d", &op);
        fflush(stdin);
        
        switch (op){
            case 1:
                printf("\n********************************");
                printf("\n*********** Cadastro ***********");
                printf("\n********************************");
                cadastro();
                break;
            case 2:
                printf("\n********************************");
                printf("\n*********** Pesquisa ***********");
                printf("\n********************************");
                pesquisa();
                break;
            case 3:
                printf("\n********************************");
                printf("\n********** Baixa/Venda *********");
                printf("\n********************************");
                baixa();
                break;
            case 4:
                //cadastro();
                break;
            default:
                printf("\n Opcao Invalida !!");
        }
        printf("\nDeseja continuar no sistema............ "); scanf(" %c", &resp);
        resp=toupper(resp);
    }while(resp!='N');
    
}