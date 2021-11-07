void lock(int *L)
{
    while(TSL(L) != 0)
        /* wait */ ;
}