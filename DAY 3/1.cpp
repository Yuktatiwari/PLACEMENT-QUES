//Find total no of smallest elements then arr[i]
#include<bits/stdc++.h>
using namespace std;
void findSmallElements(int arr[],int n){
    vector<int> v;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]>arr[j]){
                    c++;
                }
            }
        }
        v.push_back(c);
        c=0;
    }
    cout<<"Result is ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findSmallElements(arr,n);
}
