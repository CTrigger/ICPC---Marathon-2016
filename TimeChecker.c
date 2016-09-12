//biblioteca necessária
#include<time.h>

//inserir no inicio
clock_t begin = clock();


//inserir após a resposta final
clock_t end = clock();
double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
