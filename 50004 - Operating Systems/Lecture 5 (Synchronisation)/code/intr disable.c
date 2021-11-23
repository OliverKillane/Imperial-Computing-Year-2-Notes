void Extract(int acc_no , int sum)
{
    CLI();
    int B = Acc[acc_no];
    Acc[acc_no] = B - sum;
    STI();
}