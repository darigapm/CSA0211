#include <stdio.h>

#define RUPEES_TO_PAISE(r) ((long)((r) * 100))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

int main(void) {
    printf("Rs 150.50 in paise: %ld\n", RUPEES_TO_PAISE(150.5));
    printf("MAX(10, 25) = %d\n", MAX(10, 25));
    printf("SQUARE(5 + 1) = %d\n", SQUARE(5 + 1));
    return 0;
}
