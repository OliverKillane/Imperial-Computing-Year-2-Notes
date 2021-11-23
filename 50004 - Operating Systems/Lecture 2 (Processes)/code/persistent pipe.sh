# create the pipe
mkfifo /some/pipe

# write to the pipe
echo "This is some text" >/some/pipe

# get text from the pipe
cat /some/pipe