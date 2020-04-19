#include "header.h"

void main()
{
  int fd;
  int fd1;
  //close(1);
  fd=open("data",O_RDWR|O_CREAT);
  fd=dup(1);
  write(fd,"hello",5);
  printf("%d %d\n",fd,fd1);
  //close(1);
  printf("hello");

 
 }

