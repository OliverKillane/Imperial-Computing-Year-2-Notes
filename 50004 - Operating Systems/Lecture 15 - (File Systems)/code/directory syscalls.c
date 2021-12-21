/* Create a new directory. */
#include <sys/stat.h>
int mkdir(const char *pathname, mode_t mode);

#include <fcntl.h> /* Definition of AT_* constants. */
#include <sys/stat.h>
int mkdirat(int dirfd, const char *pathname, mode_t mode);

/* Remove a directory (must be empty already). */
#include <unistd.h>
int rmdir(const char *pathname);

/* Create a new hard link to an existing file. */
#include <unistd.h>
int link(const char *oldpath, const char *newpath);

#include <fcntl.h> /* Definition of AT_* constants. */
#include <unistd.h>
int linkat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath, int flags);

/* Remove a filename from the file system, if this is the last link, remove the 
 * file.
 */
#include <unistd.h>
int unlink(const char *pathname);

#include <fcntl.h> /* Definition of AT_* constants. */
#include <unistd.h>
int unlinkat(int dirfd, const char *pathname, int flags);

/* Change working directory. */
#include <unistd.h>
int chdir(const char *path); /* Change using path. */
int fchdir(int fd);          /* Change based on file descriptor. */

/* Open a directory. */
#include <sys/types.h>
#include <dirent.h>

struct DIR {
    struct dirent ent;
    struct _WDIR *wdirp;
};

struct DIR *opendir(const char *name);
struct DIR *fdopendir(int fd);

/* Close a directory. */
#include <sys/types.h>
#include <dirent.h>

int closedir(struct DIR *dirp);

/* Read a directory. */
#include <dirent.h>

/* Directory entry structure.  */
struct dirent {
    ino_t          d_ino;       /* Inode number. */
    off_t          d_off;       /* Offset to the next dirent. */
    unsigned short d_reclen;    /* Length of this record. */
    unsigned char  d_type;      /* Type of file; not supported by all file system types. */
    char           d_name[256]; /* Null-terminated filename. */
};

struct dirent *readdir(struct DIR *dirp);

/* Reset the position of directory stream DIRP to the beginning of the directory. */
#include <sys/types.h>
#include <dirent.h>

void rewinddir(struct DIR *dirp);