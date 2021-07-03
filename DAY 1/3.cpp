#include <bits/stdc++.h>
using namespace std;
//Function to reshuffle the array
void reshuffle(int arr[], int n)
{
    int mid = 0;
    for (int i = 0; i < n - 1; i = i + 2)
    {
        mid = (i + n + 1) / 2;
        int t = arr[mid];
        for (int j = mid; j > i + 1; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[i + 1] = t;
    }
    //Print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n % 2 != 0)
    {
        cout << "Enter the valid range.";
    }
    else
    {
        int arr[n];
        //Input array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        reshuffle(arr, n);
        return 0;
    }
}