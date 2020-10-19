#include <stdio.h>
#include <time.h>   

int main()
{
	double time_spent = 0.0;

	clock_t begin = clock();
	int a ,b;
	printf("Enter any two Numbers for addition\n ");
	scanf("%d%d",&a,&b);
	printf("\nSum is %d ",a+b);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\nTime elpased is %f seconds", time_spent);

	return 0;
}

