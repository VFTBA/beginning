#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g;
    scanf("%d %d %d", &a, &b, &c);
    d = (a + b) % c;
    e = ((a % c) + (b % c)) % c;
    f = (a * b) % c;
    g = ((a % c) * (b % c)) % c;
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
}