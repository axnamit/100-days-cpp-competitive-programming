#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int k) {
    k = k % size;   // handle k > size

    // Step 1: reverse whole array
    reverseArray(arr, 0, size - 1);

    // Step 2: reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 3: reverse remaining elements
    reverseArray(arr, k, size - 1);
}

int main() {
    int arr[] = {5,5,7,3,2,8,96,43};
    int size = 8;
    int k = 10;

    rotateArray(arr, size, k);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
