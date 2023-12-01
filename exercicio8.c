#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// vetores 

int main(){
    char vendedor[10][20], vmaior[20], vmenor[20];
    float venda[10],maior=0, menor;
    int i, nVendedores;
    
    for(i=1; i<=10; i++){
        
        printf("Nome do vendedor: \t");
        scanf(" %s", &vendedor[i]);
        
        fflush(stdin);
        
        printf("Quanto ele vendeu: \t");
        scanf("%f", &venda[i]);
        
        printf("\n");
        if(maior<venda[i]){
            strcpy(vmaior, vendedor[i]);
            maior=venda[i];
        }
        if(i==1){
            menor = venda[i];
            strcpy(vmenor, vendedor[i]);
        }
        if(menor>venda[i]){
            menor = venda[i];
            strcpy(vmenor, vendedor[i]); 
        }
    }
    system("clear");
    printf("O vendedor que mais vendeu foi %s com o valor de %.2f.\n", vmaior, maior);
    printf("O vendedor que menos vendeu foi %s com o valor de %.2f.\n", vmenor, menor);
    
    for(i=1;i<=nVendedores; i++){
        printf("\n");
        puts(vendedor[i]);
        printf("%.2f \n",venda[i]);
    }
    
    return 0;
}