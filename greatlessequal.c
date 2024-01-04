#include <stdio.h>

int main() {
    printf("**********INPUT**********\n");
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}

    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int countGreater = 0, countLess = 0, countEqual = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            countGreater++;
        } else if (arr[i] < k) {
            countLess++;
        } else {
            countEqual++;}}
    printf("**********OUTPUT**********\n");
    printf("Number of elements greater than k: %d\n", countGreater);
    printf("Number of elements less than k: %d\n", countLess);
    printf("Number of elements equal to k: %d\n", countEqual);

    return 0;}
