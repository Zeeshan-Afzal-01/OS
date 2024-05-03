#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
   
   printf("We are in first execl file and PID is: %ld\n", (long)getpid());
   char *args[]={"./execl_output",NULL};

    execv(args[0],args);

    printf("The program is back to execl");

    return 0;
}
