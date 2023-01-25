#include <stdio.h>
int main() {
    int a[9];
    int max = a[0];
    int b = 1;

    for (int i = 0; i <9; i++) {
         scanf("%d", &a[i]);

         if (a[i] > max) {
             max = a[i];
             b = i + 1;
         }
    }

  printf("%d\n%d", max, b);
}