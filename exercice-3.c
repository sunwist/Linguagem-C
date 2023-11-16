#include <stdio.h>


// Pergunte aos 15 funcionários da empresa quantas vendas eles fizeram nos meses de novembro, dezembro e janeiro.

// a) informe o total de pontos por funcionário
// b) informe a menor pontuação e o funcionário que possui ela
// c) média de pontos por funcionário

// funcao para calcular a media de pontos

float calcularMedia(float soma){
    return soma / 3;
}

// funcao para calcular total de pontos
float calcularPontos(){
    int total=0, pontos;
    for(int j=0;j<3;j++){
        printf("informe a qtd de pontos\t");
        scanf("%d", &pontos);
        total+=pontos;
            
    }
    return total; // retorna o total de pontos
}

int main()
{
    int menor, pontos, total, func;
    float media, soma;
    
    for(int i=1;i<=15;i++){
        total=calcularPontos();
        soma=total;
        
        printf("\no funcionario %d possui %d pontos\n",i,total);
				// chama a funcao de media 
        media=calcularMedia(soma);
        printf("média do funcionario é %.2f \n\n",media);
        
        if(i==1){
            menor=total;
            func=i;
        }
        
        if(total<menor){
            menor=total;
            func=i;
        }
        total=0;
        soma=0;

    }
    printf("\no funcionario %d possui a menor pontuacao de %d", func, menor);
    return 0;
}