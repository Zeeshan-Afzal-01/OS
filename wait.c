#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h> //include the wait.h library to use the wait() function
\

int main()
{
    int pid = fork();    //declare the child process using fork() function

    //2 process will be created by the fork() function
    //the first process is the parent process and the second process is the child process

    if(pid == 0)    //if the pid is equal to 0, then it is the child process
    {
        printf("Child process\n");

    }
    else{ //+ve represent parent process
    wait(NULL); //wait for the child process to finish
        printf("Parent process\n");

    }

// normally the output is first parent process and then child process
// because the parent process is executed first and then the child process is executed
  
    


   return 0;
}