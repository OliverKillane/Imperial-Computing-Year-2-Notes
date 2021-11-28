#include <aio.h>

int main(int argc, char **argv) {
    int fd, ret; 
    struct aiocb my_aiocb;

    fd = open("myfile", O_RDONLY );

    /* Allocate buffer for aio request */
    my_aiocb.aio_buf = malloc(BUFSIZE + 1);

    /* Create aio control structure */
    my_aiocb.aio_fildes = fd; 
    my_aiocb.aio_nbytes = BUFSIZE;
    my_aiocb.aio_offset = 0;

    /* Start read request */
    ret = aio_read(&my_aiocb);

    /* Wait until request is complete (we could also register a signal, or 
     * thread callback instead & do useful work here) 
     */
    while (aio_error(&my_aiocb) == EINPROGRESS);

        /* Check result from read */
        if ((ret = aio_return(&my_iocb)) > 0)
            printf("Successfully read %s", my_aiocb.aio_buf)
        else
            printf("Failed to read :-(")
}

