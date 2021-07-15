string mostCommonWord(string para, vector<string> &banned)
{
    unordered_set<string> set(begin(banned), end(banned));
    for (int i = 0; i < para.length(); i++)
        para[i] = isalpha(para[i]) ? tolower(para[i]) : ' ';
    stringstream ss(para);
    string s;
    unordered_map<string, int> k;
    while (ss >> s)
        if (!set.count(s))
            k[s]++;
    int freq = INT_MIN;
    for (auto i : k)
        if (i.second > freq)
            freq = i.second, s = i.first;
    return s;
}