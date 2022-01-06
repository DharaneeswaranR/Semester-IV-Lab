#include <stdio.h>

int sumOf(int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum;
}

int main() {
    int size = 5;
    int array[size];

    for (int i = 0; i < size; i++) 
        scanf("%d", &array[i]);

    printf("%d", sumOf(array, size));
}

/*

Output:
10 20 30 40 50
150

*/