#include"header.h"

void main()
{

	
	
		char i;
		int pid;
		if(fork()==0)
	 {		
		pid=setsid();    
		printf("child pid=%d\n",pid);	   
		while(1)
		{	
			sleep(10);
			for(i=6;i>0;i--)
			{
				sleep(1);
			        printf("\a");	
			}
		}
	
	
	 }
	else
	{

	}
	


}
