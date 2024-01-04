 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct
{
char dname[10],fname[10][10];
int fcnt;
}
dir[10];
int main()
{
    int i,ch,dcnt,k;
    char f[30],d[30];
    dcnt=0;
    while(1)
    {
        printf("\n\n1.Create File\t2.Delete File\t3.Search File");
        printf("\n4.Display File\t5.Exit\nEnter your choice--");
scanf("%d",&ch);
switch (ch)
{
case 1:
printf("\nEnter name of file directory--");
scanf("%s",dir[dcnt].dname);
dir[dcnt].fcnt=0;
dcnt++;
    break;
case 2:
printf("\n Enter the name of the directory--");
scanf("%s",f);
for(i=0;i<dcnt;i++)
{
if(strcmp(f,dir[i].dname[i])==0)
{
printf("Enter the file--");
scanf("%s",dir[i].fname[dir[i].fcnt]);
dir[i].fcnt++;
printf("File created");
}
if(i==dcnt)
printf("Directory %s not found",d);

break;
case 3:
printf("enter name of the directory")
scanf("%s",d);
for(i=0;i<dcnt;i++)

default:
    break;
}
    }
}