#include <stdio.h>
#include <math.h>

int main(){
    int dia, mes, ano, diasPassados;
    float porcentagem;
    scanf("%d %d %d",&dia, &mes, &ano);
    diasPassados = (mes - 1) * 30 + dia;
    porcentagem = (diasPassados / 360.0) * 100;
    printf("Já se passaram %.2f%% do ano de %d\n", porcentagem, ano);
    return 0;
}