#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include <string.h> 
int main(int argc,char *argv[])
{
    int c, result;
    if(argc==2)
    {
        c = fork();
        if(c==0)
        {
            execlp(argv[1],argv[1],NULL);
        }
        else if(c<0)
        {
            perror("Error child1");
            exit(0);
        }
        else
        {
            waitpid(c,&result,0);
        }
   }
   return 0;
}
