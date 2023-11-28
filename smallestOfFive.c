#include <stdio.h>

int main() {
    int small, num;

    
    printf("Enter a number: ");
    scanf("%d", &small);

    for (int i = 1; i < 5; i++) {
        printf("Enter another number: ");
        scanf("%d", &num);

        if (num < small) {
            small = num;
        }
    }

    
    printf("The smallest number is: %d\n", small);

    return 0;
} 