#include <stdio.h>

int main(){
    float n1, n2, n3;
    int peso1, peso2, peso3;
    printf("Digite as notas:");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite os pesos de cada nota:");
    scanf("%d %d %d", &peso1, &peso2, &peso3);
    float media = (n1*peso1 + n2*peso2 + n3*peso3) / (peso1 + peso2 + peso3);
    printf("%f",media);
    return 0;
}