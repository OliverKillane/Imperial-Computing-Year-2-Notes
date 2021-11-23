#define PHILOSOPHERS 5

Sema chopsticks[PHILOSOPHERS];

int main(int argc, char **argv)
{
    /* Initialise chopstick semaphores. */
    for (int i = 0; i < PHILOSOPHERS; i++) {
        sema_init(&chopsticks[i], 1);
    }

    /* Start philosophers. */
    ...
}