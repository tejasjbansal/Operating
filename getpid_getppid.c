#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h> 
int main(){
	 int pid;

 	pid = fork(); 

	if(pid==0){
		printf("Child Process \n");
		printf("Child process id is : %d: ",getpid());
		printf("\n");
		printf("Parent process id is : %d ",getppid());
		printf("\n\n");
	}

	else if(pid>0){
		printf("\n");
		printf("Parent Process\n");
		printf("My process id is : %d ",getpid());
		printf("\n");
		printf("Child process id is : %d: ",pid);
		printf("\n\n");
	}
	return 0;
}


/*tejash@tejash-VirtualBox:~/Documents/Operating_System$ gcc getpid_getppid.c 
tejash@tejash-VirtualBox:~/Documents/Operating_System$ ./a.out

Parent Process
<<<<<<< HEAD
My process id is : 7393 
Child process id is : 7394: 

Child Process 
Child process id is : 7394: 
Parent process id is : 7393 
*/
