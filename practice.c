#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int i;
    
    for (i = 0; i < 5; i++) {
        pid_t pid = fork();
        
        if (pid == 0) {
            // Child process
            printf("Hello\n");
            return 0; // Exit the child process
        } else if (pid < 0) {
            // Error occurred
            fprintf(stderr, "Fork failed\n");
            return 1;
        }
    }
    
    // Parent process
    // Wait for all child processes to finish
    for (i = 0; i < 5; i++) {
        wait(NULL);
    }
    
    return 0;
}
