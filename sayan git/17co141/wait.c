#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
int main() 
{ 
    pid_t cpid; 
    if (fork()== 0) 
        {
        	printf("child\n");
        }       /* terminate child */
    else
    {wait(NULL);
    	printf("parent\n");
    }
        /*cpid = wait(NULL); /* reaping parent 
    }
    printf("Parent pid = %d\n", getpid()); 
    printf("Child pid = %d\n", cpid); */
  
    return 0; 
} 