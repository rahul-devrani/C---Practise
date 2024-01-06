#include <stdio.h>

int calculateSeries(int n) {
    int sum = 0;
    int term = 0;
 for (int i = 1; i <= n; i++) {
        term += i; 
        sum += term;}
     return sum;}

int main() {
    printf("**********INPUT**********\n");
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
     int result = calculateSeries(n);
    printf("**********OUTPUT**********\n");
    printf("Result of the series is: %d\n", result);
     return 0;}
