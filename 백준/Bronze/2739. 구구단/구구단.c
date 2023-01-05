#include <stdio.h>
int main() {
    int a, b = 1, c = 0;
    scanf("%d", &a);

    for (b = 1; b <= 9; b++) {
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
    }
}