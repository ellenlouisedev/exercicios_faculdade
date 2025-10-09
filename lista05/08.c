#include <stdio.h>

int main(){
    float saldoMedio, credito;
    scanf("%f",&saldoMedio);
    if (saldoMedio > 400){
        credito = saldoMedio * 0.30;
    }
    else if (saldoMedio <= 400 && saldoMedio >= 300){
        credito = saldoMedio * 0.25;
    }
    else if (saldoMedio <= 300 && saldoMedio >= 201){
        credito = saldoMedio * 0.20;
    }
    else if (saldoMedio <= 200){
        credito = saldoMedio * 0.10;
    }
    printf("Valor do saldo médio: %.2f\n",saldoMedio);
    printf("Valor do crédito: %.2f",credito);
    return 0;
}