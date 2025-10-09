#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, raiz1, raiz2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Não é equação do 2º grau.\n");
        return 1;
    }

    delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2*a);
        printf("Raiz única: %.2lf\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2*a);
        raiz2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes: %.2lf e %.2lf\n", raiz1, raiz2);
    }

    return 0;
}
