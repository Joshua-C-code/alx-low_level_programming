#include "main.h"

void print_times_table(int n) {
    // Check for valid input (0 to 15)
    if (n < 0 || n > 15) {
        return;
    }
    int i, j, result;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            result = i * j;

            // Print result
            if (j == 0) {
                print_number(result);
            } else {
                putchar(',');
                putchar(' ');
                print_number(result);
            }
        }
        putchar('\n');
    }
}
void print_number(int num) {
    if (num >= 100) {
        putchar(num / 100 + '0');
        num %= 100;
    }
    if (num >= 10) {
        putchar(num / 10 + '0');
        num %= 10;
    }
    putchar(num + '0');
}

