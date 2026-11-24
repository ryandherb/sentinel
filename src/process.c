#include "process.h"
#include <stdio.h>

int init_process(Process *process, int argc, char *argv[])
{
    if (process == NULL || argv == NULL || argc < 1 || argv[0] == NULL)
    {
        return 1;
    }

    process->executable = argv[0];
    process->argc = argc;
    process->argv = argv;

    process->pid = -1;
    process->restart_count = 0;

    return 0;
}

void print_process(const Process *process)
{
    if (process == NULL)
    {
        printf("Process is a null process.\n");
        return;
    }

    int argc = process->argc;

    printf("%-14s= \"%s\"\n", "executable", process->executable);
    printf("%-14s= %d\n", "argc", argc);

    for (int i = 0; i < argc; i++)
    {
        char label[24];
        snprintf(label, sizeof label, "argv[%d]", i);
        printf("%-14s= \"%s\"\n", label, process->argv[i]);
    }

    printf("%-14s= %d\n", "pid", process->pid);
    printf("%-14s= %d\n\n", "restart_count", process->restart_count);
}