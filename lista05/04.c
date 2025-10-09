#include <stdio.h>

int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

if (mes >= 1 && mes <= 12 && ano > 0) {
    if (mes == 2) {
        if (dia >= 1 && dia <= 29) {
            printf("Data válida");
        } else {
            printf("Data inválida");
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia >= 1 && dia <= 30) {
            printf("Data válida");
        } else {
            printf("Data inválida");
        }
    } else {
        if (dia >= 1 && dia <= 31) {
            printf("Data válida");
        } else {
            printf("Data inválida");
        }
    }
}
else {
    printf("Data inválida");
}
    return 0;
}
