void process_B(void)
{
    enter_region(B);
    enter_region(A);
    // Do stuff
    leave_region(A);
    leave_region(B);
}