#include <bits/stdc++.h>
using namespace std;
void find(int arr[], int n)
{
    vector<int> res;
    int freq;
    int value;
    for (int i = 1; i < n; i = i + 2)
    {
        freq = arr[i - 1];
        value = arr[i];
        while (freq--)
        {
            res.push_back(value);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    find(arr, n);
    return 0;
}