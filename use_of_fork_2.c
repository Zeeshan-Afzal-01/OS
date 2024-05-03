#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
\

int main()
{
   fork();
   fork();

//create the child process

//its mean that the fork() function will return 0 in the child process and a positive number in the parent process.


   printf("Hello World!\n");

   //display the message twice because of the two fork() functions
   //the first fork() function will create a child process and the second fork() function will create a child process of the child process
    //so the message will be displayed twice
    


   return 0;
}