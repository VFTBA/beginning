#include <stdio.h>
#include <stdlib.h>
int main() {
	int firstnumber;
	char secondnumber[4];
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d", &firstnumber);
	getchar();
	scanf("%s", &secondnumber);
	getchar();
	a = firstnumber * (secondnumber[2]-'0');
	b = firstnumber * (secondnumber[1]-'0');
	c = firstnumber * (secondnumber[0]-'0');
	d = firstnumber * atoi(secondnumber);
	printf("%d\n%d\n%d\n%d", a, b, c, d);

}