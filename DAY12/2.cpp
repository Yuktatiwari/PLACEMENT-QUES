int hammingWeight(uint32_t n)
{
    int c = 0;
    if (n < 0)
        return false;
    while (n)
    {
        c++;
        n ^= n & (-n);
    }
    return c;
}