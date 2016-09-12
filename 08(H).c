#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

#define max 1001 //<-- caso dê errado mudar o valor de max
#define true puts("S")
#define false puts("N")

int palindrome(char array[], int init, int size) {
	if (init >= size)
		return 1;

	if (array[init] == array[size])
		return palindrome(array, init + 1, size - 1);
	else
		return -1;
}
int main(int argc, char **argv) {

//	freopen("H/in4", "r", stdin);
	char risada[max];
	int i, aux = 0;

	scanf("%s", risada);
	char vogal[strlen(risada)];
//	char *vogal=(char*) malloc(sizeof(char)*strlen(risada));

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

	return 0;
}
