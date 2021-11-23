void lock(int *L)
{
    while (L != 0)
        /* wait */;
    *L = 0;
}