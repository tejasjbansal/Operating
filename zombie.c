/*
A process which has finished the execution but still has entry 
in the process table to report to its parent process is known as a zombie process. 
A child process always first becomes a zombie before being removed from the process table. 
The parent process reads the exit status of the child process which reaps off the child 
process entry from the process table.*/


#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
#include<sys/wait.h>

int main(){
	int pid;
	pid = fork();

	if(pid <0){
		printf("Fork call is failed\n");
	}
	else if(pid>0){
		sleep(5);
		printf("It is the parent process\n");
	}
	else if(pid==0){
		printf("Child process is created\n");
		exit(0);
	}
	
	return 0;
}