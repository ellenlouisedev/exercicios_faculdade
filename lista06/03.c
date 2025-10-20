/*
3. Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
• a quantidade de pessoas com idade superior a 50 anos;
• a média das alturas das pessoas com idade entre 10 e 20 anos;
• a porcentagem de pessoas com peso inferior a 40 kg em todas as pessoas analisadas.
*/

#include <stdio.h>

int main(){
    int idade, cont = 0, idadeSup50 = 0, qntAlturas = 0, peso40 = 0;
    float peso, altura, somaAlturas = 0, mediaAlturas = 0;

    while (cont < 5){
        scanf("%d %f %f", &idade, &peso, &altura);
        if (idade > 50){
        idadeSup50 = idadeSup50 + 1;
        }
        if (idade >= 10 && idade <= 20){
            somaAlturas = somaAlturas + altura;
            qntAlturas = qntAlturas + 1;
        }
        if (peso < 40){
            peso40 = peso40 + 1;
        }
        cont = cont + 1;
    }
    if(qntAlturas > 0){
        mediaAlturas = somaAlturas / qntAlturas;
    }
    float percentInferior40 = (peso40 * 100) / cont;
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", idadeSup50);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", mediaAlturas);
    printf("Porcentagem de pessoas com peso inferior a 40 kg em todas as pessoas analisadas: %.2f\n", percentInferior40);
    return 0;
}