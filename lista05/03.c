#include <stdio.h>

int main(){
    float n1, n2, produto;
    int escolha;
    scanf("%f %f",&n1, &n2);
    scanf("%d", &escolha);
    switch (escolha){
    case 1: {
        float media = (n1 + n2) / 2;
        printf("Média: %.2f", media);
        break;
    }
    case 2: {
        float diferenca = 0;
        if (n1 > n2){
            diferenca = n1 - n2;
        }
        if(n2 > n1){
            diferenca = n2 - n1;
        }
        printf("Diferença: %.2f",diferenca);
        break;
    }
    case 3: {
        produto = n1 * n2;
        printf("Produto: %.2f",produto);
        break;
    }
    case 4: {
        float divisao = n1 / n2;
        printf("Divisão: %.2f",divisao);
        break;
    }
    default: {
        printf("Digite um número entre 1 e 4");
        break;
    }
    return 0;
    }
}