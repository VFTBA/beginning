#include <stdio.h>
int main() {

    int array[30] = { 0 };
    int n;

    for (int i = 0; i < 28; i++) {

        scanf("%d", &n);
        array[n - 1]++;
    }

    for (int i = 0; i < 30; i++) {

        if (array[i] == 0) {
             printf("%d\n", i+1);
        }

    }

}