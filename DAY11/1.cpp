
vector<string> findWords(vector<string> &words)
{
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl";
    string s3 = "zxcvbnm", s = "";
    int c = 0;
    vector<string> ans;
    for (int i = 0; i < words.size(); i++)
    {
        s = words[i];
        c = 0;
        if (s1.find(tolower(s[0])) != -1)
        {
            for (int j = 1; j < s.length(); j++)
            {
                if (s1.find(tolower(s[j])) == -1)
                    c++;
            }
            if (c == 0)
                ans.push_back(s);
        }
        else if (s2.find(tolower(s[0])) != -1)
        {
            for (int j = 1; j < s.length(); j++)
            {
                if (s2.find(tolower(s[j])) == -1)
                    c++;
            }
            if (c == 0)
                ans.push_back(s);
        }
        else if (s3.find(tolower(s[0])) != -1)
        {
            for (int j = 1; j < s.length(); j++)
            {
                if (s3.find(tolower(s[j])) == -1)
                    c++;
            }
            if (c == 0)
                ans.push_back(s);
        }
    }
    return ans;
}