void up(Sema *s) 
{
    if (queue_empty(s->waiters))
        s->counter++;
    else
        resume_process(queue_pop(s->waiters))
}