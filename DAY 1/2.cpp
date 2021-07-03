#include <bits/stdc++.h>
using namespace std;
//Function to remove occurrences of the element which is equal to the given key
int removeOccurrences(int arr[], int n, int key)
{
    int i, j = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != key)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    if (arr[n - 1] != key)
        arr[j++] = arr[n - 1];
    return j;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter the valid range.";
    }
    else
    {
        int arr[n];
        //Input the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cout << "Enter key: ";
        cin >> key;
        int h = removeOccurrences(arr, n, key);
        //print the array
        for (int i = 0; i < h; i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
}