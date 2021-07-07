//Find who all kids may have highest number of toffees after extra toffees are given to them
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter total no. of kids: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int e;
    cout << "Enter the no of extra toffees: ";
    cin >> e;
    int max = *max_element(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + e >= max)
        {
            cout << "True"
                 << " ";
        }
        else
        {
            cout << "False"
                 << " ";
        }
    }
}
