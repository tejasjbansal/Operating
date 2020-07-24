
/*Orphan processes are those processes that are still running even though their
parent process has terminated or finished.
A process can be orphaned intentionally or unintentionally.

1. An intentionally orphaned process runs in the background without any manual support. 
This is usually done to start an indefinitely running service or to complete a long-running job 
without user attention.

2. An unintentionally orphaned process is created when its parent process crashes or terminates. 
Unintentional orphan processes can be avoided using the process group mechanism.*/


#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
#include<sys/wait.h>

int main(){
	int pid;
	pid = fork();

	if (pid <0){
		printf("Fork failed\n");
	}
	else if(pid==0){
		sleep(1);
		printf("child process is created\n");
		
	}
	else if(pid >0){
		printf("it is the parent process\n");
	}

	return 0;
}