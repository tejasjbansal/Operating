/* Q1. Write a program to open a directory and list its contents.
Tejash Bansal
Section - C
*/
#include <stdio.h>
#include <dirent.h>  
int main(){
    struct dirent *de;
    DIR *dr = opendir("/mnt/d/Tejas/5th Semester/"); 
  
    if (dr == NULL)
    { 
        printf("Could not open current directory" ); 
        return 0; 
    } 
    while ((de = readdir(dr)) != NULL) 
            printf("%s\n", (*de).d_name); 
  
    closedir(dr);     
    return 0; 
}