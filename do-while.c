#include <stdio.h>

int main() {
    int num, i=1, mult;
    printf("Digite um numero\n");
    scanf("%d", &num);
    do{
        mult=num*i;
        i++;
        printf("%d\n", mult);
        
    }while(i<=10);

    return 0;
}