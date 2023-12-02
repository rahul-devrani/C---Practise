#include <stdio.h>

void insertElement(int arr[], int size, int position, int element) {
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[position] = element;
}

int main() {
    int arr[100], size, position, element;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert the element: ");
    scanf("%d", &position);
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    insertElement(arr, size, position, element);
    size++;
    
   
    printf("The array after inserting the element is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}