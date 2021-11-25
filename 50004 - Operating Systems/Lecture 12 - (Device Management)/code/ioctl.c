#include <sys/ioctl.h>

int ioctl(int fd, unsigned long request, ...);

/* for example to eject a CD-ROM */
ioctl(cddrom, CDROMEJECT, 0);