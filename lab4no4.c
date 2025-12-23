#include <stdio.h>

int main(void) {
    int loopCount = 5;
    int i;

    printf("while-for loop : ");

    while (loopCount > 0) {
        for (i = loopCount; i == loopCount; i--) {
            printf("%3d", i);
        }
        loopCount--;
    }

    printf("\n");
    return 0;
}

