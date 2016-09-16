/*https://www.urionlinejudge.com.br/judge/pt/problems/view/2235*/
#include<stdio.h>
#include<stdlib.h>

#ifndef ONLINE_JUDGE
	#include<time.h>
#endif

int main(int argc, char **argv) {
	int a, b, c;
	
	#ifndef ONLINE_JUDGE
		clock_t begin = clock();
		freopen("1.in", "r", stdin);
	#endif


	scanf("%d %d %d", &a, &b, &c);
	if (a - b == 0 || b - c == 0 || c - a == 0 ||
			a - (b + c) == 0 || b - (a + c) == 0 || c - (a + b) == 0) {
		puts("S");
	} else {
		puts("N");
	}
	
	#ifndef ONLINE_JUDGE
		clock_t end = clock();
		double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
		puts("================================");
		printf("Time Execution: %Lf seconds\n",time_spent);
		puts("================================");
	#endif
	
	return 0;
}
