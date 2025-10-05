#include <stdio.h>

int main(){
    float salario;
    scanf("%f", &salario);
    float novoSalario = salario + (salario*0.25);
    printf("%f",novoSalario);
    return 0;
}