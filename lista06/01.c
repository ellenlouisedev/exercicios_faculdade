// 1. Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma adega, tendo como dados de entrada tipos de vinho, sendo: ’T’ para tinto,’B’ para branco e ’R’ para rosê. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de vinhos é desconhecida, utilize como finalizador ’F’ de fim.

#include <stdio.h>

int main(){
    char escolha;
    int tinto = 0, branco = 0, rose = 0;

    scanf(" %c", &escolha);
    while (escolha != 'F'){
        if (escolha == 'T'){
        tinto = tinto + 1;
        }
        else if (escolha == 'B'){
            branco = branco + 1;
        }
        else if (escolha == 'R'){
            rose = rose + 1;
        }
        else{
            printf("Digite uma opção válida (T, B, R ou F para fim.)");
        }
        scanf(" %c", &escolha);
    }
    int Totalvinhos = tinto + branco + rose;
    printf ("Total de vinhos: %d\n",Totalvinhos);
    float tintoPorcentagem = (tinto * 100.0) / Totalvinhos;
    float brancoPorcentagem = (branco * 100.0) / Totalvinhos;
    float rosePorcentagem = (rose * 100.0) / Totalvinhos;
    printf("Porcentagens:\n Tinto: %.2f\n Branco: %.2f\n Rose: %.2f", tintoPorcentagem, brancoPorcentagem, rosePorcentagem);
    return 0;
}