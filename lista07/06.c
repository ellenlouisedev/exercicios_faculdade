#include <stdio.h>
int main() {
    int num, cont, par, impar, positivo, negativo;
    cont = par = impar = positivo = negativo = 0;
    while (cont < 5) {
        scanf ("%d", &num);
        if (num % 2 == 0) {
            par = par + 1;
        } else {
            impar = impar + 1;
        }

        if (num > 0) {
            positivo = positivo + 1;
        } else if (num < 0) {
            negativo = negativo + 1;
        }
        cont = cont + 1;
    }
    printf ("%d valor(es) par(es)\n", par);
    printf ("%d valor(es) ímpar(es)\n", impar);
    printf ("%d valor(es) positivos(s)\n", positivo);
    printf ("%d valor(es) negativo(s)\n", negativo);
    return 0;
}