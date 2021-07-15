//Using While loop
bool isPowerOfFour(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 4 != 0)
            return false;
        n = n / 4;
    }
    return true;
}
//
bool isPowerOfFour(unsigned int n)
{
    int count = 0;
    if (n && !(n & (n - 1)))
    {
        while (n > 1)
        {
            n >>= 1;
            count = count + 1;
        }
        return (count % 2 == 0);
    }

    return 0;
}