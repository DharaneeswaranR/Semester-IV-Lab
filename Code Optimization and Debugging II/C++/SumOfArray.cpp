// Using class and object

#include <iostream>
using namespace std;

class SumOfArray {
    private:
        int size = 5;
        int array[5];
        int sum = 0;

    public:
        void sumOf() {
            for (int i = 0; i < size; i++)
                sum += array[i];
        }

        void input() {
            for (int i = 0; i < size; i++)
                cin >> array[i];
        }

        void displaySum() {
            cout << sum;
        }
};

int main() {
    SumOfArray obj;

    obj.input();
    obj.sumOf();
    obj.displaySum();
}

/*

Output:
10 20 30 40 50
150

*/