Sema s;

int main(int arc, char **argv)
{
    sema_init(&s, 1);

    /* Start processes. */
    ... 
}


void some_function(void) 
{
    sema_down(&s);

    /* Critical region. */

    sema_up(&s);
}