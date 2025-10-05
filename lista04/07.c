#include <stdio.h>

int main(){
    float peso;
    scanf("%f",&peso);
    printf("%f\n",peso + (peso*0.15));
    printf("%f\n",peso - (peso*0.20));
    return 0;
}