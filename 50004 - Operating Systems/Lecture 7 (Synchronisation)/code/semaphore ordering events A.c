void process_A(void)
{
    ...
    /* Critical region */
    sema_up(&s);
}