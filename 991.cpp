class Solution
{
public:
    int brokenCalc(int s, int t)
    {

        int cnt = 0;
        int x = t;
        while (s < x)
        {
            if (x % 2 == 0)
            {
                x = x / 2;
            }
            else
                x = x + 1;
            ++cnt;
        }
        if (s == x)
            return cnt;
        while (x < s)
        {
            x = x + 1;
            ++cnt;
        }
        return cnt;
    }
};