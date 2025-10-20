// 2. Construa um algoritmo que, receba uma quantidade desconhecida de valores inteiros e positivos, determine qual o menor e maior valor recebido. O algoritmo para de receber valores quando receber um valor negativo, que não deve ser considerado.

#include <stdio.h>

int main(){
    int numero = 0, maior = -1, menor = 999999;
    scanf("%d", &numero);
    while (numero >= 1){
        if (numero > maior){
            maior = numero;
        }
        if (numero < menor){
            menor = numero;
        }
        if (numero < 0){
            break;
        }
        scanf("%d", &numero);
    }
    printf ("%d %d", maior, menor);
    return 0;
}