Sema scanner, dvd_writer;

int main(int argc, char **argv)
{
    sema_init(&scanner, 1);
    sema_init(&dvd_writer, 1);
}