void A() {
    lock(L);
    b = 2;
    a = 2;
    unlock(L);
}