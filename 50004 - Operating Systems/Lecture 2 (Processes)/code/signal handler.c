#include <signal.h>
#include <stdio.h>

void int_handler(int sig) {
    printf("SIGINT occured, but I'm ignoring it!");
}

int main(int argc, char** argv) {

    /* register handler */
    signal(SIGINT, int_handler);
    for(;;);
}