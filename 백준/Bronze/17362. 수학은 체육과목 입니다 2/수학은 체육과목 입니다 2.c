#include <stdio.h>
int main() {
    int n;
    int answer;
    int number;
    scanf("%d", &n);
    answer = n % 8;

    if (answer == 1) {
        number = 1;
    }

    else if (answer == 0 || answer == 2) {
        number = 2;
    }

    else if (answer == 3 || answer == 7) {
        number = 3;
    }

    else if (answer == 4 || answer == 6) {
        number = 4;
    }

    else if (answer == 5) {
        number = 5;
    }
    printf("%d", number);
}