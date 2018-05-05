#include <stdio.h>

#define ROWMAX 16
#define COLMAX 8
#define SEP    " "

int main () {
    int i, j;
    printf ("%2c%s", ' ', SEP);
    for (i = 0; i < ROWMAX; i++) {
        printf ("%2d%s", i, SEP);
    }
    printf ("\n");
    for (i = 2; i < COLMAX; i++){
        printf ("%2d%s", i, SEP);
        for (j = 0; j < ROWMAX; j++) {
            printf ("%2c%s", (char) i * ROWMAX + j, SEP);
        }
        printf ("\n");
    }
    return 0;
}
