#include <iostream>
#include <string>
using namespace std;

template <class T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Count Value
template <class T>
int countValue(T arr[], int n, T value) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    return count;
}

template <class T>
int search(T arr[], int n, T value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {

    int numbers[] = {4, 9, 2, 9, 7};

    printArray(numbers, 5);
    cout << "Max: " << findMax(numbers, 5);
    cout << ", count of 9: " << countValue(numbers, 5, 9) << endl;

    double prices[] = {31.5, 28, 35.2};

    printArray(prices, 3);
    cout << "Max: " << findMax(prices, 3) << endl;

    string names[] = {"Ali", "Sara", "Zain", "Sara"};

    printArray(names, 4);
    cout << "Max: " << findMax(names, 4);
    cout << ", Sara found at index "
         << search(names, 4, string("Sara")) << endl;

    char letters[] = {'B', 'A', 'C', 'A', 'A'};

    printArray(letters, 5);
    cout << "Count of A: " << countValue(letters, 5, 'A');
    cout << ", D found at index "
         << search(letters, 5, 'D') << endl;

    return 0;
}