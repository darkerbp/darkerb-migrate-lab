#include <stdio.h>
#include <stdint.h>

static float log2_fast(float val) {
    union { float val; int32_t x; } u = { val };
    register float log_2 = (float)(((u.x >> 23) & 255) - 128);              
    u.x   &= ~(255 << 23);
    u.x   += 127 << 23;
    log_2 += ((-0.34484843f) * u.val + 2.02466578f) * u.val  - 0.67487759f; 
    return (log_2);
}

int main()
{
	float i;
	i = log2_fast(16);
	printf("%f\n", i);
	return i;
}
