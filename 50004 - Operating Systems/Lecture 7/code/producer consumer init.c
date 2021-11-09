/* Global semaphores and buffer size. */
Sema item, space, mutex;
int N;

int main(int argc, char **argv)
{
    sema_init(item, 0);  /* Number of items available, blocks consumer if zero. */
    sema_init(space, N); /* Remaining space available, block producer if zero. */
    sema_init(mutex, 1); /* Mutual exclusion access to buffer. */

    /* Create processes. */
    ...
}