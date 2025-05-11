#include <stdio.h>

int main() {
    int array[5] = {137, 81, 14, 10, 74};

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }

    printf("%d\n", sum);

    return 0;
}