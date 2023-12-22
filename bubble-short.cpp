#include <iostream>
using namespace std;

int main() {
    int arr[1000], n, i, j;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";

    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The Sorted array is: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
