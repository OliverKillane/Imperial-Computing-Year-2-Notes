void process_B(void)
{
    ...
    sema_down(&s);
    /* Critical region */
}