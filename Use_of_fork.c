#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
\

int main()
{
   fork();

//create the child process

//its mean that the fork() function will return 0 in the child process and a positive number in the parent process.


   printf("Hello World!\n");


   return 0;
}