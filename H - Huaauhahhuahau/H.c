#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

#define max 1001 //<-- caso dê errado mudar o valor de max
#define true puts("S")
#define false puts("N")

#ifndef ONLINE_JUDGE
	#include<time.h>
	clock_t begin;
	clock_t end;
#endif
void timeCount(int act){
	if (act == 1){
		#ifndef ONLINE_JUDGE
			begin = clock();
			freopen("4.in", "r", stdin);
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

int palindrome(char array[], int init, int size) {
	if (init >= size)
		return 1;

	if (array[init] == array[size])
		return palindrome(array, init + 1, size - 1);
	else
		return -1;
}
int main(int argc, char **argv) {

	timeCount(1);

	char risada[max];
	int i, aux = 0;

	scanf("%s", risada);
	char vogal[strlen(risada)];

	for (i = 0; i < strlen(risada); i++) {
		if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i'
				|| risada[i] == 'o' || risada[i] == 'u') {
			vogal[aux] = risada[i];
			aux++;
		}
	}
	vogal[aux]='\0';

	if (palindrome(vogal, 0, aux - 1) == 1) {
		true;
	} else {
		false;
	}
	
	timeCount(0);
	
	return 0;
}
