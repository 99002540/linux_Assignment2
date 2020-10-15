#include <stdarg.h>
#include<stdio.h>
void prime(int number)
{
   int flag;
   int i;
	for (i = 2; i <= number / 2; ++i) {

        // condition for non-prime
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (number == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", number);
        else
            printf("%d is not a prime number.", number);
    }
}

int fact(int number)
{
    int i,fact=1;
  
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    return fact;
}

void checkpalindrome(int number)
{
    int temp, remainder, sum = 0;
    temp = number;
    while(number!=0)
    {
        remainder = number % 10;
        sum = sum*10 + remainder;
        number/=10;
    }
    if(sum==temp)
        printf(" %d is palindrome ",sum );
    else
        printf(" number is not a palindrome");
}

int addition(int num, ...) 
{ 
    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, num); 
    for (i = 0; i < num; i++)  
        sum += va_arg(valist, int); 
  
    va_end(valist); 
  
    return sum; 
}
