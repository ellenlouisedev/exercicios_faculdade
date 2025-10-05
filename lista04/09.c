#include <stdio.h>
#include <math.h>

int main(){
    int duracao, horas, minutos, segundos;
    scanf("%d",&duracao);
    horas = duracao / 3600;
    minutos = (duracao % 3600) / 60;
    segundos = duracao % 60;
    printf("%d Segundos equivalem a %d horas, %d minutos, e %d segundos",duracao,horas,minutos,segundos);
    return 0;
}