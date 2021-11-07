while (true) {
    while (turn != 1)
        /* loop */ ;
    critical_section();
    turn = 0;
    noncritical_section0();
}