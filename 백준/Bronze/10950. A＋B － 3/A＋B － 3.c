#include <stdio.h>
int main() {
    int t;
    int a, b, c = 0;
    scanf("%d", &t);
   
    for (int i = 0; i < t; i++) {
        scanf("%d %d\n", &a, &b);
        c = a + b;
        printf("%d\n", c);
        
    }
}