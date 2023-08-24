#include <stdio.h>

void displayArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}

void deleteElement(int arr[], int* n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index for deletion.\n");
        return;
    }

    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

void insertElement(int arr[], int* n, int element, int index) {
    if (index < 0 || index > *n) {
        printf("Invalid index for insertion.\n");
        return;
    }

    for (int i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    (*n)++;
}

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the original array
    displayArray(arr, n);

    // Sort the array in ascending order
    bubbleSort(arr, n);
    printf("Array after sorting: ");
    displayArray(arr, n);

    // Search for a given key in the array
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int searchIndex = search(arr, n, key);
    if (searchIndex != -1) {
        printf("Key found at index: %d\n", searchIndex);
    } else {
        printf("Key not found in the array.\n");
    }

    // Delete a given element from the array
    int deleteIndex;
    printf("Enter the index of the element to delete: ");
    scanf("%d", &deleteIndex);
    deleteElement(arr, &n, deleteIndex);
    printf("Array after deletion: ");
    displayArray(arr, n);

    // Insert an element into the array
    int newElement, insertIndex;
    printf("Enter the element to insert: ");
    scanf("%d", &newElement);
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &insertIndex);
    insertElement(arr, &n, newElement, insertIndex);
    printf("Array after insertion: ");
    displayArray(arr, n);

    // Reverse the array
    reverseArray(arr, n);
    printf("Array after reversing: ");
    displayArray(arr, n);

    return 0;
}
