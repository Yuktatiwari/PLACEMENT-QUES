//If arr={2,1,0} and str={a,b,c}
//output={c,b,a}

#include <bits/stdc++.h>
using namespace std;
void shuffle(int arr1[], char arr2[], int n)
{
    vector<char> arr;
    int k = 0;
    while (k < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == k)
            {
                arr.push_back(arr2[i]);
            }
        }
        k++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr1[n];
    char arr2[n];
    cout << "Enter the elements of integer array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of string array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    shuffle(arr1, arr2, n);
    return 0;
}
