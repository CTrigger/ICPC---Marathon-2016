#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv) {
	int a, b, c;
	//freopen("A/in3", "r", stdin);

	scanf("%d %d %d", &a, &b, &c);
	if (a - b == 0 || b - c == 0 || c - a == 0 ||
			a - (b + c) == 0 || b - (a + c) == 0 || c - (a + b) == 0) {
		puts("S");
	} else {
		puts("N");
	}

	return 0;
}
