#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i=1, sair=1, pais;
    float preco, vlr=0, vlr_final=0, imposto=0;
    char transporte, carga, seguro;
    
    while(sair!=0){
        printf("\n---- Produto %d", i);
        printf("\n Preço\t"); scanf("%f", &preco);
        printf("\n Pais de Origem \n[1] EUA \n[2] Meximo \n[3] Outros \nSua escolha:\t"); scanf("%d", &pais);
        printf("\nMeio de Transporte \n[T] Terrestre \n[F] Fluvial \n[A] Aereo \nSua Escolha:\t"); scanf(" %c", &transporte);
        printf("\nCarga Periogosa? S [Sim] ou N [Nao]\t"); scanf(" %c", &carga);
        

        transporte=toupper(transporte);
        carga=toupper(carga);
        
        if(preco<=100){
            imposto=5;
            vlr=preco+(imposto/100);
            if(carga == 'S'){
                if(pais == 1){
                    vlr+=5.00;
                }else if(pais == 2){
                    vlr+=35.00;
                }else{
                    vlr+=24.00;
                }
            }else{
                if(pais == 1){
                    vlr+=12.00;
                }else if(pais == 2){
                    vlr+=37.00;
                }else{
                    vlr+=60.00;
                }
            }
        }else{
            imposto=10;
            vlr=preco+(imposto/100);
            
            if(carga == 'S'){
                if(pais == 1){
                    vlr+=5.00;
                }else if(pais == 2){
                    vlr+=35.00;
                }else{
                    vlr+=24.00;
                }
            }else{
                if(pais == 1){
                    vlr+=12.00;
                }else if(pais == 2){
                    vlr+=37.00;
                }else{
                    vlr+=60.00;
                }
            }
        }
        
        if(pais==2 || transporte == 'A'){
            vlr=vlr/2;
            seguro='S';
        }else{
            seguro='N';
        }
        
        printf("\nImposto: %.2f", imposto);
        printf("\nTransporte: %c", transporte);
        printf("\nSeguro [S] Sim ou N [Nao]: %c", seguro);
        printf("\nValor final do produto %.2f", vlr);
        printf("\n\nDeseja Continuar? 0 para sair\t"); scanf("%d", &sair);
        i++;
    }
}