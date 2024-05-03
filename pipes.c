#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
int fd[2];
char buffer[100];
pipe(fd);
 
__pid_t p=fork();

if(p>0)
{
    printf("Sending Data to Child\n");
    write(fd[1], "Hello\n",6);
}
else if(p==0)
{
    printf("The Child is Reciveing Data\n");
    read(fd[0],buffer,100);
    printf("The Message is: %s\n",buffer);
}
else{
    printf("Fork Failed\n");
}

return 0;
}