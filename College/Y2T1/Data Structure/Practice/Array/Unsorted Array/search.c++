// C++ program to search item to array
// unsorted array
#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << " enter key to search : ";
    cin >> key;
    int position = search(arr, n, key);
    if (position == -1)
    {
        cout << "not founded";
    }
    else
        cout << "founded at " << position + 1;
    return 0;
}