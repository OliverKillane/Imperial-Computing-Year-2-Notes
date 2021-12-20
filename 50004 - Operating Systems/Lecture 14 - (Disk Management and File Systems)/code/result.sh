nolinks# For a device:
# <permission attributes> <no. links> <owner> <group> <major> <minor> <creation date> <filename>

crw------- 1 root root   5,   1 Dec 20 14:59 console
# Character device, readable and writeable, but not executable by the owner

brw------- 1 root root   1,  15 Dec 20 14:59 ram15
# Block device, readable and writeable, but not executable by the owner

# For a file:
# <permission attributes> <no. links> <owner> <group> <size> <creation date> <filename>

-rwxrwxrwx 1 oliverkillane oliverkillane  21775 Dec 20 16:31 'Lecture 14.tex'
# File, readable, writable and can be executed by any user 
