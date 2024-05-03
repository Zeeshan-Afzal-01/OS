#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
\

int main()
{
    int pid = fork(); 
     int pid = fork(); 
      int pid = fork(); 
       int pid = fork();    //declare the child process using fork() function

    //2 process will be created by the fork() function
    //the first process is the parent process and the second process is the child process

    if(pid == 0)    //if the pid is equal to 0, then it is the child process
    {
        printf("Child process\n");
    }
    else{ //+ve represent parent process
        printf("Parent process\n");
    }


  
    


   return 0;
}