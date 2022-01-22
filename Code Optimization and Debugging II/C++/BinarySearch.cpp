#include <iostream>
using namespace std;

int binarySearch(int arr[], int num, int size) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] < num) {
            start = mid + 1;
        }

        else if (arr[mid] > num) {
            end = mid - 1;
        }

        else {
            return mid;
        }
    }

    return -1;
}

int main() {
    int size;
    cin >> size;

    int arr[size], num, pos;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cin >> num;

    pos = binarySearch(arr, num, size);

    if (pos == -1) {
        printf("%d is not found in the given array", num);
    } 

    else {
        printf("%d is found at the position %d", num, pos+1);
    }
}