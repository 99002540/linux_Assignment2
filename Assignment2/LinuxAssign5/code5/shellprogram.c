/*5. Write a program to compile & link any c/c++ program within child process by launching gcc using execl/execlp.*/


#include<unistd.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/wait.h>
#include <string.h>



int main()
{
	int result,returni;
	result=fork();
	char *str;
	char *s;
	str="s.out"; 
	
	if(result<0)
	{
		perror("fork");
		exit(1);
	}
	if(result==0)
	{ 
    	execl("/bin/g++","g++","-c","sample.cpp",NULL) ; 
	}
	else	
	{
	waitpid(result, &returni, 0); 
	execl("/bin/g++","g++","sample.o","-o",s,NULL); 
	}
	exit(0);
}

