#include <stdio.h>
int main() {
	int youngest, middle;
	scanf("%d %d", &youngest, &middle);
	int agediff = middle - youngest;
	int eldest = middle + agediff;
	printf("%d", eldest);

	
}