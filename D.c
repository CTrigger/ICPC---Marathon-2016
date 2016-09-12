#include <stdio.h>
#include<stdlib.h>

#define condC c%i==0
#define condA c%(i*a)==0
#define condB c%(i*b)!=0
#define condD d%(c/i)!=0

int main(int argc, char **argv) {
	int a, b, c, d;
	int i;
//	freopen("D/in2", "r", stdin);

	/*
	 ==================
	 test 1
	 2 12 8 2

	 output
	 4
	 =================
	 test 2
	 3 4 60 105

	 output
	 6
	 ==================
	 */
	scanf("%d %d %d %d", &a, &b, &c, &d);



	for (i = c; i / 2 > 0; i--) {
		if (condC && condA && condB && condD) {
			printf("%d\n", c / i);
			return 0;

		}

	}
	puts("-1");


	return 0;

}
