#include <stdio.h>
int main() {
    int n, x, cont = 0;
    scanf("%d", &n);
    while (cont < n) {
        scanf("%d", &x);
        if (x == 0) {
            printf("NULO\n");
        }
        else {
            if (x % 2 == 0) {
                printf("PAR ");
            } else {
                printf("IMPAR ");
            }

            if (x > 0) {
                printf("POSITIVO\n");
            } else {
                printf("NEGATIVO\n");
            }
        }
        cont++;
    }
    return 0;
}