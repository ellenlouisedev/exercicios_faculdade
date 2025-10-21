#include <stdio.h>

int main() {
    int numero, qtdPrimos = 0;
    int cont = 0;

    while (cont < 10) {
        int divisor = 2;
        int primo = 1;

        scanf("%d", &numero);

        if (numero <= 1) {
            primo = 0;
        } else {
            while (divisor < numero) {
                if (numero % divisor == 0) {
                    primo = 0;
                    break;
                }
                divisor = divisor + 1;
            }
        }
        if (primo == 1) {
            qtdPrimos = qtdPrimos + 1;
        }
        cont = cont + 1;
    }
    printf("%d", qtdPrimos);
    return 0;
}