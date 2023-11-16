#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char nome[20];
    int tam,i;
    
    printf("Nome:\t"); scanf(" %s", &nome);
    puts(nome); // serve apenas para strings
    tam = strlen(nome);
    printf("Tamanho do nome: %d", tam);
    
    for(i=0;i<tam;i++){
        if(nome[i]=="a" || nome[i]=="e" ||nome[i]=="i" ||nome[i]=="o" ||nome[i]=="u"){
           printf("");
        }else{
            printf("\nPosicao da vogal %d", i);
        }
    }
    //n terminei
    return 0;
}