#include <stdio.h>

int main() {
    int times, i;
    scanf("%d", &times);
    int score[times]; 

    for (i = 0; i < times; i++) {
        scanf("%d", &score[i]); 
    }
    for (i = 0; i < times; i++) {  
        if (score[i] >= 68) {
            if (score[i] >= 85) {
                printf("%d(A)\n", score[i]);
            } else if (score[i] >= 75) {
                printf("%d(B)\n", score[i]);
            } else {
                printf("%d(C)\n", score[i]);
            }
        } else {
            if (score[i] >= 55) {
                printf("%d(D)\n", score[i]);
            } else {
                printf("%d(F)\n", score[i]);
            }
        }
    }

    return 0;
}
