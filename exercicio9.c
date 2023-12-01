#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// par e impar com vetores

int main(){
	int i, n, j=0, k=0, impar[10], par[10];
	
	printf("Quantos numeros?\t"); scanf("%d", &n);
	int valor[n];
	
	for(i=1; i<=n;i++){
	    printf("Numero:\t"); scanf("%d", &valor[i]);
	    
	    if(valor[i]%2==0){
	        par[j]=valor[i];
	        j++;
	    }else{
	        impar[k]=valor[i];
	        k++;
	    }
	}
	system("clear");
	
	printf("Par: ");
	for(i=0; i<j;i++){
	        printf("%d ", par[i]);
	}
	printf("\nImpar: ");
	for(i=0; i<k;i++){
	        printf("%d ", impar[i]);
	}

	return 0;
}