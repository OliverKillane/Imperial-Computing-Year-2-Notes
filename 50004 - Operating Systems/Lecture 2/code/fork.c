/* unistd provides access to the POSIX API */
#include <unistd.h>

/* fork is part of unistd */
int fork (void);

int main() {
    int child_pid = fork();

    if (child_pid != 0) {
        /* parent code here */
    } else {
        /* child code here */
    }
}