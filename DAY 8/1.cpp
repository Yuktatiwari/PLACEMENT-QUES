//Longest Common Prefix
#include <bits/stdc++.h>
using namespace std;
string commonPrefix2(string s1, string s2)
{
    string res;
    for (int i = 0, j = 0; i < s1.length(), j < s2.length(); i++, j++)
    {
        if (s1[i] != s2[j])
        {
            break;
        }
        res.push_back(s1[i]);
    }
    return res;
}
string commonPrefix(string s[], int n)
{
    string prefix = s[0];
    for (int i = 1; i < n; i++)
    {
        prefix = commonPrefix2(prefix, s[i]);
    }
    return prefix;
}
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string result = commonPrefix(s, n);
    cout << result << endl;
}