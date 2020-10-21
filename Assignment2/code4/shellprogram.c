/*4. Design a mini shell of your own as follows
   * take command name as input from user (string format)...
   * launch the command in the child process using execl/execlp
   * parent will wait for completion of child and print exit status*/


#include<unistd.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/wait.h>
#include <string.h>



int main()
{
	int result,returni;
	
	printf("Enter the command: \n");
	char str[100];
	scanf(" %[^\n]s\n",str);
	result=fork();
	if(result<0)
	{
		perror("fork");
		exit(1);
	}
	if(result==0)
	{ 
    	execl("/bin/sh","sh","-c",str,NULL) ; 
	}
	else	
	{
		waitpid(result, &returni, 0); 
	}
	exit(0);
}

