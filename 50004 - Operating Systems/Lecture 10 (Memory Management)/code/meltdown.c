s = a + b
t = s + c
u = t + d
v = u + e
if (v == 0) { /* Context speculativeley executed. */
    w = kernel_mem[addr] 
    x = w & 0x1;
    y = x * 4096;
    z = user_mem[y]; 
}