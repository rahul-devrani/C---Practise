#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;} 
           k++;}
    while (i < n1) {
        result[k] = arr1[i];
        i++;
        k++;}
    while (j < n2) {
        result[k] = arr2[j];
        j++;
        k++;}}

int main() {
    printf("**********INPUT**********\n");
    int n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter the elements of the first array in sorted order:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);}

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter the elements of the second array in sorted order:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);}

    int result[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, result);
    printf("**********OUTPUT**********\n");
    printf("Merged array in sorted order:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);}
    printf("\n");}
