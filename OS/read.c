#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main() {
char fd;

char *myfifo="/tmp/myfifo";
char buf[MAX_BUF];

fd=open(myfifo,O_RDONLY);
read(fd,buf,MAX_BUF);
printf("Writer: %s\n",myfifo);

close(fd);
return 0;   
}