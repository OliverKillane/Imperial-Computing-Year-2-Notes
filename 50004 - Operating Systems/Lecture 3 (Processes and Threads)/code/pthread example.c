#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_THREADS 10;

/* takes a void pointer, which contains the id*/
void *thread_func(void *id) {
    printf("This is thread: %d!\n", (int)id);
}

int main (int argc, char** argv) {
    /* array containing threads */
    pthread_t threads[NUM_THREADS];

    /* create each thread and start */
    for (int id = 0; id < NUM_THREADS; id++)
        pthread_create(&threads[id], NULL, thread_func, (void *)id);
    
    /* process continues until all threads have terminated */
    pthread_exit(NULL);
}