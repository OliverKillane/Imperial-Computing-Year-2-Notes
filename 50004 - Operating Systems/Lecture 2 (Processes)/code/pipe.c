#include<unistd.h>
#include <stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {
    
    /* pipe and buffer declaration */
    int fd[2];
    char buff;

    /* assert we have one argument string */
    assert(argc == 2);

    /* initialise pipe, if an error, return */
    if (pipe(fd) == -1) 
        exit(EXIT_FAILURE);
    
    /* fork into parent and child */
    if (fork() != 0) {

        /* Parent: Sender */

        /* Close reading end (sender does not use this) */
        close(fd[0]);

        /* write the argument string to the pipe*/
        write(fd[1], argv[1], strlen(argv[1]));

        /* finished writing, now close write end */
        close(fd[1]);

        /* wait for the child to die*/
        waitpid(-1, NULL, 0);

        /* celebratory message */
        printf("Child Dead & Pipe Closed!\n");
    } else {

        /* Child: Receiver */

        /* close writing end (receiver does not use this) */
        close(fd[1]);

        /* read from pipe one character at a time, printing each char */
        while (read(fd[0], &buff, 1) > 0)
            printf("%c", buff);

        printf("\n");

        /* finished reading, now close the reading end */
        close(fd[0]);

        /* child reaches end of execution, terminates */
    }
}