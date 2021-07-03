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
    int bits = 0;
    for (int i = 0; i < n; i++)
    {
        bits |= arr[i];
    }
    int ans = bits * pow(2, n - 1);
    cout << ans;
}