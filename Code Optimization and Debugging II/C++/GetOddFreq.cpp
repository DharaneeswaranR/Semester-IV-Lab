#include <iostream>
#include <unordered_map>
using namespace std;

int getOddFreq(int arr[], int len) {
    unordered_map<int, int> freqMap;

    for (int i = 0; i < len; i++) {
        freqMap[arr[i]]++;
    }

    for (auto i: freqMap) {
        if (i.second % 2 != 0)
            return i.first;
    }

    return -1;
}

int main() {
    int arr[7]; // Requires array size as input

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    int len = sizeof(arr) / sizeof(arr[0]);

    cout << getOddFreq(arr, len);

    return 0;
}