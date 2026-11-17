#include <stdio.h>

/* Safe macro definitions using full parenthesization */
#define RUPEES_TO_PAISE(r) ((r) * 100)
#define SQUARE(x)          ((x) * (x))
#define MAX(a, b)          ((a) > (b) ? (a) : (b))

/* Static inline function alternative to avoid macro side-effects */
static inline int safe_max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int val = 5;
    printf("SQUARE(5 + 1) = %d\n", SQUARE(val + 1)); // Correctly evaluates to 36

    int i = 2, j = 4;
    // Using static inline function instead of macro with side-effects
    printf("safe_max(i++, j) = %d\n", safe_max(i++, j));
    
    return 0;
}
