#ifndef PROCESS_H
#define PROCESS_H

typedef struct {
    char *executable;
    int argc; 
    char **argv;   /* NULL-terminated; argv[0] is the executable */
    int pid;
    int restart_count; 
} Process;

int init_process(
    Process *process,
    int argc,
    char *argv[]
);

void print_process(const Process *process);

#endif