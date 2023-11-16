#include <stdio.h>

int main() {
    int escolha;
    float num1, num2, result;
    printf("Calculator\n\n1. Multiply\n2. Division\n3. Sum\n4. Subtraction\n");
    printf("\nChose an option\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("You've chosen Multiply!\n");
            printf("Type the first number\t");
            scanf("%f", &num1);
            printf("Tyoe the second number\t");
            scanf("%f", &num2);
            result = num1 * num2;
            printf("The result of Multiply is %.2f", result);
            break;
            
        case 2:
            printf("You've chosen Division!\n");
            printf("Type the first number\t");
            scanf("%f", &num1);
            printf("Tyoe the second number\t");
            scanf("%f", &num2);
            
            if(num2!=0){
                result = num1 / num2;
                printf("The result of Division is %.2f", result);
            }else{
                printf("Division by 0! Didn't approved!");
            }
            break;
        
        case 3:
            printf("You've chosen Sum!\n");
            printf("Type the first number\t");
            scanf("%f", &num1);
            printf("Tyoe the second number\t");
            scanf("%f", &num2);
            result = num1 + num2;
            printf("The result of Sum is %.2f", result);
            break;
        
        case 4:
            printf("You've chosen Subtraction!\n");
            printf("Type the first number\t");
            scanf("%f", &num1);
            printf("Tyoe the second number\t");
            scanf("%f", &num2);
            result = num1 -  num2;
            printf("The result of Subtraction is %.2f", result);
            break;
    }

    return 0;
}