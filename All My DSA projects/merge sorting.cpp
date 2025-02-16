#include <iostream>

using namespace std;

    // Merge two sorted sublists into a single sorted list
    void merge(int arr[], int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        // Create temporary arrays to hold the elements of the two sublists
        int leftArray[n1];
        int rightArray[n2];

        // Copy data to temporary arrays
        for (int i = 0; i < n1; ++i)
            leftArray[i] = arr[low + i];
        for (int j = 0; j < n2; ++j)
            rightArray[j] = arr[mid + 1 + j];

        // Merge the two arrays back into the original array
        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                arr[k] = leftArray[i];
                ++i;
            } else {
                arr[k] = rightArray[j];
                ++j;
            }
            ++k;
        }

        // Copy any remaining elements from leftArray
        while (i < n1) {
            arr[k] = leftArray[i];
            ++i;
            ++k;
        }

        // Copy any remaining elements from rightArray
        while (j < n2) {
            arr[k] = rightArray[j];
            ++j;
            ++k;
        }
    }

    // Recursive merge sort function
    void mergeSort(int arr[], int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            merge(arr, low, mid, high);
        }
    }


int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout <<endl;

    return 0;
}
