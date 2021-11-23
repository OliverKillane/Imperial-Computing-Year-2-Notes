void process_A(void)
{
    sema_down(&scanner);
    sema_down(&dvd_writer);
    scand_and_record();
    sema_up(&dvd_writer);
    sema_up(&scanner);
}