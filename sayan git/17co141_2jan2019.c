#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
#include<stdlib.h>
#include<unistd.h>

#include<sys/types.h>
extern int errno; 
int main() 
{      
    // if file does not have in directory  
    // then file foo.txt is created. 
    int fd=creat( "a.txt", S_IRWXU);
      fd = open("a.txt", O_RDWR);  
      
    printf("fd = %d/n", fd); 
      
    if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);  
          
        // print program detail "Success or failure" 
        perror("Program");                  
    }

    //-------------WRITING-------------------------

int sz; 
  
   //fd = open("a.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
  if (fd < 0) 
  { 
     perror("r1"); 
     exit(1); 
  } 
  
  sz = write(fd, "Hey There I am Sayan\n", strlen("Hey There I am Sayan\n")); 
  
  printf("called write(% d, \"Hey There I am Sayan\\n\", %d)."
    " It returned %d\n", fd, strlen("Hey There I am Sayan\n"), sz); 
  close(fd);
   fd = open("a.txt", O_RDWR);  



//----------------ACESSING--------------
   int rval;

 /* Check file existence. */
 rval = access ("a.txt", F_OK);
 if (rval == 0) 
  printf ("\n%s -------FILE EXISTS\n", "a.txt");
 else {
  if (errno == ENOENT) 
   printf ("%s does not exist\n", "a.txt");
  else if (errno == EACCES) 
   printf ("%s is not accessible\n", "a.txt");
  return 0;
 }











     //----------------READING-------------------

//int  sz; 
  char *c = (char *) calloc(100, sizeof(char)); 
  
 // fd = open("foo.txt", O_RDONLY); 
  if (fd < 0) { perror("r1"); exit(1); } 
  
  sz = read(fd, c, strlen("Hey There I am Sayan\n")); 
  printf("\ncalled read(% d, c, 10).  returned that"
         " %d bytes  were read.\n", fd, sz); 
  c[sz] = '\0'; 
  printf("Those bytes are as follows: % s\n", c); 
  lseek(fd,4,SEEK_SET);

  sz = read(fd, c, strlen("Hey There I am Sayan\n")); 
  printf("\ncalled read(% d, c, 10).  returned that"
         " %d bytes  were read.\n", fd, sz); 
  c[sz] = '\0'; 
  printf("Those bytes are as follows: % s\n", c); 


 printf("----DUPE---VALUE-----%d\n",dup(fd));
 close(fd);
 //------------------LINKING-----------------
 link("a.txt", "abc.txt");
 printf("OPENING BY NEW NAME abc.txt\n");
  fd = open("abc.txt", O_RDWR);
  printf("fd = %d/n", fd); 
      
    if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("\nError Number % d\n", errno);  
          
        // print program detail "Success or failure" 
        perror("Program");                  
    }  
     unlink("abc.txt");
      fd = open("abc.txt", O_RDWR);
      if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);  
          
        // print program detail "Success or failure" 
        perror("Program");                  
    }  









    //-----------------------CLOSING---------------------- 
    printf("\n");
    if (close(fd) < 0)  
    { 
        perror("c1"); 
        exit(1); 
    }  
    printf("closed the fd.\n"); 
    return 0; 
} 