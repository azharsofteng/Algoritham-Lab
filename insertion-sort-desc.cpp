#include <iostream>
using namespace std;

int main()
{
    int n, key, i, j, arr[100];

    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the Elements: ";

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array in descending order: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
