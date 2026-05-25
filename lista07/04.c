#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, delta, x1, x2;
    scanf ("%f %f %f", &a, &b, &c);
    delta = pow(b, 2) - 4*a*c;
    if (delta < 0)
        printf ("Não existem raízes");
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf ("Raíz única: %.2f", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf ("x1 = %.2f\n x2 = %.2f", x1, x2);
    }
    return 0;
}