#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define condC c%i==0
#define condA c%(i*a)==0
#define condB c%(i*b)!=0
#define condD d%(c/i)!=0

int main(int argc, char **argv) {
	int a, b, c, d;
	int i, ans=-1,limit;

/*
#ifndef ONLINE_JUDGE
	freopen("D/i1", "r", stdin);
#endif
*/
	scanf("%d %d %d %d", &a, &b, &c, &d);

	limit = (int) sqrt(c);

	for (i = 1; i <= limit; i++) {
		if (condC && condA && condB && condD) {
			ans = c/i;
		}

		if( i % a == 0 && c % i == 0 && i % b != 0 && d % i != 0 ){
			printf("%d\n", i);
			return 0;
		}


	}

	printf("%d\n",ans);

	return 0;

}
