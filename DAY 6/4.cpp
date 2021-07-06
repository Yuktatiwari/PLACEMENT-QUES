//Transpose of a matrix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    // {
    //     {1,1,0},
    //     {1,0,1},
    //     {0,0,0}
    // };
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> k;
            a[i].push_back(k);
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            a[i][j] = 1 - a[i][j];
        }
    }
    cout<<"RESULT:"<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}