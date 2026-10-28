#include <stdio.h>

int main(void) {
    int units = 125;

    // Unsafe integer multiplication/division without explicit long promotion
    long paise_wrong = 5000 + units * 225; 

    // Safe calculation using explicit casting to long
    long paise_correct = 5000L + (long)units * 225;

    printf("Wrong calculation paise: %ld\n", paise_wrong);
    printf("Correct calculation paise: %ld\n", paise_correct);
    printf("Final Currency: Rs %ld.%02ld\n", paise_correct / 100, paise_correct % 100);
    return 0;
}
