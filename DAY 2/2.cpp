#include <bits/stdc++.h>
using namespace std;
void findIntersection(int arr1[], int arr2[], int m, int n)
{
    cout << "Intersection of two arrays is: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main()
{
    int m, n;
    cout << "Enter the size of array 1 and array 2: ";
    cin >> m >> n;
    int arr1[m], arr2[n];
    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    findIntersection(arr1, arr2, m, n);
    return 0;
}
