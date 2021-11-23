/* ensure user_meme[0...4096] is not in cache*/

s = a + b
t = s + c
u = t + d
v = u + e

/* speculative execution*/
w_ = kernel_mem[addr]  /* no page fault for speculative */
x_ = w & 0x1;
y_ = x * 4096;
z_ = user_mem[y];

/* If statement true, speculative results are set */
if (v == 0) {
    w = w_;
    x = x_;
    y = y_;
    z = z_;
}

/* check how long it takes to read user_mem[0] and user_mem[4096] to determine 
 * if it is in cache.
 * 
 * If mem[0] has been cached, then kernel_mem[addr]'s LSB is 0
 * If mem[4096] has been cached, then kernel_mem[addr]'s LSB is 1
 */