#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int total_sum = 0;
    
    for (int i = 1; i <= n; i++) {
        int series_sum = 0;
        
        for (int j = 1; j <= i; j++) {
            series_sum += j;
        }
        
        total_sum += series_sum;
    }
   
    printf("The sum of the series up to %d is: %d\n", n, total_sum);
    
    return 0;
}