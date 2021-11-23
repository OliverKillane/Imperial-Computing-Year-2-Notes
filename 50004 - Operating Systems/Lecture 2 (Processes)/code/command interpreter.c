#include <stdlib.h>
#include <unistd.h>

int main (int argc, char** argv) {
    
    char* command;
    char** parameters;

    for (;;) {
        get_command(&command, &parameters);

        if (fork()) {
            waitpid(-1, &status, 0);
        } else {
            execve(command, parameters, NULL);
        }
    }

}