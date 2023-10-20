#include <stdio.h>
void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int ans = 0;
    int cur = num;
    while (cur) {
        int digit = cur % 10;
        int prod = 1;
        for (int i = 0; i < 3; i++) {
            prod *= digit;
        }
        ans += prod;
        cur /= 10;
    }
    if (ans == num) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }
}