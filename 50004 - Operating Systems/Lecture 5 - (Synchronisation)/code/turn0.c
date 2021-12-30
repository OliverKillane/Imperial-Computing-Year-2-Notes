while (true) {
    while (turn != 0)
        /* loop */ ;
    critical_section();
    turn = 1;
    noncritical_section0();
}