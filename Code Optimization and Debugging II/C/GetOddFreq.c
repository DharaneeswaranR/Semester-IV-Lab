#include <stdio.h>

int getOddFreq(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        int count = 0;

        for (int j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }

    return -1;
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", getOddFreq(arr, n));

    return 0;
}

/*

Output:

1 4 7 2 4 7 1 2 7
7

*/
