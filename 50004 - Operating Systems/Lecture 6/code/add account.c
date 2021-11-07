void AddAccount(int acc_no, int balance)
{
    lock(L_Acc);
    CreateAccount(acc_no);
    lock(L[acc_no]);
    Acc[acc_no] = balance;
    unlock(L[acc_no]);
    unlock(L_Acc);
}
