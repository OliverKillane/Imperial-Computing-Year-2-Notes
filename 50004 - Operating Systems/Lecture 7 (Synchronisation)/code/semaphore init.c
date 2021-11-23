typedef struct {
    int counter;
    queue waiters;
} Sema;

void init(Sema *s, int i) 
{
    s->counter = i;
    queue_init(s->waiters);
}
