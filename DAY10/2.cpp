#include <bits/stdc++.h>
using namespace std;
string convertToTitle(int cn)
{
    string answer = "";
    while (cn > 0)
    {
        char c = 'A' + (cn - 1) % 26;
        answer = c + answer;
        cn = (cn - 1) / 26;
    }
    return answer;
}
int main()
{
    int str1;
    cin >> str1;
    cout << convertToTitle(str1);
}