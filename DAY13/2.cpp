int count1(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int count = 0;
    while (n)
    {
        count++;
        n ^= n & (-n);
    }
    return count;
}
vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
        ans.push_back(count1(i));
    }
    return ans;
}