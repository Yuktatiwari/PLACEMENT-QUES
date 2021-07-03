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
void findUnion(int arr1[], int arr2[], int m, int n)
{
    vector<int> v1;
    v1.push_back(arr1[0]);
    for (int i = 1; i < m; i++)
    {
        for (int k = 0; k < v1.size(); k++)
        {
            if (arr1[i] == v1[k])
            {
                break;
            }
        }
        v1.push_back(arr1[i]);
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < v1.size(); y++)
        {
            if (arr2[x] == v1[y])
            {
                break;
            }
        }
        v1.push_back(arr2[x]);
    }
    cout << "Union of two arrays: ";
    for (int z = 0; z < v1.size(); z++)
    {
        cout << v1[z] << " ";
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
    findUnion(arr1, arr2, m, n);
    return 0;
}