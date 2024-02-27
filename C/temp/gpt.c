#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;
        printf("%d", sum);

        if (i < 5) {
            printf("+%d=", i + 1);
        } else {
            printf("\n");
        }
    }

    return 0;
}
//abc