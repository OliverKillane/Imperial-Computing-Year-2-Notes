void A() {
    a++;
    lock(L);
    b++;
    unlock(L);
}