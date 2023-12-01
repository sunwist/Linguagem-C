#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];
    int i, tam=0, vogaisA=0;
    
    printf("Nome:\t"); fgets(nome, 20, stdin); fflush(stdin);
    tam = strlen(nome);
    
    for(i=0; i<tam; i++){
        if(nome[i] == 'a' || nome[i] =='A'){
           vogaisA++;
        }
    }
    
    printf("\nForam encontradas %d vogais A !", vogaisA);
    return 0;
}