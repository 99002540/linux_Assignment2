

#include<unistd.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<signal.h> 





int main(int argc ,char *argv[])
{
	int pid =atoi( argv[2] );
	switch(*argv[1])
	{
	case 'k':printf("Killing the process\n");
		 kill(pid, 9);
		 break;
	case 'i':printf("Interupting the process");
		 kill(pid, 2);
		 break;
	case 'q':printf("Quiting the process");
		 kill(pid, 3);
		 break;
        case 'a':printf("Aborting the process");
		 kill(pid, 6);
		 break;
	default:;
	}
}
