int main(int argc, char **argv) 
{
    /* assume struct big uses memory over several pages. */
    struct big big1;
    struct big big2;
    
    init_big_structure(&big1);

    /* first working set. Using pages associated with big1. */
    while(some_condition) {
        /* code using the big1. */
    }

    /* transition, e.g copying from big1 to big 2, using pages from both. */

    /* second working set. Using pages associated with big2.*/
    while(some_condition) {
        /* code using the big2. */
    }
}