void Extract(int acc_no, int sum)
{
    lock_WR(L[acc_no]);
    Acc[acc_no] -= sum;
    add_debit(acc_no, sum);
    unlock(L[acc_no]);
}