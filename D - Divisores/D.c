/*
https://www.urionlinejudge.com.br/judge/pt/problems/view/2238
Esse é um problema de optimização matemática.
*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define condC c%i==0
#define condA c%(i*a)==0
#define condB c%(i*b)!=0
#define condD d%(c/i)!=0

#ifndef ONLINE_JUDGE
	#include<time.h>
	clock_t begin;
	clock_t end;
#endif
void timeCount(int act){
	if (act == 1){
		#ifndef ONLINE_JUDGE
			begin = clock();
			freopen("1.in", "r", stdin);
		#endif
		
	}
	else{
		#ifndef ONLINE_JUDGE
			end = clock();
			double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
			puts("================================");
			printf("Time Execution: %.5Lf seconds\n",time_spent);
			puts("================================");
		#endif
		
	}
}

int main(int argc, char **argv) {
	int a, b, c, d;
	int i, ans=-1,limit;

	timeCount(1);
	
	scanf("%d %d %d %d", &a, &b, &c, &d);

	limit = (int) sqrt(c);

	for (i = 1; i <= limit; i++) {
		//esse trecho armazena todos os N possível até a metade 
		//de seus divisores possiveis substituindo - os
		//sendo N = C/i
		if (condC && condA && condB && condD) {
			ans = c/i;
		}

		//esse trecho testa o divisor em sua sequencia
		//aqui o primeiro que encontrar é o menor N possível.
		//por isso ele encerra o programa aqui.
		if( i % a == 0 && c % i == 0 && i % b != 0 && d % i != 0 ){
			printf("%d\n", i);
			timeCount(0);
			return 0;
		}


	}

	printf("%d\n",ans);
	
	timeCount(0);
	
	return 0;

}
