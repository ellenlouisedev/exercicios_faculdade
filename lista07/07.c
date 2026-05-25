#include <stdio.h>
int main() {
    int x, cont = 0;
    scanf("%d", &x);
    if (x % 2 == 0) {
        x++;
    }
    while (cont < 6) {
        printf("%d\n", x);
        x = x + 2;
        cont++;
    }
    return 0;
}