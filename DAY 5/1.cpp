//arr={-2,0,3,-5,2,-1}
//range={0-2,2-5,0-5}
//find the sum of elements according to the ranges given
//output={1,-1,3}
#include <bits/stdc++.h>
using namespace std;
int sumRange(int arr[], int x, int y)
{
    int sum = 0;
    for (int k = x; k <= y; k++)
    {
        sum += arr[k];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x, y;
    int sum;
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        cin >> x >> y;
        sum=sumRange(arr, x, y);
        v.push_back(sum);
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
