#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // encontre os digitos verificadores do cpf

    int i, j=10, num_cpf[9], soma=0, resto=0, conta=0, dac1=0, dac2=0;
    char cpf[10];
    
    printf("Informe o CPF\t"); gets(cpf);
    //puts(cpf);
    
    for(i=0; i<10; i++){
        num_cpf[i]=cpf[i]-'0'; // converte para numeros
    }
    
    for(i=0; i<9; i++){
        soma+=num_cpf[i]*j;
        j--;
    }
    
    resto=soma%11;
    conta=11-resto;
    
    if(conta>9){
        dac1=0;
    }else{
        dac1=conta;
    }
    
    j=11;
    
    for(i=0; i<9; i++){
        soma+=num_cpf[i]*j;
        j--;
    }
    
    resto=soma%11;
    conta=11-resto;
    
    if(conta>9){
        dac2=0;
    }else{
        dac2=conta;
        
    }
    printf("Primeiro Digito: %d\nSegundo Digito: %d", dac1, dac2);
    
    return 0;
}