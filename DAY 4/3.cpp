#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    vector<int> v;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
    }
    sort(arr, arr + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != v[i])
        {
            c++;
        }
    }
    cout << c;
}