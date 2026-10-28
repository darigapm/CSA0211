#include <stdio.h>
#include <limits.h>
typedef unsigned short meter_t;
meter_t consumption(meter_t previous, meter_t current) {
    // Unsigned 16-bit arithmetic naturally handles roll-over from 65535 to 0 without if-else
    return (current - previous);
}

int main(void) {
    printf("sizeof(meter_t) = %zu bytes, maximum reading = %u\n", sizeof(meter_t), (unsigned)USHRT_MAX);
    printf("Consumption: %u units\n", consumption(1200, 1530));
    printf("Consumption: %u units\n", consumption(65400, 120)); // rolled over
    return 0;
}
