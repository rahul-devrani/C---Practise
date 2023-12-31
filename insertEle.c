#include <stdio.h>

void insertElement(int arr[], int size, int ele, int position) {
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = ele;
}

int main() {
    int n;
    printf("**********INPUT**********\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+ 1];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element, position;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position for insertion.\n");
    } else {
        insertElement(arr, n, element, position);
        n++; 
        printf("**********OUTPUT**********\n");
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
