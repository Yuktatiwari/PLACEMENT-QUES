#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1.length() != s2.length())
    {
        return false;
    }
    if(s1==s2)
    return true;
    else
    return false;
}
int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (isAnagram(str1, str2))
    {
        cout << "Yes, string is anagram";
    }
    else
    {
        cout << "No, string isn't anagram";
    }
}