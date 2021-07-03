#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int f,k=0;
    cout << "Enter the first element: ";
    cin >> f;
    vector<int> v;
    v.push_back(f);
    for (int i = 0; i < n; i++)
    {
        k = (arr[i]^v[i]);
        v.push_back(k);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}