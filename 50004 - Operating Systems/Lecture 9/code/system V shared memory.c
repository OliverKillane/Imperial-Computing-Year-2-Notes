#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/shm.h>

/* To use the System V IPC, you need a key from an associated file */
key_t ftok (const char *pathname, int proj_id);

/* Get a memory  sahred memory segment with key, or create a new one. 
 * There are several flags for creating private shared memory, and setting 
 * permissions (use shmflag).
 */
int shmget (key_t key, size_t size, int shmflg);

/* Attach shared memory segment to the address space of a process. */
void *shmat (int shmid, const void *shmaddr, int shmflg);

/* Detach a share memory segment from the process. */
int shmdt (const void *shmaddr);

/* Issue a command to control the shared memory segment. */
int shmctl (int shmid, int cmd, struct shmid_ds *buf);

struct shmid_ds { 
    struct ipc_perm shm_perm;    /* Ownership and permissions */
    size_t          shm_segsz;   /* Size of segment (bytes) */ 
    time_t          shm_atime;   /* Last attach time */
    time_t          shm_dtime;   /* Last detach time */
    time_t          shm_ctime;   /* Last change time */
    pid_t           shm_cpid;    /* PID of creator */ 
    pid_t           shm_lpid;    /* PID of last shmat(2)/shmdt(2) */
    shmatt_t        shm_nattch;  /* No. of current attaches */
    ...        
}; 

struct ipc_perm { 
    key_t          __key;    /* Key supplied to shmget(2) */
    uid_t          uid;      /* Effective UID of owner */
    gid_t          gid;      /* Effective GID of owner */
    uid_t          cuid;     /* Effective UID of creator */ 
    gid_t          cgid;     /* Effective GID of creator */ 
    unsigned short mode;     /* Permissions + SHM_DEST and
                                SHM_LOCKED flags */
    unsigned short __seq;    /* Sequence number */
};   