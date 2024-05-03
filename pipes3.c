#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
   int fd[2];
   int buffer[100];
   char nums[]={1,2,3,4,5};
   int isfound=0;

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
    write(fd[1],nums,sizeof(nums));

   }
   else
   {
    printf("Child Reading the Data...\n");
     close(fd[1]);
    read(fd[0],buffer,sizeof(buffer));
    
    
    int uservalue;
    printf("Enter the Value you want to find: ");
    scanf("%d",&uservalue);

    for(int i=0;i<sizeof(nums);i++)
    {
        if(uservalue==nums[i])
        {
            isfound=1;
            break;
        }
    }
    printf("\n");
    
   }

   if(isfound==1){
    printf("The Value is Found!\n");
   }
   else{
    printf("The Value is Not Found!\n");
   }
    return 0;
}