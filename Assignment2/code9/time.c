/*#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    struct tm *ntm;
    char time_now[32];
    t=time(NULL);
    ntm=localtime(&t);
    strftime(time_now,32,"%H:%M:%S",ntm);
    printf("Time : %s\n",time_now);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int hours, minutes, seconds;
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);

	hours = local->tm_hour;	  
	minutes = local->tm_min;	 
	seconds = local->tm_sec;	

	// print local time
	if (hours < 12)	// before midday
		printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);

	else	// after midday
		printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

	
	return 0;
}




