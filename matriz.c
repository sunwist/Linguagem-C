#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    int i, j, matriz[3][3], diagonal[2];
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\nInforme os dados da matriz ");
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    for(i=0; i<3; i++){
        printf("\n\n");
        for(j=0; j<3; j++){
            printf(" %d", matriz[i][j]);
            // diagonal principal
            if( i == j){
                diagonal[i] = matriz[i][j];
            }
            
        }
    }
    
    for(i=0; i<3; i++){
        printf("\nDiagonal Principal: %d", diagonal[i]);
    }
    
} 