#include <bits/stdc++.h>
using namespace std;
 bool isVowel(char a){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<=r){
            if(isVowel(s[l])&&isVowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!isVowel(s[l])){
                l++;
            }
            else if(!isVowel(s[r])){
                r--;
            }
        }
        return s;
    }
int main()
{
    string  str1;
    getline(cin,str1);
    cout << reverseVowels(str1);
}