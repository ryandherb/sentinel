# Sentinel - Linux Process Supervisor
Sentinel is a Linux process supervisor built entirely in C. Sentinel is able to monitor processes, reset processes on failure, monitor their health live and provide operational data on said processes. This is a project mainly built to help build skills in C, Linux processes, network communication and DevOps. 

## Architecture
sentinel/
    include/
        process.h   Define the process struct and declare functions
    src/
        main.c      Parse Cli Arguments and control program flow
        process.c   Implement process-related functions
    tests/          Test suite for Sentinel
    Makefile        Automate compilation
    README.md
    .gitignore