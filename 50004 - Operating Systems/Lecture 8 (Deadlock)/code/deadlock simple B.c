void process_B(void)
{
    sema_down(&dvd_writer);
    sema_down(&scanner);
    scand_and_record();
    sema_up(&scanner);
    sema_up(&dvd_writer);
}