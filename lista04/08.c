#include <stdio.h>

int main(){
    int num, unidade, dezena, centena;
    scanf("%d",&num);
    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = num / 100;
    printf("%d, %d, %d\n",unidade,dezena,centena);
    return 0;
}