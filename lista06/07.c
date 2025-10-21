#include <stdio.h>

int main() {
    int casa = 1;
    float graosNaCasa = 1;
    float totalGraos = 0;

    while (casa <= 64) {
        totalGraos = totalGraos + graosNaCasa;
        graosNaCasa = graosNaCasa * 2;
        casa = casa + 1;
    }

    printf("Total de grãos: %.0f\n", totalGraos);

    return 0;
}