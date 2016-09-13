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
			return 0;
		}


	}

	printf("%d\n",ans);

	return 0;

}
