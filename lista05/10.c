#include <stdio.h>

int main() {
    int angulo, voltasCompletas, anguloReduzido;

    printf("Digite a medida do ângulo em graus: ");
    scanf("%d",&angulo);

    voltasCompletas = angulo / 360;
    anguloReduzido = angulo % 360;

    if (anguloReduzido < 0) {
        anguloReduzido = anguloReduzido + 360;
        voltasCompletas = voltasCompletas - 1;
    }

    if (voltasCompletas > 0)
        printf("Voltas completas: %d (sentido anti-horário)\n", voltasCompletas);
    else if (voltasCompletas < 0)
        printf("Voltas completas: %d (sentido horário)\n", -voltasCompletas);
    else
        printf("Nenhuma volta completa\n");

    if (anguloReduzido == 0 || anguloReduzido == 360)
        printf("Ângulo está no eixo positivo X");
    else if (anguloReduzido == 90)
        printf("Ângulo está no eixo positivo Y");
    else if (anguloReduzido == 180)
        printf("Ângulo está no eixo negativo X");
    else if (anguloReduzido == 270)
        printf("Ângulo está no eixo negativo Y");
    else if (anguloReduzido > 0 && anguloReduzido < 90)
        printf("Quadrante 1");
    else if (anguloReduzido > 90 && anguloReduzido < 180)
        printf("Quadrante 2");
    else if (anguloReduzido > 180 && anguloReduzido < 270)
        printf("Quadrante 3");
    else if (anguloReduzido > 270 && anguloReduzido < 360)
        printf("Quadrante 4");
    return 0;
}