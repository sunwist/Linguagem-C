#include <stdio.h>

int main(){
    int sair;
    scanf("%d", &sair);
    while(sair!=0){
        if(sair==1){
            char s[80];
            printf("digite seu nome:\t");
            scanf("%s", s);
            printf("%s\n", s);
        }else{
            printf("valor nulo\n");
        }
        scanf("%d", &sair);
    }
    return 0;
}