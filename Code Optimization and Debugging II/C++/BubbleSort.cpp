#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    sort(arr, size);

    for (int num: arr) {
        cout << num;
    }
}

/*

Input: 10 9 8 7 6 5 4 3 2 1
Output: 1 2 3 4 5 6 7 8 9 10

*/