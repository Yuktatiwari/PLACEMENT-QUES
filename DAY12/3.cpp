// bool isPowerOfTwo(int n)
// {
//     int count = 0;
//     if (n < 0)
//         return false;
//     while (n)
//     {
//         count++;
//         n ^= n & (-n);
//     }
//     return (count == 1);
// }
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(uint32_t n){
    if(n==0) return false;
    if((n&(n-1))==0)
    return true;
    else return false;
}
int main()
{
    uint32_t n;
    cin >> n;
    cout<<isPowerOfTwo(n);
}