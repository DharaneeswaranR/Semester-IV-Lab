#include <stdio.h>

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
    scanf("%d", &size);

    int arr[size], num, pos;

    for (int i = 0; i < size; i++) {
        scanf("%d" ,&arr[i]);
    }

    scanf("%d", &num);

    pos = binarySearch(arr, num, size);

    if (pos == -1) {
        printf("%d is not found in the given array", num);
    } 

    else {
        printf("%d is found at the position %d", num, pos+1);
    }
}

/*

Input:
10
10 12 20 32 50 55 65 80 99 25
50

Result:
50 is found at the position 5

*/