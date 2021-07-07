//Find the number which is minimum in its row ans maximum in its column.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            v[i].push_back(t);
        }
    }
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < v.size(); i++)
    {
        int m1 = INT_MAX;
        for (int j = 0; j < v[0].size(); j++)
        {
            m1 = min(m1, v[i][j]);
        }
        v1.push_back(m1);
    }
    for (int i = 0; i < v.size(); i++)
    {
        int m2 = INT_MIN;
        for (int j = 0; j < v[0].size(); j++)
        {
            m2 = max(m2, v[j][i]);
        }
        v2.push_back(m2);
    }
    int flag = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                cout << v2[j];
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "No such element";
    }
    return 0;
}
