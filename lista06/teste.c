#include <stdio.h>
 
int main() {
    float valor, n100, n50, n20, n10, n5, n2, n1, m1, m50, m25, m10, m5, m01;
    scanf ("%f", &valor);
    n100 = valor / 100;
    valor = valor % 100;
    n50 = valor / 50;
    valor = valor % 50;
    n20 = valor / 20;
    valor = valor % 20;
    n10 = valor / 10;
    valor = valor % 10;
    n5 = valor / 5;
    valor = valor % 5;
    n2 = valor / 2;
    valor = valor % 2;
    m1 = valor / 1;
    valor = valor % 1;
    m50 = valor / 0.50;
    valor = valor % 0.50;
    m25 = valor / 0.25;
    valor = valor % 0.25;
    m10 = valor / 0.10;
    valor = valor % 0.10;
    m5 = valor / 0.05;
    valor = valor % 0.05;
    m01 = valor / 0.01;
    printf ("NOTAS:\n%f nota(s) de 100,00\n %f nota(s) de R$ 50,00\n %f nota(s) de R$ 20,00\n %f nota(s) de R$ 10,00\n %f nota(s) de R$ 5,00\n %f nota(s) de R$ 2,00\n %f nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);
    printf ("MOEDAS:\n%f moeda(s) de R$ 1.00\n %f moeda(s) de R$ 0.50\n %f moeda(s) de R$ 0.25\n %f moeda(s) de R$ 0.10\n %f moeda(s) de R$ 0.05\n %f moeda(s) de R$ 0.01\n", m1, m50, m25, m10, m5, m01);
    return 0;
}