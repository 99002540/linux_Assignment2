#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char str2[100],str1[100],str3[100],str4[100],str5[100],str6[100];
    int length;
    int number;
    int n = 5, k = 1; 
    //Strlen
    printf("\nEnter the String : ");
    scanf("%s",str);

    length = FindLength(str);

    printf("\nLength of the String is : %d\n", length);


    //strcpy
    printf("\nCopying Strings....\n");
    printf ("\nEnter 1st string :\n");
    scanf("%s",str1);
    printf ("\nEnter 2nd string :\n");
    scanf("%s",str2);
    stringcopy(str1,str2);



    // Strconcateniate
    printf("\nStrings Concat....\n");
    printf("\nEnter  1st string for concat \n");
    scanf("%s",str3);
    printf("Enter  2st string for concat \n");
    scanf("%s",str4);
    stringconcat(str3,str4);




    //strcom
    printf("\nStrings comparision...\n");
    printf("\nEnter  1st string to compare\n");
    scanf("%s",str5);
    printf("Enter  2st string for comaprision\n");
    scanf("%s",str6);
    stringcompare(str5,str6);
    
    
    
    
    
    
    
        printf("Enter a number... ");
        scanf("%d",&number);
        printf("factorial of a number %d\n ", fact(number));
        prime(number);
	checkpalindrome(1001);
	printf("%d\n",addition(3,6,4,5));
	
	
	
	
	
	printf("%d with %d-th bit Set: %d\n", n, k, setBit(n, k)); 
        printf("%d with %d-th bit Cleared: %d\n", n, k, clearBit(n, k)); 
        printf("%d with %d-th bit Toggled: %d\n", n, k, toggleBit(n, k));
        if(query(n, k))
        printf("Bit number %d is SET in number %d.\n",k,n);
        else
        printf("Bit number %d is not SET in number %d.\n",k,n);
    return 0;
}
