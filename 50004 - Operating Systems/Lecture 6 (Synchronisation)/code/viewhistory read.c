void ViewHistory(int acc_no)
{
    lock_RD(L[acc_no]);
    print_transactions(acc_no);
    unlock(L[acc_no]);
}
