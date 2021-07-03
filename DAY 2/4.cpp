//Find the total no. of good pairs in given array such that arr[i]==arr[j] and i<j.

#include <bits/stdc++.h>
using namespace std;
int goodPair(int arr[],int n){
    int gp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                gp++;
            }
        }
    }
    return gp;
}
int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Total no. of Good Pair is "<<goodPair(arr,n);
    return 0;
}