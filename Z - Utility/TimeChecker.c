/*use this to check the time spended in your algorithm*/
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
