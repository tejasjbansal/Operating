
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
#include<sys/wait.h>

int main(){
int child_a, child_b;

child_a = fork();

if (child_a == 0) {
	printf("Child A id %d\t%d \n",getpid(),getppid());
    printf("First Child work is done\n");
} else {
	sleep(1);
    child_b = fork();

    if (child_b == 0) {
    	printf("Child B id %d\t%d \n",getpid(),getppid());
        printf("Second Child Work is done\n");
    } else {
    	printf("Parent id is %d \n",getpid());
    	printf("Parent work is complete\n");
        
    }
}	
	return 0;
}