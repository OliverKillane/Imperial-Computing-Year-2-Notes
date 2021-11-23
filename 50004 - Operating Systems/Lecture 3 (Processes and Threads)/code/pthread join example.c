#include <pthread.h>
#include <stdio.h>

void *thread_1_work(void *id) {
    printf("Thread 1 is working");

    /* code for task goes here */

    printf("Thread 1 is done!");
}

void *thread_2_work(void *id) {
    printf("Thread 2 is working");

    /* code for task goes here */

    printf("Thread 2 is done!");
}

int main (int argc, char** argv) {
    /* array containing threads */
    pthread_t thread_1, thread_2;

    printf("Both threads ordered to work!");

    pthread_create(&thread_1, NULL, thread_1_work, NULL);
    pthread_create(&thread_2, NULL, thread_1_work, NULL);

    /* Join both threads to current thread. */
    pthread_join(&thread_1, NULL);
    pthread_join(&thread_2, NULL);

    /* both have completed their work! */
    printf("Both threads done working!");
}