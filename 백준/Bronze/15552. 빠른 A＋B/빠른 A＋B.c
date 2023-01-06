#include <stdio.h>
int main() {
    int t;
    int a, b, c = 0;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        c = a + b;
        printf("%d\n", c);
    }
}