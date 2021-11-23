void process_B(void)
{
    enter_region(A);
    enter_region(B);
    // Do stuff
    leave_region(B);
    leave_region(A);
}