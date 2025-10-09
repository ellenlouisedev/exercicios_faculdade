#include <stdio.h>

int main(){
    int dia, mes;
    printf("Informe o dia e o mês: ");
    scanf("%d %d", &dia, &mes);

    if ((dia >= 21 && dia <= 31 && mes == 3) || (dia >= 1 && dia <= 19 && mes == 4)){
        printf("Signo: Áries");
    }
    else if ((dia >= 20 && dia <= 30 && mes == 4) || (dia >= 1 && dia <= 20 && mes == 5)){
        printf("Signo: Touro");
    }
    else if ((dia >= 21 && dia <= 31 && mes == 5) || (dia >= 1 && dia <= 20 && mes == 6)){
        printf("Signo: Gêmeos");
    }
    else if ((dia >= 21 && dia <= 30 && mes == 6) || (dia >= 1 && dia <= 22 && mes == 7)){
        printf("Signo: Câncer");
    }
    else if ((dia >= 23 && dia <= 31 && mes == 7) || (dia >= 1 && dia <= 22 && mes == 8)){
        printf("Signo: Leão");
    }
    else if ((dia >= 23 && dia <= 31 && mes == 8) || (dia >= 1 && dia <= 22 && mes == 9)){
        printf("Signo: Virgem");
    }
    else if ((dia >= 23 && dia <= 30 && mes == 9) || (dia >= 1 && dia <= 22 && mes == 10)){
        printf("Signo: Libra");
    }
    else if ((dia >= 23 && dia <= 31 && mes == 10) || (dia >= 1 && dia <= 21 && mes == 11)){
        printf("Signo: Escorpião");
    }
    else if ((dia >= 22 && dia <= 30 && mes == 11) || (dia >= 1 && dia <= 21 && mes == 12)){
        printf("Signo: Sagitário");
    }
    else if ((dia >= 22 && dia <= 31 && mes == 12) || (dia >= 1 && dia <= 19 && mes == 1)){
        printf("Signo: Capricórnio");
    }
    else if ((dia >= 20 && dia <= 31 && mes == 1) || (dia >= 1 && dia <= 18 && mes == 2)){
        printf("Signo: Aquário");
    }
    else if ((dia >= 19 && dia <= 29 && mes == 2) || (dia >= 1 && dia <= 20 && mes == 3)){
        printf("Signo: Peixes");
    }
    else {
        printf("Insira uma data válida");
    }
    return 0;
}
