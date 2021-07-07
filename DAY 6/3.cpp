//Check whether the matrix is special or not.Special if all possible diagonals form top left and bottom right are having same elements..

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0 && j > 0 && a[i - 1][j - 1] != a[i][j])
            {
                cout << "Not Special";
                return 0;
            }
        }
    }
    cout << "Special";
    return 0;
}
