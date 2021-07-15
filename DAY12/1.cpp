int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (auto i : nums)
    {
        ans ^= i;
    }
    return ans;
}
//using sort function
int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i = i + 2)
    {
        if (nums[i] != nums[i + 1])
            return nums[i];
    }
    if (nums.size() % 2 != 0)
        return nums[nums.size() - 1];
    return -1;
}