void Extract(int acc_no , int sum)
{
    lock(L);
    int B = Acc[acc_no];
    Acc[acc_no] = B - sum;
    unlock(L);
}