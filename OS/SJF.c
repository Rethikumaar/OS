#include<stdio.h>
#include<string.h>
main()
{
    int i=0,processNumber[10],burstTime[10],n,waitTime[10],temp=0,j,turnaroudTime[10];
    float avgWaitTime,avgTat;
    printf("ENTER THE NUMBER OF PROCESSORS");
    scanf("\n%d",&n);
    printf("\n Enter the burst time of each process");
    for(i=0;i<n;i++)
    {
        printf("\np%d",i);
        scanf("%d",&burstTime[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(burstTime[i]>burstTime[j]){
            temp=burstTime[i];
            burstTime[i]=burstTime[j];
            burstTime[j]=temp;
            temp=processNumber[i];
            processNumber[i]=processNumber[j];
            processNumber[j]=temp;
        }
    }
    }
    waitTime[0]=0;
    for(i=1;i<n;i++)
    {
        waitTime[i]=burstTime[i-1]+waitTime[i-1];
        avgWaitTime=avgWaitTime+waitTime[i];
    }
    printf("\n process no\t bursttime\twaitingTime\t turnaround time\n");
    for(i=0;i<n;i++)
    {
        turnaroudTime[i]=burstTime[i]+waitTime[i];
        avgTat+=turnaroudTime[i];
        printf("\n p%d\t\t%d\t\t%d\t\t%d",i,burstTime[i],waitTime[i],turnaroudTime[i]);

    }
    printf("\n\n\tAverage waiting time%f\n\tAverage turn around time%f",avgWaitTime,avgTat);
    }

