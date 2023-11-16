#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// produtos e filiais

//             f1  f2  f3  f4
// produto1 -> 3   2   1   0
// produto2 -> 4   1   1   1
// produto3 -> 1   3   4   3
// produto4 -> 7   9   3   7

int main(){
    
    int i, j, matriz[4][4], filiais[4], produtos[4];
    
    for(i=0; i<4; i++){
        printf("\n\nProduto %d\n", i + 1);
        for(j=0; j<4; j++){ 
            printf("\nFilial %d: ", j + 1);
            scanf(" %d", &matriz[i][j]); 

            produtos[i] += matriz[i][j];
            
            filiais[i]+= matriz[i][j];
        }
    }
    
    printf("\n\n----------Relatorio\n\nProdutos\n");
    
    for(i=0; i<4; i++){
        printf("\nProduto %d: %d", i + 1, produtos[i]);
    }
    
    printf("\n\nFiliais\n");
    
    for(i=0; i<4; i++){
        printf("\nFilial %d: %d", i + 1, filiais[i]);
    }
    
}