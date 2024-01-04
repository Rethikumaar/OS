#include<stdio.h>
void towers(int, char, char, char);
int main()
{
	int n;
	printf("Enter the number of disks\n");
 	scanf("%d", &n);
	if(n==0)
	printf("No Disks");
	else
	{
	    printf("The sequence moves involved in Tower of Hanoi:\n");
	    towers(n, 'A', 'C', 'B');
        }
          return 0;
}
void towers(int n, char frompeg, char topeg, char auxpeg)
{
       if(n==1)
       {
            printf("\n move disks 1 from peg %c to peg %c",frompeg, topeg);
            return;
       
       }
 	towers(n-1, frompeg, auxpeg, topeg);
 	printf("\n move disk %d frompeg %c to peg %c", n, frompeg, topeg);
 	towers(n-1, auxpeg, topeg, frompeg);
}
