#include <iostream>
using namespace std;

int main() {
    int n, num[1000], key, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the Elements: ";

    for(i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << "Enter the element you wanna search: ";
    cin >> key;

    int low = 0, high = n-1, mid, result = -1;

    while(low <= high) {
        mid = low + (high - low) / 2;
        if(num[mid] == key) {
            result = mid;
            break;
        } else if(num[mid] < key) {
            low = mid + 1;
        } else {
            mid = mid - 1;
        }
    }

    if(result != -1) {
        cout << "search element found: " << result << endl;
    } else {
        cout << "search element not found";
    }

    return 0;
}
