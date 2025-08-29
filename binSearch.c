#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)   
            return mid;

        if (arr[mid] > key)    
            return binarySearch(arr, left, mid - 1, key);

        
        return binarySearch(arr, mid + 1, right, key);
    }
    return -1;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}
