#include <stdio.h>

void divide(int a, int b, int *q, int *r) {
    int x;
    int y;
    x = a / b;
    *q = x;
    y = a % b;
    *r = y; 
}
int main() {
    int a = 27;
    int b = 4;
    int q = 0;
    int r = 0;

    divide(a, b, &q, &r);

    printf("%d\n%d\n", q, r);

    return 0;
}
