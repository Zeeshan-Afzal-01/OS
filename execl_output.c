#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    printf("The Next File is Opening...  execl_output\n");
    printf("The Output of Another File and the PID is:  %ld\n",(long)getpid());
    
    return 0;
}