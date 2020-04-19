#include "header.h"
void *thread_1(void *p)
{
 while(1)
 {
 sleep(2);
 printf("In thread_1...\n");
 }
}
void *thread_2(void *p)
{
 while(1)
 {
  sleep(5);
  printf("In thread_2 ...\n");
 }
}

int main()
{
  pthread_t t1,t2;
  pthread_create(&t1,0,thread_1,0);
  pthread_create(&t2,0,thread_2,0);

  while(1)
  {
  sleep(5);	  
  printf("in main\n");
  }

}
