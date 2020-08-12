#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 

int main(){
    int n,bursrt[10],arrival[10],wt[10],tat[10],temp[10],pid[10],ct[10];
    int st=0,tot=0;
    float awt=0,atat=0;
    printf("Enter the number of process :-  ");
    scanf("%d",&n);
    printf("Enter the Burst time of %d processes",n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&bursrt[i]);
        pid[i]=i+1;
        temp[i]=0;
    }
    printf("Enter the Arrival time of %d processes",n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arrival[i]);
    }
    
    while(1)
        {
            int c=n, min = 999999;
            if (tot == n)
                break;
            for (int i=0; i<n; i++)
            {
                if ((arrival[i] <= st) && (temp[i] == 0) && (bursrt[i]<min))
                {
                    min=bursrt[i];
                    c=i;
                }
            }
            if (c==n)
                st++;
            else
            {
                ct[c]=st+bursrt[c];
                st+=bursrt[c];
                tat[c]=ct[c]-arrival[c];
                wt[c]=tat[c]-bursrt[c];
                temp[c]=1;
                pid[tot] = c + 1;
                tot++;
            }
        }

    printf("process\t burst time\t arrival time \t comp time\t wating time\t turn around time\n");
        for(int i=0;i<n;i++)
        {
            awt+= wt[i];
            atat+= tat[i];
            printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",pid[i],bursrt[i],arrival[i],ct[i],wt[i],tat[i]);
        }
        printf("Average waiting time =%f\n",awt/n);
        printf("Average Turn around time =%f\n",atat/n);      
    
}