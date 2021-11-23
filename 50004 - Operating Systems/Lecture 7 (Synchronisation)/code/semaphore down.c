void down(Sema *s)
{
    if (s->counter > 0) {
        s->counter--;
    } else {
        Process *cur = current_process()
        queue_add(cur)
        suspend_process(cur)
    }
    
}