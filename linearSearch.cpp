#include <iostream>
using namespace std;

int main() {
    int n, num[1000], key, i, j;

    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the Elements: ";

    for(i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << "Enter the element you wanna search: ";
    cin >> key;

    bool found = false;
    int result = -1;

    for(j=0; j < n; j++) {
        if(num[j] == key) {
            found = true;
            result = j;
            break;
        }
    }

    if(found) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found";
    }

    return 0;
}
