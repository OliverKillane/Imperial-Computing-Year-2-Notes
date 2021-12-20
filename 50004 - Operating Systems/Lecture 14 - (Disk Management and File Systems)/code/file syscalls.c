/* UNISTD functions (header for POSIX api) */
#include <unistd.h>
/* Close a file */
int close(int fd);

/* Read COUNT bytes from file FD into buffer BUF. Return number of bytes read. */
ssize_t read(int fd, void *buf, size_t count);

/* Write to file FD, COUNT bytes from BUF. Return number of bytes written. */
ssize_t write(int fd, const void *buf, size_t count);

/* Seek to the given OFFSET in file FD, options in WHENCE. "lseek" stands for
 * long seek (offset is 64 bits for large files).
 */
off_t lseek(int fd, off_t offset, int whence);

/* Return file information for file at PATHNAME into buffer STATBUF. */
int stat(const char *restrict pathname, struct stat *restrict statbuf);

struct stat {
    dev_t     st_dev;         /* ID of device containing file */
    ino_t     st_ino;         /* Inode number */
    mode_t    st_mode;        /* File type and mode */
    nlink_t   st_nlink;       /* Number of hard links */
    uid_t     st_uid;         /* User ID of owner */
    gid_t     st_gid;         /* Group ID of owner */
    dev_t     st_rdev;        /* Device ID (if special file) */
    off_t     st_size;        /* Total size, in bytes */
    blksize_t st_blksize;     /* Block size for filesystem I/O */
    blkcnt_t  st_blocks;      /* Number of 512B blocks allocated */

    /* Since Linux 2.6, the kernel supports nanosecond
     *  precision for the following timestamp fields.
     *  For the details before Linux 2.6, see NOTES. 
     */

    struct timespec st_atim;  /* Time of last access */
    struct timespec st_mtim;  /* Time of last modification */
    struct timespec st_ctim;  /* Time of last status change */

    #define st_atime st_atim.tv_sec      /* Backward compatibility */
    #define st_mtime st_mtim.tv_sec
    #define st_ctime st_ctim.tv_sec
};


/* File Control functions */
#include <fcntl.h>

/* Note that interestingly, despite close being unistd, open is not. This is as
 * many of the flags required for open are declared in FCNTL, and the developers
 * wanted to avoid polluting UNISTD with these.
 */

/* Open a file at PATHNAME with FLAGS to get a file descriptor. */
int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);

/* File controls (e.g lock, set read status). */
int fcntl(int fd, int cmd, ... /* arg */ );