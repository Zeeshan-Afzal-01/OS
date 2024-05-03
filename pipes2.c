#include <unistd.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
   int fd[2];
   int buffer[100];

pipe(fd);

   __pid_t p=fork();
   if(p<0)
   {
    perror("Fork Failed");
    return -1;
   }

   if(p>0)
   {
    int x=10;
    int y=20;
    printf("The Parent Send Value to Child\n");
    close(fd[0]);
    write(fd[1],&x,sizeof(x));
    write(fd[1],&y,sizeof(y));

   }
   else
   {
    printf("Child Reading the Data...\n");
     close(fd[1]);
    read(fd[0],buffer,sizeof(buffer));
    int x=buffer[0];
    int y=buffer[1];

    printf("The final output is: %d\n",x*y);
    
   }
    return 0;
}