#include<stdio.h>
#include<conio.h>
int main()
{
    int processNo[20],burstTime[20],priority[20],waitTime[20],turnaroundTime[20],i,k,n,temp;
    float avgWaitTime,avgTat;
    printf("Enter the number of processes --");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        processNo[i]=i;
        printf("Enter the Burst Time and Priority of process %d --",i);
        scanf("%d%d",&burstTime[i],&priority[i]);
    }
    for(i=0;i<n;i++)
        for(k=i+1;k<n;k++)
        if(priority[i]>priority[k])
    {
        temp=processNo[i];
        processNo[i]=processNo[k];
        processNo[k]=temp;
        temp=burstTime[i];
        burstTime[i]=burstTime[k];
        burstTime[k]=temp;
        temp=priority[i];
        priority[i]=priority[k];
        priority[k]=temp;
    }
    avgWaitTime=waitTime[0]=0;
    avgTat=turnaroundTime[0]=burstTime[0];
    for(i=1;i<n;i++)
    {
        waitTime[i]=waitTime[i-1]+burstTime[i-1];
        turnaroundTime[i]=turnaroundTime[i-1]+burstTime[i];
        avgWaitTime=avgWaitTime+waitTime[i];
        avgTat=avgTat+turnaroundTime[i];
    }
    printf("\nPROCESS\t\tPRIORITY\tBURST TIME\tWAITING TIME\tTURNAROUND TIME");
    for(i=0;i<n;i++)
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",processNo[i],priority[i],burstTime[i],waitTime[i],turnaroundTime[i]);
    printf("\nAverage Waiting Time is -- %f",avgWaitTime/n);
    printf("\nAverage Turnaround Time is -- %f",avgTat/n);
    getch();
}