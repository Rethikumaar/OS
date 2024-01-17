#include<stdio.h>
#include<stdlib.h>
int mutex = 1;

int full = 0;
int empty = 10, x = 0;
void signal(int *mutex) {
    ++mutex;
    return;
}
void wait(int *mutex)
{
    --mutex;
    return;
}

void producer()
{
    wait(&mutex);
    ++full;
    --empty;
    x++;
 printf("\nProducer produces item %d",x);
signal(&mutex);
}

void consumer()
{
    wait(&mutex);
    --full;
    ++empty;
    printf("\nConsumer consumes item %d",x);
    x--;
    signal(&mutex);
}

int main()
{
    int n,i;
    printf("\n1. Press 1 for Producer"
           "\n2. Press 2 for Consumer"
           "\n3. Press 3 for Exit");
           for(i=1;i>0;i++)
           {
               printf("\nEnter your choice:");
               scanf("%d",&n);
               switch(n)
               {
               case 1:
                   if((mutex ==1) && (empty !=0))
                   {
                       producer();
                   }
                   else
                   {
                       printf("Buffer is full!");
                   }
                   break;
               case 2:
                if((mutex ==1) && (full !=0))
                {
                    consumer();
                }
                else
                {
                    printf("Buffer is empty!");
                }
                break;
               case 3:
                exit(0);
                break;
               }
           }
}