void eat_and_think(int i)
{
    for (;;) {
        sema_down(&chopstick[i]);
        sema_down(&chopstick[(i + 1) % PHILOSOPHERS]);
        /* Eat using chopsticks. */
        sema_up(&chopstick[i]);
        sema_up(&chopstick[(i + 1) % PHILOSOPHERS]);
        /* Think about philosophy for a while. */
    }
}