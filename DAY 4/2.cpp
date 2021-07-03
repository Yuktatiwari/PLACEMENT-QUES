#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum=0;
    for (int i = 0; i < n-1; i=i+2)
    {
        sum+=arr[i];
    }
    cout << sum;
}