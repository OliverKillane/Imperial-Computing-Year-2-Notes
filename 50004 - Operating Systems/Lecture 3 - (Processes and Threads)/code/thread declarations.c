int pthread_create (pthread_t *thread , const pthread_attr_t *attr ,void *(*start_routine )(void*), void *arg)
void pthread_exit (void *value_ptr)
int pthread_yield (void)
int pthread_join (pthread_t thread, void **value_ptr)