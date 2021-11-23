void Extract(int acc_no , int sum)
{
    lock(L[acc_no]);
    int B = Acc[acc_no];
    Acc[acc_no] = B - sum;
    unlock(L[acc_no]);
}