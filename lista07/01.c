#include <stdio.h>
int main(){
    float a, b, media;
    scanf ("%f %f", &a, &b);
    media = (a * 3.5 + b * 7.5) / 11;
    printf ("MÉDIA = %.5f", media);
    return 0;
}