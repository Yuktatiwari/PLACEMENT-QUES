//Find the K weakest row in the matrix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    set<pair<int,int> >v;
    int c;
    for (int i = 0; i < m; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                c++;
            }
        }
        v.insert({c,i});
    }
    for(auto i:v){
        cout<<i.second<<" ";
        k--;
        if(k==0)
        break;
    }
}