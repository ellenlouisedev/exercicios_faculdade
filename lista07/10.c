#include <stdio.h>
int main() {
    int n, total, brancas, pretas;
    scanf("%d", &n);
    total = n * n;
    brancas = (total + 1) / 2;
    pretas = total / 2;
    printf("%d casas brancas e %d casas pretas", brancas, pretas);
    return 0;
}