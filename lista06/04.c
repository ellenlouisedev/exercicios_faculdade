// 4. Faça um programa que receba um número inteiro maior que 1, verifique se o número fornecido é primo ou não e mostre uma mensagem de número primo ou de número não primo. Um número é primo quando é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>

int main(){
    int num, cont = 2;
    int primo = 1;

    scanf("%d", &num);
    if (num <= 1){
        printf("Digite um número maior que 1.");
    }
    while (cont < num){
        if (num % cont == 0){
            primo = 0;
            break;
        }
        cont = cont + 1;
    }
    if (primo == 1){
        printf("Primo");
    }
    else{
        printf("Não primo");
    }
    return 0;
}