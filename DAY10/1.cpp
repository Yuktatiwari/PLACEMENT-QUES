#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
        if(s.length()<=1) return true;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(isalnum(s[l])&&isalnum(s[r])){
                if(s[l]!=s[r]) return false;
                else{
                    l++;
                    r--;
                }
            }
            else if(!isalnum(s[l])) l++;
            else if(!isalnum(s[r])) r--;
        }
        return true;
    }
int main()
{
    string str;
    getline(cin, str);
    if (isPalindrome(str))
    {
        cout << "Yes, string is palindrome";
    }
    else
    {
        cout << "No, string isn't palindrome";
    }
}