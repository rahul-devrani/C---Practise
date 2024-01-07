#include <stdio.h>
#include <math.h>


int isArmstrong(int number) {
    int originalNumber, remainder, result = 0;

    originalNumber = number;

   
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, 3); 
        originalNumber /= 10;
    }

   
    if (result == number)
        return 1;
    else
        return 0; 
}

int main() {
    int num;
    printf("**********INPUT**********\n");
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }
    printf("**********OUTPUT**********\n");
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
