#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char nome[20];
    
    printf("Nome:\t"); scanf(" %s", &nome);
    puts(nome); // serve apenas para strings
    printf("Tamanho do nome: %d", strlen(nome));
    
    return 0;
}