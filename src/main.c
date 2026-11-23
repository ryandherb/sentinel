#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 3){
        printf("Usage: sentinel run <executable> [args...]");
        return 0;
    }

    printf("Sentinel v0.1\n\n"); 

    char *command = argv[1]; 
    char *executable = argv[2];

    if(strcmp(command, "run") != 0){
        printf("Unrecognized command: %s\n", command); 
        return 1; 
    }

    printf("Command: %s\n", command);
    printf("Executable: %s\n", executable);

    printf("Arguments:\n");    
    for(int i = 3; i < argc; i++){
        printf("  [%d] %s\n", i, argv[i]); 
    }

    return 0; 
}