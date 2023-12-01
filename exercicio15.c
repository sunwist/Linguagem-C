#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá preencher dois vetores
// com dez posições cada, onde o primeiro corresponde ao código do produto e o segundo, ao total desse produto em estoque. Logo após,
// o programa deverá ler um conjunto indeterminado de dados contendo o código de um cliente e o código do produto que ele deseja comprar,
// juntamente com a quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

// - se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
// mensagem Código inexistente;

// - cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
// escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever a mensagem
// Pedido atendido. Obrigado e volte sempre;

// - efetuar a atualização do estoque somente se o pedido for atendido integralmente;

// - no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.

int main() {
    int i, codigo = 1, cod_prod, qtd, achou;
    int cod[10], est[10];

    printf("\n\n---------- Cadastro de Produtos");

    for (i = 0; i < 10; i++) {
        printf("\n\nCodigo do Produto: ");
        scanf(" %d", &cod[i]);
        fflush(stdin);
        printf("Quantidade no Estoque: ");
        scanf(" %d", &est[i]);
        fflush(stdin);
    }
    
    while(codigo!=0){
        
        printf("\n\n---------- Pedido");
        printf("\n\nCodigo do Cliente: ");
        scanf(" %d", &codigo);
        fflush(stdin);
        printf("Codigo do produto: ");
        scanf(" %d", &cod_prod);
        fflush(stdin);
        printf("Quantidade a Comprar: ");
        scanf(" %d", &qtd);
        fflush(stdin);

        for (i = 0; i < 10; i++) {
        
            if (cod_prod == cod[i]) {
                achou = 1;
            }
            
            if(achou == 1){
                
                if (est[i] >= qtd) {
                    printf("\n\nPedido Atendido. Obrigado e Volte Sempre !!");
                    est[i]= est[i]-qtd;
                }else{
                    printf("\n\nNão temos estoque o suficiente dessa mercadoria!!");
                }
                
            }else{
                printf("\n\nCodigo Inexistente !!");
            }
        }
        
        printf("\n\n---------- Relatório");
        
        for(i = 0; i < 10; i++){
            printf("\n\nCódigo do Produto: %d", cod[i]);
            printf("\nQuantidade no Estoque: %d", est[i]);
        }
        
    }

    return 0;
}