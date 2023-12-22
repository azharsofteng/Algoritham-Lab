#include <iostream>
using namespace std;

int main() {

    int arr[1000], n, i, j, index, temp;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";

    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    cout << "The Sorted array is: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
