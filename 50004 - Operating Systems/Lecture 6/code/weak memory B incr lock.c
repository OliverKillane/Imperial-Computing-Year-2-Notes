void A() {
    lock(L);
    b++;
    unlock(L);
    a++;
}