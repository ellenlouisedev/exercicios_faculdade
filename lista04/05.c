#include <stdio.h>

int main(){
    float salarioMinimo, kWConsumidos;
    scanf("%f %f",&salarioMinimo,&kWConsumidos);
    float valorKW = salarioMinimo / 5;
    float valorTotal = valorKW * kWConsumidos;
    float valorDesconto = valorTotal - (valorTotal * 0.15);
    printf("Valor de cada kW: R$ %.2f\n", valorKW);
    printf("Valor total a pagar: R$ %.2f\n", valorTotal);
    printf("Valor com 15%% de desconto: R$ %.2f\n", valorDesconto);
    return 0;
}



