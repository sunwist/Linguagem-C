#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite os coeficientes da equacao\t");
    scanf("%f %f %f", &a, &b, &c);
    float mult=a*2;
    if(a==0){
        printf("Impossivel calcular");   
    }else{
        delta=(b*b)-(4*a*c);
        if(delta<0){
            printf("Impossivel calcular");
        }else{
            delta=sqrt(delta);
            raiz1=(-b+delta)/(2*a);
            raiz2=(-b-delta)/(2*a);
            printf("%.5f %.5f", raiz1, raiz2);
        }
    }
    return 0;
}