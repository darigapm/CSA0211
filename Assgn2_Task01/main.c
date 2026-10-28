#include <stdio.h>
/* --- Content of billing.h --- */
#ifndef BILLING_H
#define BILLING_H
#define FIXED_CHARGE 5000L
#define RATE_SLAB2 225
#define RATE_SLAB3 450
long compute_bill(int units);
#endif
/* --------------------------- */
long compute_bill(int units) {
    long paise = FIXED_CHARGE;
    #ifdef DEBUG
    printf("[DEBUG] Initial base charge in paise: %ld\n", paise);
    #endif
    if (units > 200) {
        paise += (long)(units - 200) * RATE_SLAB3 + 100 * RATE_SLAB2;
    } else if (units > 100) {
        paise += (long)(units - 100) * RATE_SLAB2;    }
    #ifdef DEBUG
    printf("[DEBUG] Computed final paise: %ld\n", paise);
    #endif
    return paise;}
int main(void) {
    long bill = compute_bill(150);
    printf("Total Bill: Rs %ld.%02ld\n", bill / 100, bill % 100);
    return 0;
}
