void consumer(void)
{
    for (;;) {
        sema_down(item);
        sema_down(mutex);
        /* Fetch item. */
        sema_up(mutex);
        sema_up(space);
        /* Consume item. */
    }
}