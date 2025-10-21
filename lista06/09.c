#include <stdio.h>

int main() {
    float alturaAnacleto = 1.50;
    float alturaFelisberto = 1.10;
    int anos = 0;

    while (alturaFelisberto <= alturaAnacleto) {
        alturaAnacleto = alturaAnacleto + 0.02;
        alturaFelisberto = alturaFelisberto + 0.03;
        anos = anos + 1;
    }

    printf("Serão necessários %d anos para que Felisberto seja mais alto que Anacleto.\n", anos);

    return 0;
}