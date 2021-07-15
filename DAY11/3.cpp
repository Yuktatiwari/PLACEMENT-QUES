vector<int> shortestToChar(string s, char c)
{
    vector<int> v1, v2;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
            v1.push_back(i);
    }
    for (int i = 0; i < s.size(); i++)
    {
        int minimum = INT_MAX;
        for (int j = 0; j < v1.size(); j++)
        {
            minimum = min(minimum, abs(i - v1[j]));
        }
        v2.push_back(minimum);
    }
    return v2;
}