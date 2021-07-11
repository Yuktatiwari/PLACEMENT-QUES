//Roman no to integer
#include <bits/stdc++.h>
using namespace std;
int integer(char s1)
{
    switch (s1)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((integer(s[i])) < (integer(s[i + 1])))
        {
            sum += (integer(s[i + 1]) - integer(s[i]));
            i++;
        }
        else
        {
            sum += integer(s[i]);
        }
    }
    cout << sum << endl;
}