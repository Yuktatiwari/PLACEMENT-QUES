//whether the parantheses are balanced or not

#include <bits/stdc++.h>
using namespace std;
string check(string s)
{
    string s1 = "true";
    string s2 = "false";
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                return s2;
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
                st.pop();
            else
                return s2;
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
                st.pop();
            else
                return s2;
        }
    }
    if (st.empty())
        return s1;
    else
        return s2;
}
int main()
{
    string s;
    cin >> s;
    cout << check(s);
    return 0;
}