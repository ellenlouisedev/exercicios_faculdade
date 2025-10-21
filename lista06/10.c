#include <stdio.h>

int main() {
    int num1, num2, maior, mmc;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        maior = num1;
    } else {
        maior = num2;
    }

    while (1) {
        if (maior % num1 == 0 && maior % num2 == 0) {
            mmc = maior;
            break;
        }
        maior = maior + 1;
    }

    printf("%d", mmc);
    return 0;
}
