#include <stdio.h>
int main () {
    float a, b, c, perimetro, area;
    scanf ("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        perimetro = a + b + c;
        printf ("Perímetro = %.1f", perimetro);
    }
    else {
        area = (a + b) * c / 2;
        printf ("Área = %.1f", area);
    }
    return 0;
}