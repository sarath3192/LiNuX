#include "header.h"

pthread_mutex_t mutex;
void *thread_1(void *p)
{
 while(1)
 {
  pthread_mutex_lock(&mutex);
  sleep(1);
  printf("In thread_1...\n");
  pthread_mutex_unlock(&mutex);
 }
}
void *thread_2(void *p)
{
 while(1)
 {
  pthread_mutex_lock(&mutex);
  sleep(1);
  printf("In thread_2 ...\n");
  pthread_mutex_unlock(&mutex);
 }
}

int main()
{
  pthread_t t1,t2;
  pthread_create(&t1,0,thread_1,0);
  pthread_create(&t2,0,thread_2,0);
  while(1)
  {	  
    pthread_mutex_lock(&mutex);
 // while(1)
 // {
   // sleep(1);	  
    printf("in main\n");
 // }
    pthread_mutex_unlock(&mutex);
  }
}
