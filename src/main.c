#include <stdio.h>
#include <string.h>
#include <process.h>

int main(int argc, char *argv[]) {
    if(argc < 3){
        printf("Usage: sentinel run <executable> [args...]\n");
        return 0;
    }

    printf("Sentinel v0.1\n\n"); 

    Process process = {0};
    int init = init_process(&process, argc - 2, &argv[2]);
    
    if(init != 0){
        printf("Error creating process.\n");
        return 1;
    }

    print_process(&process); 

    return 0; 
}