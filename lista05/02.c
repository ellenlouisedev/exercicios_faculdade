#include <stdio.h>

int main(){
    float salario, novoSalario;
    scanf("%f", &salario);
    if (salario <= 499.99){
        novoSalario = salario + (salario * 0.30);
        printf("Salário reajustado: %.2f",novoSalario);
    }
    else{
        printf("Não tem direito ao aumento.");
    }
    return 0;
}