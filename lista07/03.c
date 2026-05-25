#include <stdio.h>
int main () {
    float tempo, velocidade, distancia, litros;
    scanf ("%f %f", &tempo, &velocidade);
    distancia = tempo * velocidade;
    litros = distancia / 12;
    printf ("%.3f", litros);
    return 0;
}