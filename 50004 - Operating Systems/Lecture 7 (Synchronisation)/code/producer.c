void producer(void)
{
    for (;;) {
        /* Produce item. */
        sema_down(space);
        sema_down(mutex);
        /* Desposit item. */
        sema_up(mutex);
        sema_up(item);
    }
}