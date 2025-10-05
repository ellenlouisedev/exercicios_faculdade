#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);
    printf("%f\n", pow(num, 2));
    printf("%f\n", pow(num, 3));
    printf("%f\n", sqrt(num));
    printf("%f", cbrt(num));
    return 0;
}