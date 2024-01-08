#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter elements of first array in sorted order: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter elements of second array in sorted order: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[size1 + size2];
    int i, j, k;

    
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
    }

    
    for (; i < size1; i++, k++) {
        result[k] = arr1[i];
    }

   
    for (; j < size2; j++, k++) {
        result[k] = arr2[j];
    }

    printf("Merged Sorted Array: ");
    for (int l = 0; l < size1 + size2; l++) {
        printf("%d ", result[l]);
    }
    printf("\n");

    return 0;
}
