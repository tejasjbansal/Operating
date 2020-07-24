#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
#include<sys/wait.h>

 int main()

 {

 int pid;

 pid = fork();

 if(pid <0) {
 	printf("Fork failed, child process not created \n"); 	
 }

 

else if (pid == 0) 

{

 printf("Child process created \n"); 

exit(0);

 } 

else if (pid>0) 

{

 wait(0); 

printf("It is the parent process \n");

 }

 return 0;

 }


 /*
tejash@tejash-VirtualBox:~/Documents/Operating_System$ gcc exit_wait.c 
tejash@tejash-VirtualBox:~/Documents/Operating_System$ ./a.out
Child process created 
It is the parent process 
*/