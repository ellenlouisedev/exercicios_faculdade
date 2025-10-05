#include <stdio.h>

int main(){
    int bMaior, bMenor, altura;
    scanf("%d %d %d",&bMaior, &bMenor, &altura);
    int area = (bMaior + bMenor) * altura / 2;
    printf("%d", area);
    return 0;
}