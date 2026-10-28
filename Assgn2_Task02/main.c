#include <stdio.h>

int main(void) {
    int units;
    printf("Enter units consumed: ");

    // Check return value of scanf to catch invalid letters/characters
    if (scanf("%d", &units) != 1) {
        printf("Error: Invalid non-numeric input detected!\n");
        return 1;
    }

    long paise = 5000L + (units > 100 ? (units - 100) * 225 : 0);
    printf("Bill Amount: Rs %ld.%02ld\n", paise / 100, paise % 100);
    return 0;
}
