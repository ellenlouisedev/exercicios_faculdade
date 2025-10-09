#include <stdio.h>

int main(){
    float salario, bonificacao, auxilio, novoSalario;
    scanf("%f",&salario);
    if (salario <= 500){
        bonificacao = salario * 0.05;
    }
    else if (salario > 500 && salario <= 1200){
        bonificacao = salario * 0.12;
    }
    else if (salario > 1200){
        bonificacao = 0;
    }

    if (salario <= 600){
        auxilio = 150;
    }
    else if (salario > 600){
        auxilio = 100;
    }
    novoSalario = salario + bonificacao + auxilio;
    printf ("Novo salário: %.2f",novoSalario);
    return 0;
}