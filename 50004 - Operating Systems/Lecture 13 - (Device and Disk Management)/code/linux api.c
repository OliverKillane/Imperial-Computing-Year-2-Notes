/* Create a file with set permissions. */
fd = create(filename, permission);

/* Open a file/device with mode:
 * 0 - read
 * 1 - write
 * 2 - read/write
 */
fd = open(filename, mode);

/* close a file/device */
close(fd);

/* Attempt to read nbytes from a file/device with descriptor fd to buffer. */
nbytesread = read(fd, buffer, numbytes);

/* Attempt to write nbytes to a file/device with descriptor fd from buffer. */
nbyteswritten = write(fd, buffer, nbytes);

/* Create a pipe */
int fd[2];    /* fd[0] for reading, fd[1] for writing */
pipe(fd);

/* Duplicate the file descriptor. (Uses lowest available) */
newfd = dup(oldfd);

/* Duplicate, using newfd as the new file descriptor. */
newfd = dup2(oldfd, newfd);

/* Issue control command to a device, terminos is an array of control characters */
ioctl(fd, operation, &terminos);

/* Creates a new special file from a character or block device. */
fd = mknod(filename, permission, dev);
