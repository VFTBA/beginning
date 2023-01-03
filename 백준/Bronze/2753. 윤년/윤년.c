#include <stdio.h>
int main( ){
    int leapyear;
    scanf("%d", &leapyear);
    
    if (leapyear % 4 == 0 && leapyear % 100 != 0 || leapyear % 400 == 0) {
        printf("1");
    }
    
    else {
        printf("0");
    }
}