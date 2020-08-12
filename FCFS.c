#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 

int main(){
    int n,bursrt[10],arrival[10],wt[10],tat[10],temp[10];
    float awt=0,atat=0;
    printf("Enter the number of process :-  ");
    scanf("%d",&n);
    printf("Enter the Burst time of %d processes",n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bursrt[i]);
    }
    printf("Enter the Arrival time of %d processes",n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arrival[i]);
    }
    temp[0]=0;
    printf("process\t burst time\t arrival time \t wating time\t turn around time\n");
    for(int i=0;i<n;i++){
        wt[i]= 0;
        tat[i]=0;
        temp[i+1]=temp[i]+bursrt[i];
        wt[i]=temp[i]-arrival[i];
        tat[i]=wt[i]+bursrt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,bursrt[i],arrival[i],wt[i],tat[i]);
    }
    awt = awt/n;
    atat = atat/n;
    printf("Average waiting time =%f\n",awt);
    printf("Average Turn around time =%f\n",atat);      
}