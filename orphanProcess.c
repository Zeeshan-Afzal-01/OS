#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//orphan process is a process whose parent process has finished or terminated, while the child process is still running.
//The orphan process is then adopted by the init process, which is the parent of all processes in the system.
//The init process will wait for the orphan process to finish and then release the resources of the orphan process.
//The orphan process will be terminated by the init process after it finishes its execution.



\

int main()
{
    int pid = fork();    //declare the child process using fork() function

    //2 process will be created by the fork() function
    //the first process is the parent process and the second process is the child process

    if(pid == 0)   
    {
        sleep(10); //child process will sleep for 10 seconds
        printf("This is Child process and PID is: %ld and PPID is : %ld \n ",(long)getpid(),(long)getppid());  
        
    }
    else{
      
        sleep(2); //parent process will sleep for 2 seconds
        printf("This is Parent process and PID is: %ld and PPID is : %d \n ",(long)getpid(),pid);
    }


    


   return 0;
}