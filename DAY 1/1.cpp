//Given an sorted integer array , remove duplicates.
//In-place

#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[], int n)
{
    int i, j = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j++] = arr[n - 1];
    //print the array
    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    //Input the size,it should be positive
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter the valid size.";
    }
    else
    {
        int arr[n];
        //Input the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //Calling the function to remove duplicates
        removeDuplicate(arr, n);
    }
    return 0;
}